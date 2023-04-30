
// Add support for OTA***************************************
#include <ArduinoOTA.h>
#include <ESPAsyncWebServer.h>
// **********************************************************

// #include "LittleFS.h"
#include <ESP8266HTTPClient.h>
#include <ESP_EEPROM.h>
#include <espnow.h>
#include <PxMatrix.h>
#include <Ticker.h>
#include <Arduino_JSON.h>
#include "Digit.h"
#include "TinyFont.h"
#include "DHT.h"
#include "Font4x5Fixed.h"
#include "PixelConstants.h"
#include "PixelHtmlCssJavaScript.h"

extern "C"
{
#include <user_interface.h>
}

uint8_t broadcastDRAddressX[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
#define BOARD_PX 1
#define BOARD_MS 2
#define BOARD_HS 3
#define BOARD_VS 6
#define BOARD_WM 10

// Create AsyncWebServer object on port 80
AsyncWebServer server(80);
AsyncWebSocket ws("/ws");
AsyncEventSource events("/events");

const unsigned long SECONDS = 1000;
const unsigned long MINUTES = 60 * SECONDS;

enum MessageType
{
  PAIRING,
  WAITING,
  DATA,
};
MessageType messageType;

typedef struct struct_MACADDRESS
{
  uint8_t macAddrSend[6];
} struct_MACADDRESS;
struct_MACADDRESS myMacAddr;

typedef struct struct_pairing
{ // new structure for pairing
  uint8_t msgType;
  uint8_t id;
  uint8_t macAddr[6];
  uint8_t channel;
} struct_pairing;
struct_pairing pairingData;  // data to pair
struct_pairing pairingDataI; // data to pair

char prepData[250] = {0};
typedef struct struct_SendData
{ // new structure for pairing
  uint8_t msgType;
  uint8_t id;
  uint8_t sendcounter;
  char aS[247];
} struct_SendData;
struct_SendData mySendData;
uint8_t mysendinc = 0;
uint8_t filecounter = 0;
unsigned short ia = 0;
uint8_t channel = 0;

// define the number of bytes you want to access
#define EEPROM_SIZE 512

// DHT Sensor
#define DHTPin 1
#define buzzPin 2
#define vibMotor 3

#define DHTTYPE DHT11 // DHT 11

// Initialize DHT sensor.
DHT dht(DHTPin, DHTTYPE);

//  MCUtime Variale Start************************************************
uint8_t s0 = 0, s1 = 0, m0 = 0, m1 = 0, h0 = 0, h1 = 0;
uint8_t _Second = 0, _Minute = 0, _Hour = 0;
uint8_t iseconds = 0, seconds = 0, minutes = 0, hours = 0;
uint8_t mdays = 0, mmonth = 0, mdate = 0;
int bwCnt_gap = 0, play_gap = 0, gapScroll = 0, gap_sp7 = 0, minsALL = 0 ;
int xpos = 0, xposg = 0, xposd = 0, ing = 0;

#define ROWS 64
#define COLS 16

#define LEFT 1
#define UP 2
#define DOWN 3
#define RIGHT 4
#define WAIT 5

#define INITIALIZING 1
#define PLAYING 2
#define PAUSED 3
#define GAME_OVER 4

struct point
{
  int xLine;
  int yLine;
};

point player[ROWS * COLS];
point playerHead;
point apple;

unsigned long lastClockTick;
uint8_t board[ROWS][COLS];

int gameRate, numApplesEaten = 0;
int playerLength;

// ESP8266 Pins for LED MATRIX
#define P_LAT 16
#define P_A 5
#define P_B 4
#define P_C 15
#define P_D 12
#define P_OE 0
Ticker display_ticker;

// Pins for LED MATRIX
PxMATRIX display(64, 32, P_LAT, P_OE, P_A, P_B, P_C, P_D);

// ISR for display refresh
void display_updater()
{
  uint8_t display_draw_time = 10; // 10-50 is usually fine
  display.display(display_draw_time);
}

void display_update_enable(bool is_enable)
{
  if (is_enable)
    display_ticker.attach(0.002, display_updater);
  else
    display_ticker.detach();
}

// Some standard colors
uint16_t myGRN = display.color565(0, 255, 0), myRED = display.color565(255, 0, 0), myCYN = display.color565(0, 255, 255), playerColor = myGRN ;

//=== SEGMENTS ======================================================
enum
{
  DIG_S0,
  DIG_S1,
  DIG_M0,
  DIG_M1,
  DIG_H0,
  DIG_H1,
  NUM_DIGITS,
};

Digit digit0(&display, 0, 54, 8, myRED);
Digit digit1(&display, 0, 45, 8, myRED);
Digit digit2(&display, 0, 33, 8, myCYN);
Digit digit3(&display, 0, 23, 8, myCYN);
Digit digit4(&display, 0, 11, 8, myCYN);
Digit digit5(&display, 0, 2, 8, myCYN);
Digit *Digits[NUM_DIGITS] =
    {&digit0, &digit1, &digit2, &digit3, &digit4, &digit5};
//  MCUtime Variale End***********************************************
