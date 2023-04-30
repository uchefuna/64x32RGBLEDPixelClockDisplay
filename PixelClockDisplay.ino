
#include "PixelClockVariables.h"

String processor(const String &var)
{
  char sentTxtOFF[100] = {0};

  if (var == "STATER" || var == "STATEG" || var == "STATEH" || var == "STATES" || var == "STATET" || var == "STATEQ" || var == "STATEU" || var == "STATEV" || var == "STATEY" || var == "STATEP" || var == "STATE0" || var == "STATE1" || var == "STATE2" || var == "STATE3" || var == "STATE4" || var == "STATE5" || var == "STATE6" || var == "STATE7" || var == "STATE8" || var == "STATE9" || var == "STATE10" || var == "STATE11" || var == "STATE12" || var == "STATE13" || var == "STATE14" || var == "STATE15")
  {
    strcpy_P(sentTxtOFF, varOFF);
    return sentTxtOFF;
  }

  else if (var == "DEVSTATUS")
  {
    if (EEPROM.read(29) >= 3)
      strcpy_P(sentTxtOFF, varDR1);
    else
      strcpy_P(sentTxtOFF, varDR2);
    return sentTxtOFF;
  }
  else if (var == "STATE1S")
  {
    if (EEPROM.read(29) == 1)
      strcpy_P(sentTxtOFF, varOFF);
    else
      strcpy_P(sentTxtOFF, varON);
    return sentTxtOFF;
  }

  else if (var == "SENSOR")
  {
    itoa(analogRead(A0), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "BASICOTA")
  {
    itoa(EEPROM.read(129), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "OLDMAC")
    return WiFi.macAddress().c_str();

  else if (var == "EPRM022")
  {
    itoa(EEPROM.read(22), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "EPRM039")
  {
    itoa(EEPROM.read(39), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "INPUTS1")
  {
    char inputS1[24] = {0};
    EEPROM.get(336, inputS1);
    return inputS1;
  }
  else if (var == "INPUTS2")
  {
    char inputS2[10] = {0};
    EEPROM.get(183, inputS2);
    return inputS2;
  }
  else if (var == "SENDATA")
  {
    char sendData[20] = {0};
    EEPROM.get(401, sendData);
    return sendData;
  }
  else if (var == "RECDATA")
  {
    char reciData[20] = {0};
    EEPROM.get(421, reciData);
    return reciData;
  }

  else if (var == "S100")
  {
    itoa(EEPROM.read(100), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S101")
  {
    itoa(EEPROM.read(101), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S102")
  {
    itoa(EEPROM.read(102), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S103")
  {
    itoa(EEPROM.read(103), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S104")
  {
    itoa(EEPROM.read(104), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S105")
  {
    itoa(EEPROM.read(105), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S106")
  {
    itoa(EEPROM.read(106), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S107")
  {
    itoa(EEPROM.read(107), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S108")
  {
    itoa(EEPROM.read(108), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S109")
  {
    itoa(EEPROM.read(109), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S110")
  {
    itoa(EEPROM.read(110), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S111")
  {
    itoa(EEPROM.read(111), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S112")
  {
    itoa(EEPROM.read(112), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S113")
  {
    itoa(EEPROM.read(113), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S114")
  {
    itoa(EEPROM.read(114), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S115")
  {
    itoa(EEPROM.read(115), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S116")
  {
    itoa(EEPROM.read(116), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S117")
  {
    itoa(EEPROM.read(117), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S118")
  {
    itoa(EEPROM.read(118), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S119")
  {
    itoa(EEPROM.read(119), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S120")
  {
    itoa(EEPROM.read(120), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S121")
  {
    itoa(EEPROM.read(121), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S122")
  {
    itoa(EEPROM.read(122), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S123")
  {
    itoa(EEPROM.read(123), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S124")
  {
    itoa(EEPROM.read(124), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S125")
  {
    itoa(EEPROM.read(125), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S126")
  {
    itoa(EEPROM.read(126), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S127")
  {
    itoa(EEPROM.read(127), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S128")
  {
    itoa(EEPROM.read(128), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S390")
  {
    itoa(EEPROM.read(390), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S391")
  {
    itoa(EEPROM.read(391), sentTxtOFF, 10);
    return sentTxtOFF;
  }
  else if (var == "S401")
  {
    itoa(EEPROM.read(401), sentTxtOFF, 10);
    return sentTxtOFF;
  }
}

void getBrwsTimeDate()
{
  char inputS1[24] = {0};
  EEPROM.get(336, inputS1);

  iseconds = /* setaSS = */ atoi(inputS1);
  minutes = atoi(inputS1 + 3);
  hours = atoi(inputS1 + 6);
  mdays = atoi(inputS1 + 9);
  mdate = atoi(inputS1 + 11);
  mmonth = atoi(inputS1 + 14);

  unsigned short myear = 0, setaYY = 0, setbYY = 0;
  myear = setaYY = setbYY = atoi(inputS1 + 17);
  EEPROM.put2(67, myear);
  EEPROM.put2(65, setaYY);
  EEPROM.put2(40, setbYY);
}

void handleWebSocketMessage(void *arg, uint8_t *data, size_t len)
{
  AwsFrameInfo *info = (AwsFrameInfo *)arg;
  if (info->final && info->index == 0 && info->len == len && info->opcode == WS_TEXT)
  {
    char sentTxtON[20] = {0};

    data[len] = 0;
    char webData[4] = {0};
    memset(&webData, '\0', sizeof webData);
    memmove(webData, data, sizeof webData);
    EEPROM.put(397, webData);

    if (data[0] == 'R' && data[1] == 'S' && data[2] == 'T')
    {
      EEPROM.write(60, 51);
      EEPROM.write(100, EEPROM.read(100) + 1);
      strcpy_P(sentTxtON, varONR), ws.textAll(sentTxtON);
    }

    if (EEPROM.read(20) == 1 || EEPROM.read(20) == 2)
    {
      if (data[0] == 'E' && data[1] == 'X' && data[2] == 'T')
      {
        EEPROM.write(57, 5);
        EEPROM.write(393, EEPROM.read(393) + 1);
        strcpy_P(sentTxtON, varON14), ws.textAll(sentTxtON);
      }
    }

    if (EEPROM.read(29) < 3)
      if (data[0] == 'S' && data[1] == 'S' && data[2] == 'Y')
      {
        EEPROM.write(29, 2);
        EEPROM.write(390, EEPROM.read(390) + 1);
        strcpy_P(sentTxtON, varON11), ws.textAll(sentTxtON);
      }

    if (EEPROM.read(51) != 1 && EEPROM.read(63) != 27 && EEPROM.read(63) != 57 && EEPROM.read(57) == 0)
    {
      if (data[0] == 'Z' && data[1] == 'E' && data[2] == 'R')
      {
        EEPROM.write(60, 0);
        EEPROM.write(101, EEPROM.read(101) + 1);
        numApplesEaten = 6, gameRate = 0;
        strcpy_P(sentTxtON, varON0), ws.textAll(sentTxtON);
      }
    }

    if (EEPROM.read(50) == 1 && EEPROM.read(60) == 14)
    {
      if (data[0] == 'Z')
      {
        if (data[1] == 'w')
        {
          char inputS1[24] = {0};
          memset(inputS1, '\0', sizeof inputS1);
          memmove(inputS1, data + 2, sizeof inputS1);
          EEPROM.put(336, inputS1);

          EEPROM.write(60, 132);
        }
        EEPROM.write(102, EEPROM.read(102) + 1);
      }
    }

    if ((EEPROM.read(51) == 3 || EEPROM.read(51) == 2 || EEPROM.read(51) == 50) && EEPROM.read(60) == 0)
    {
      if (data[0] == 'S' && data[1] == 'L' && data[2] == 'P')
      {
        if (EEPROM.read(50) != 2)
          EEPROM.write(50, 6);

        EEPROM.write(60, 125);
        EEPROM.write(103, EEPROM.read(103) + 1);
        strcpy_P(sentTxtON, varONS), ws.textAll(sentTxtON);
      }

      if (EEPROM.read(50) == 1 && EEPROM.read(29) == 3)
      {
        if (EEPROM.read(63) != 30 && EEPROM.read(63) != 31 && EEPROM.read(63) != 32 && EEPROM.read(63) != 57 && EEPROM.read(63) != 27 && EEPROM.read(63) != 0 && EEPROM.read(63) != 1)
        {

          if (EEPROM.read(57) == 0)
          {
            if (data[0] == 'S' && data[1] == 'E' && data[2] == 'E')
            {
              EEPROM.write(51, 0);
              EEPROM.write(20, 1);
              EEPROM.write(59, 0);

              EEPROM.write(24, 1);
              EEPROM.write(60, 189);
              EEPROM.write(391, EEPROM.read(391) + 1);
              strcpy_P(sentTxtON, varON13), ws.textAll(sentTxtON);
            }

            if (data[0] == 'S' && data[1] == 'E' && data[2] == 'P')
            {
              EEPROM.write(51, 0);
              EEPROM.write(20, 2);
              EEPROM.write(59, 0);

              EEPROM.write(24, 1);
              EEPROM.write(60, 189);
              EEPROM.write(105, EEPROM.read(105) + 1);
              strcpy_P(sentTxtON, varON15), ws.textAll(sentTxtON);
            }
          }

          if (data[0] == 'B' && data[1] == 'T' && data[2] == '1')
          {
            EEPROM.write(60, 117);
            EEPROM.write(104, EEPROM.read(104) + 1);
            strcpy_P(sentTxtON, varON1), ws.textAll(sentTxtON);
          }

          if (data[0] == 'B' && data[1] == 'T' && data[2] == '2')
          {
            strcpy_P(sentTxtON, varON2), ws.textAll(sentTxtON);
          }

          if (data[0] == 'B' && data[1] == 'T' && data[2] == '3')
          {
            EEPROM.write(60, 74);
            EEPROM.write(106, EEPROM.read(106) + 1);
            strcpy_P(sentTxtON, varON3), ws.textAll(sentTxtON);
          }

          if (data[0] == 'B' && data[1] == 'T' && data[2] == '4')
          {
            EEPROM.write(60, 128);
            EEPROM.write(107, EEPROM.read(107) + 1);
            strcpy_P(sentTxtON, varON4), ws.textAll(sentTxtON);
          }

          if (data[0] == 'B' && data[1] == 'T' && data[2] == '5')
          {
            EEPROM.write(108, EEPROM.read(108) + 1);
            strcpy_P(sentTxtON, varON5), ws.textAll(sentTxtON);
          }

          if (data[0] == 'B' && data[1] == 'T' && data[2] == '6')
          {
            EEPROM.write(109, EEPROM.read(109) + 1);
            strcpy_P(sentTxtON, varON6), ws.textAll(sentTxtON);
          }

          if (data[0] == 'B' && data[1] == 'T' && data[2] == 'W')
          {
            EEPROM.write(110, EEPROM.read(110) + 1);
            strcpy_P(sentTxtON, varON10), ws.textAll(sentTxtON);
          }

          if (EEPROM.read(131) == 0 && EEPROM.read(15) == 1)
          {
            if (data[0] == 'B' && data[1] == 'T' && data[2] == 'Q')
            {
              EEPROM.write(60, 1);
              EEPROM.write(111, EEPROM.read(111) + 1);
              strcpy_P(sentTxtON, varONQ), ws.textAll(sentTxtON);
            }

            if (data[0] == 'B' && data[1] == 'T' && data[2] == 'U')
            {
              numApplesEaten = 2;
              EEPROM.write(60, 1);
              EEPROM.write(112, EEPROM.read(112) + 1);
              strcpy_P(sentTxtON, varONU), ws.textAll(sentTxtON);
            }

            if (data[0] == 'B' && data[1] == 'T' && data[2] == 'V')
            {
              numApplesEaten = 3;
              EEPROM.write(60, 1);
              EEPROM.write(113, EEPROM.read(113) + 1);
              strcpy_P(sentTxtON, varONV), ws.textAll(sentTxtON);
            }

            if (data[0] == 'B' && data[1] == 'T' && data[2] == 'P')
            {
              if (EEPROM.read(28) == 1)
                EEPROM.write(71, 52), bwCnt_gap = 0;
              EEPROM.write(60, 1);
              numApplesEaten = 10;
              EEPROM.write(114, EEPROM.read(114) + 1);
              strcpy_P(sentTxtON, varONP), ws.textAll(sentTxtON);
            }
          }

          if (minutes != 0 && minutes != 58 && minutes != 59)
          {
            if (data[0] == 'B' && data[1] == 'T' && data[2] == 'Y')
            {
              numApplesEaten = 4;
              EEPROM.write(59, 0);
              EEPROM.write(60, 7);
              EEPROM.write(115, EEPROM.read(115) + 1);
              strcpy_P(sentTxtON, varONY), ws.textAll(sentTxtON);
            }
          }

          if (data[0] == 'B' && data[1] == 'T' && data[2] == 'r')
          {
            EEPROM.write(60, 131);
            EEPROM.write(116, EEPROM.read(116) + 1);
            strcpy_P(sentTxtON, varON7), ws.textAll(sentTxtON);
          }

          if (EEPROM.read(18) == 1)
          {
            if (data[0] == 'Z')
            {
              char inputS1[24] = {0};
              memset(inputS1, '\0', sizeof inputS1);
              memmove(inputS1, data + 2, sizeof inputS1);
              EEPROM.put(336, inputS1);

              if (data[1] == 'a') // For hand set time button
              {
                EEPROM.write(60, 85);
                EEPROM.write(117, EEPROM.read(117) + 1);
                strcpy_P(sentTxtON, varON8), ws.textAll(sentTxtON);
              }

              // set time by browser current time
              if (data[1] == 'b') // For browser set time button
              {
                EEPROM.write(60, 89);
                EEPROM.write(118, EEPROM.read(118) + 1);
                strcpy_P(sentTxtON, varON9), ws.textAll(sentTxtON);
              }
              EEPROM.write(18, 0);
            }
          }

          if (data[0] == 'C' && data[1] == 'L' && data[2] == 'K')
          {
            if (EEPROM.read(28) == 2)
              EEPROM.write(48, 1);

            if (EEPROM.read(48) == 0)
              EEPROM.write(60, 123), EEPROM.write(48, 1), EEPROM.write(49, 0);
            else
              EEPROM.write(60, 125), EEPROM.write(50, 2), EEPROM.write(48, 0);
            numApplesEaten = 7;

            EEPROM.write(119, EEPROM.read(119) + 1);
            strcpy_P(sentTxtON, varONG), ws.textAll(sentTxtON);
          }

          if (data[0] == 'G' && data[1] == 'A' && data[2] == 'M')
          {
            if (EEPROM.read(28) == 3)
              EEPROM.write(49, 1);

            if (EEPROM.read(49) == 0)
              EEPROM.write(60, 124), EEPROM.write(49, 1), EEPROM.write(48, 0);
            else
              EEPROM.write(60, 125), EEPROM.write(50, 2), EEPROM.write(49, 0);
            numApplesEaten = 8;

            EEPROM.write(120, EEPROM.read(120) + 1);
            strcpy_P(sentTxtON, varONH), ws.textAll(sentTxtON);
          }
        }
      }
    }

    if (EEPROM.read(50) == 1)
    {
      if (EEPROM.read(51) == 3 && EEPROM.read(28) == 3)
      {
        if (EEPROM.read(63) != 30 && EEPROM.read(63) != 31 && EEPROM.read(63) != 32 && EEPROM.read(63) != 57 && EEPROM.read(63) != 27 && EEPROM.read(63) != 0 && EEPROM.read(63) != 1)
          if (data[0] == 'B' && data[1] == 'T' && data[2] == 'T')
          {
            EEPROM.write(60, 109);
            EEPROM.write(121, EEPROM.read(121) + 1);
            strcpy_P(sentTxtON, varONT), ws.textAll(sentTxtON);
          }
        if (data[0] == 'B' && data[1] == 'T' && data[2] == 'J')
        {
          EEPROM.write(60, 17);
          EEPROM.write(122, EEPROM.read(122) + 1);
        }
        if (EEPROM.read(56) == PAUSED)
          if (data[0] == 'B' && data[1] == 'T' && data[2] == 'H')
          {
            EEPROM.write(60, 111);
            EEPROM.write(123, EEPROM.read(123) + 1);
          }

        if (EEPROM.read(56) == PLAYING)
        {
          if (data[0] == 'B' && data[1] == 'T' && data[2] == 'I')
          {
            EEPROM.write(60, 113);
            EEPROM.write(124, EEPROM.read(124) + 1);
          }
          if (data[0] == 'B' && data[1] == 'T' && data[2] == 'K')
          {
            EEPROM.write(60, 28);
            EEPROM.write(55, UP);
            EEPROM.write(125, EEPROM.read(125) + 1);

            char actPLAY[10] = {0};
            strcpy_P(actPLAY, actPLAY11);
            EEPROM.put(362, actPLAY);
          }
          if (data[0] == 'B' && data[1] == 'T' && data[2] == 'L')
          {
            EEPROM.write(60, 28);
            EEPROM.write(55, LEFT);
            EEPROM.write(126, EEPROM.read(126) + 1);

            char actPLAY[10] = {0};
            strcpy_P(actPLAY, actPLAY12);
            EEPROM.put(362, actPLAY);
          }
          if (data[0] == 'B' && data[1] == 'T' && data[2] == 'M')
          {
            EEPROM.write(60, 28);
            EEPROM.write(55, RIGHT);
            EEPROM.write(127, EEPROM.read(127) + 1);

            char actPLAY[10] = {0};
            strcpy_P(actPLAY, actPLAY13);
            EEPROM.put(362, actPLAY);
          }
          if (data[0] == 'B' && data[1] == 'T' && data[2] == 'N')
          {
            EEPROM.write(60, 28);
            EEPROM.write(55, DOWN);
            EEPROM.write(128, EEPROM.read(128) + 1);

            char actPLAY[10] = {0};
            strcpy_P(actPLAY, actPLAY14);
            EEPROM.put(362, actPLAY);
          }
        }
      }
    }
  }
}

void onEvent(AsyncWebSocket *server, AsyncWebSocketClient *client, AwsEventType type, void *arg, uint8_t *data, size_t len)
{
  char sentTxtON[20] = {0};
  switch (type)
  {
  case WS_EVT_CONNECT:
    if (EEPROM.read(23) == 1)
    {
      EEPROM.write(23, 2);
      if (EEPROM.read(61) == 1)
        strcpy_P(sentTxtON, varOFF2E), ws.textAll(sentTxtON);
      else if (EEPROM.read(61) == 2)
        strcpy_P(sentTxtON, varOFF2F), ws.textAll(sentTxtON);
      else if (EEPROM.read(61) == 3)
        strcpy_P(sentTxtON, varOFF2G), ws.textAll(sentTxtON);
      else if (EEPROM.read(61) == 0)
        strcpy_P(sentTxtON, varOFF2L), ws.textAll(sentTxtON);

      if (client->remoteIP().toString().substring(0, 6) == "10.0.0")
        strcpy_P(sentTxtON, varOFF2H), ws.textAll(sentTxtON);
      else if (client->remoteIP().toString().substring(0, 9) == "192.168.0")
        strcpy_P(sentTxtON, varOFF2I), ws.textAll(sentTxtON);
      else if (client->remoteIP().toString().substring(0, 7) == "10.0.39")
        strcpy_P(sentTxtON, varOFF2J), ws.textAll(sentTxtON);
      else
        strcpy_P(sentTxtON, varOFF2K), ws.textAll(sentTxtON);

      eventConnected();
    }
    break;
  case WS_EVT_DISCONNECT:
    if (EEPROM.read(23) == 2)
    {
      EEPROM.write(23, 1);
      eventDisconnected();
    }
    break;
  case WS_EVT_ERROR:
    break;
  case WS_EVT_PONG:
    break;
  case WS_EVT_DATA:
    if (EEPROM.read(23) == 2)
      handleWebSocketMessage(arg, data, len);
    break;
  }
}

void delayBuzz(const int del1, const int del2)
{
  analogWrite(buzzPin, 30), delay(del1);
  analogWrite(buzzPin, 0), delay(del2);
}

void playBuzz()
{
  if (EEPROM.read(15) == 1)
  {
    if (EEPROM.read(45) == 1)
      analogWrite(buzzPin, 50), EEPROM.write(45, 2);
    else if (EEPROM.read(45) == 2)
      analogWrite(buzzPin, 0), EEPROM.write(45, 4);
    else if (EEPROM.read(45) == 4)
      play_gap = 0, EEPROM.write(45, 0);
  }
}

void playVibr()
{
  if (EEPROM.read(46) == 1)
    analogWrite(vibMotor, 300), EEPROM.write(46, 2);
  else if (EEPROM.read(46) == 2)
    analogWrite(vibMotor, 0), EEPROM.write(46, 4);
  else if (EEPROM.read(46) == 4)
    play_gap = 0, EEPROM.write(46, 0);
}

void blinkWifiCount()
{
  uint16_t myGLD = display.color565(235, 205, 0), myBLK = display.color565(0, 0, 0);

  unsigned long bCntWifi_past = 0, bCntWifi_gap = 0;
  EEPROM.get(11, bCntWifi_past), EEPROM.get(95, bCntWifi_gap);

  unsigned long nowMbCntWifi = millis();
  if ((unsigned long)nowMbCntWifi - bCntWifi_past >= bCntWifi_gap)
  {
    bCntWifi_past = nowMbCntWifi;
    EEPROM.put(11, bCntWifi_past);

    EEPROM.write(74, EEPROM.read(74) + 1);

    if (EEPROM.read(45) == 0)
    {
      if (EEPROM.read(18) == 1)
        display.drawPixel(2, 30, myGLD);
      else if (EEPROM.read(28) == 1)
        display.drawPixel(2, 7, myGLD);
      else if (EEPROM.read(28) == 2)
        display.drawPixel(2, 10, myGLD);
      EEPROM.write(45, 3);
      bCntWifi_gap = 50;
      EEPROM.put(95, bCntWifi_gap);
    }
    else if (EEPROM.read(45) == 3)
    {
      if (EEPROM.read(18) == 1)
        display.drawPixel(2, 30, myBLK);
      else if (EEPROM.read(28) == 1)
        display.drawPixel(2, 7, myBLK);
      else if (EEPROM.read(28) == 2)
        display.drawPixel(2, 10, myBLK);
      EEPROM.write(45, 0);
      bCntWifi_gap = 100;
      EEPROM.put(95, bCntWifi_gap);
    }
  }

  if (EEPROM.read(74) == 8)
  {
    display.drawPixel(2, 7, myBLK);
    EEPROM.write(74, 0);
    bCntWifi_gap = 1000;
    EEPROM.put(95, bCntWifi_gap);
  }
}

void wifiStatus()
{
  if (EEPROM.read(71) != 204)
  {
    uint16_t myGLD = display.color565(235, 205, 0);

    if (WiFi.gatewayIP().toString() == "10.0.0.1" || WiFi.gatewayIP().toString() == "192.168.0.1")
    {
      if (EEPROM.read(18) == 1)
        display.drawPixel(2, 30, myGLD);
      else if (EEPROM.read(28) == 1)
        display.drawPixel(2, 7, myGLD);
      else if (EEPROM.read(28) == 2)
        display.drawPixel(2, 10, myGLD);
    }
    else
      blinkWifiCount();
  }
}

void dotColon()
{
  unsigned long past500 = 0;
  EEPROM.get(193, past500);

  unsigned long now500 = millis();
  if ((unsigned long)now500 - past500 >= 500UL)
  {
    past500 = now500;
    EEPROM.put(193, past500);

    if (EEPROM.read(25) == 1)
    {
      if (EEPROM.read(29) == 3)
        apStatus();
      dotSecs();
    }

    PairingStatus();

    if ((EEPROM.read(57) == 4) && (EEPROM.read(20) == 1 || EEPROM.read(20) == 2))
    {
      preparingData0();
    }

    preparingData1();

    dispGameSwitch();

    fiftyNine100();
  }
}

void dispGameSwitch()
{
  char sentTxtOFF[20] = {0};

  switch (EEPROM.read(60))
  {
  case 8:
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 9:
    clear_RectBLK01();
    if (EEPROM.read(28) == 1)
    {
      beautColBLK2();
      pixMCUClkDispS();
      EEPROM.write(26, 1);
    }
    else if (EEPROM.read(28) == 2)
    {
      EEPROM.write(59, 0);
      draw_dateGM();
      uint16_t cc_blu = display.color565(0, 0, 128);
      display.drawRect(0, 9, 64, 16, cc_blu);
    }

    EEPROM.write(60, 11);
    strcpy_P(sentTxtOFF, varOFFY), ws.textAll(sentTxtOFF);
    break;

  case 10:
    EEPROM.write(60, 11);
    break;

  case 12:
    EEPROM.write(60, 127);
    break;
  case 66:
    checkWifiStatus();
    break;

  case 28:
    dispPLAY();
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 29:
    if (EEPROM.read(35) == 1)
      EEPROM.write(60, 114), EEPROM.write(35, 0);
    else if (EEPROM.read(36) == 1)
      EEPROM.write(60, 122), EEPROM.write(36, 0);
    else
      EEPROM.write(60, 0);
    break;
  }
}

void PairingStatus()
{
  switch (EEPROM.read(60))
  {
  case 189:
  {
    uint16_t cc_wht = display.color565(16, 16, 16), myBLK = display.color565(0, 0, 0);

    if (EEPROM.read(28) == 2)
    {
      display.drawRect(32, 1, 2, 7, cc_wht);
      display.fillRect(1, 1, 62, 7, myBLK);
      display.fillRect(0, 25, 64, 7, myBLK);
      EEPROM.write(15, 0);
      EEPROM.write(37, 1);
    }
    else if (EEPROM.read(28) == 1)
    {
      EEPROM.write(15, 2);
      display.fillRect(0, 26, 64, 6, myBLK);
    }

    dimPixel1();

    EEPROM.write(60, 181);
  }
  break;
  case 181:
  {
    if (EEPROM.read(20) == 1 || EEPROM.read(20) == 2)
    {
      uint16_t cc_dka = display.color565(189, 183, 107), myBLK = display.color565(0, 0, 0);
      char sentTxtON[20] = {0};

      display.fillRect(0, 26, 64, 6, myBLK);
      display.setFont(&Font4x5Fixed);
      display.setTextColor(cc_dka);
      display.setCursor(1, 30);
      strcpy_P(sentTxtON, var234);
      display.print(sentTxtON);
      display.setFont();
    }

    EEPROM.write(60, EEPROM.read(60) + 1);
  }
  break;
  case 182:
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 183: // PAIR_START:
  {
    if (EEPROM.read(20) == 1 || EEPROM.read(20) == 2)
    {
      uint16_t cc_sal = display.color565(250, 128, 114), myBLK = display.color565(0, 0, 0);
      char sentTxtON[20] = {0};

      display.fillRect(0, 26, 64, 6, myBLK);
      display.setFont(&Font4x5Fixed);
      display.setTextColor(cc_sal);
      display.setCursor(1, 30);
      strcpy_P(sentTxtON, var235);
      display.print(sentTxtON);
      display.setFont();
    }

    // set WiFi channel
    esp_now_deinit();
    wifi_promiscuous_enable(1);
    wifi_set_channel(channel);
    wifi_promiscuous_enable(0);
    EEPROM.write(60, EEPROM.read(60) + 1);
  }
  break;
  case 184: // PAIR_REQUEST:
  {
    if (EEPROM.read(20) == 1 || EEPROM.read(20) == 2)
    {
      uint16_t cc_fgn = display.color565(34, 139, 34), myBLK = display.color565(0, 0, 0);
      char sentTxtON[20] = {0};

      display.fillRect(0, 26, 64, 6, myBLK);
      display.setFont(&Font4x5Fixed);
      display.setTextColor(cc_fgn);
      display.setCursor(1, 30);
      strcpy_P(sentTxtON, var236);
      display.print(sentTxtON);
      display.setFont();
    }

    // time out expired,  try next channel
    channel++;
    if (channel > 13)
    {
      channel = 0;
    }

    EEPROM.write(60, EEPROM.read(60) + 1); // PAIR_REQUESTED
  }
  break;

  case 185: // PAIR_REQUESTED:
  {
    if (EEPROM.read(20) == 1 || EEPROM.read(20) == 2)
    {
      uint16_t cc_lsg = display.color565(119, 136, 153), myBLK = display.color565(0, 0, 0);
      char sentTxtON[20] = {0};

      display.fillRect(0, 26, 64, 6, myBLK);
      display.setFont(&Font4x5Fixed);
      display.setTextColor(cc_lsg);
      display.setCursor(1, 30);
      strcpy_P(sentTxtON, var237);
      display.print(sentTxtON);
      display.setFont();
    }

    // Init ESP-NOW
    if (esp_now_init() != 0)
    {
      EEPROM.write(60, 181);
    }
    else
    {
    }

    esp_now_set_self_role(ESP_NOW_ROLE_COMBO);

    // set callback routines
    esp_now_register_send_cb(OnDataSent);
    esp_now_register_recv_cb(OnDataRecv);

    // set pairing data to send to the server
    mySendData.msgType = PAIRING;
    pairingData.id = BOARD_PX;
    pairingData.channel = channel;

    esp_now_send(broadcastDRAddressX, (uint8_t *)&pairingData, sizeof(pairingData));

    EEPROM.write(60, EEPROM.read(60) + 1);
  }
  break;

  case 188: // PAIRED:
  {
    if (EEPROM.read(20) == 1 || EEPROM.read(20) == 2)
    {
      uint16_t myGLD = display.color565(235, 205, 38), cc_tom = display.color565(255, 99, 17), myBLK = display.color565(0, 0, 0);
      char sentTxtON[20] = {0};

      display.fillRect(0, 26, 64, 6, myBLK);
      display.setFont(&Font4x5Fixed);
      display.setTextColor(myGLD);
      display.setCursor(1, 30);
      strcpy_P(sentTxtON, var238);
      display.print(sentTxtON);
      display.setTextColor(cc_tom);
      display.print(pairingData.id);
      display.setFont();
    }
    pairingData.id = 0;
    channel = 0;
    EEPROM.write(60, 190);
  }
  break;
  }
}

void dotSecs()
{
  char sentTxtON[20] = {0};
  strcpy_P(sentTxtON, var001);
  uint16_t myWHT = display.color565(255, 255, 255), myBLK = display.color565(0, 0, 0);

  if (EEPROM.read(32) == 0)
  {
    if (EEPROM.read(28) == 1)
    {
      if (EEPROM.read(26) == 1)
        digit1.DrawColon(myWHT), digit3.DrawColon(myWHT);
    }
    else if (EEPROM.read(28) == 2 || EEPROM.read(28) == 3)
    {
      display.setFont(&Font4x5Fixed);
      display.setTextColor(myWHT);
      if (EEPROM.read(28) == 2)
      {
        if (EEPROM.read(21) != 202 && EEPROM.read(44) == 1)
        {
          if (EEPROM.read(37) == 1)
          {
            display.setCursor(44, 6);
            display.print(sentTxtON);
            display.setCursor(54, 6);
            display.print(sentTxtON);
          }
          else
          {
            display.setCursor(44, 30);
            display.print(sentTxtON);
            display.setCursor(54, 30);
            display.print(sentTxtON);
          }
        }
      }
      else if (EEPROM.read(28) == 3)
      {
        display.setCursor(44, 30);
        display.print(sentTxtON);
        display.setCursor(54, 30);
        display.print(sentTxtON);
      }
      display.setFont();
    }
    EEPROM.write(32, 1);
  }
  else if (EEPROM.read(32) == 1)
  {
    if (EEPROM.read(28) == 1)
    {
      if (EEPROM.read(26) == 1)
        digit1.DrawColon(myBLK), digit3.DrawColon(myBLK);
    }
    else if (EEPROM.read(28) == 2 || EEPROM.read(28) == 3)
    {
      display.setFont(&Font4x5Fixed);
      display.setTextColor(myBLK);
      if (EEPROM.read(28) == 2)
      {
        if (EEPROM.read(37) == 1)
        {
          display.setCursor(44, 6);
          display.print(sentTxtON);
          display.setCursor(54, 6);
          display.print(sentTxtON);
        }
        else
        {
          display.setCursor(44, 30);
          display.print(sentTxtON);
          display.setCursor(54, 30);
          display.print(sentTxtON);
        }
      }
      else if (EEPROM.read(28) == 3)
      {
        display.setCursor(44, 30);
        display.print(sentTxtON);
        display.setCursor(54, 30);
        display.print(sentTxtON);
      }
      display.setFont();
    }

    EEPROM.write(32, 2);
  }
  else if (EEPROM.read(32) == 2)
  {
    if (EEPROM.read(28) == 1)
    {
      if (EEPROM.read(26) == 1)
      {
        display.fillRect(20, 9, 2, 2, myWHT);
        display.fillRect(20, 15, 2, 3, myWHT);
        display.fillRect(20, 22, 2, 2, myWHT);
        display.fillRect(42, 9, 2, 2, myWHT);
        display.fillRect(42, 15, 2, 3, myWHT);
        display.fillRect(42, 22, 2, 2, myWHT);
      }
    }
    else if (EEPROM.read(28) == 2)
    {
      if (EEPROM.read(21) != 202 && EEPROM.read(44) == 1)
      {
        if (EEPROM.read(37) == 1)
        {
          display.drawPixel(44, 2, myWHT);
          display.drawPixel(44, 4, myWHT);
          display.drawPixel(44, 6, myWHT);
          display.drawPixel(54, 2, myWHT);
          display.drawPixel(54, 4, myWHT);
          display.drawPixel(54, 6, myWHT);
        }
        else
        {
          display.drawPixel(44, 26, myWHT);
          display.drawPixel(44, 28, myWHT);
          display.drawPixel(44, 30, myWHT);
          display.drawPixel(54, 26, myWHT);
          display.drawPixel(54, 28, myWHT);
          display.drawPixel(54, 30, myWHT);
        }
      }
    }
    else if (EEPROM.read(28) == 3)
    {
      display.drawPixel(44, 26, myWHT);
      display.drawPixel(44, 28, myWHT);
      display.drawPixel(44, 30, myWHT);
      display.drawPixel(54, 26, myWHT);
      display.drawPixel(54, 28, myWHT);
      display.drawPixel(54, 30, myWHT);
    }

    EEPROM.write(32, 3);
  }
  else if (EEPROM.read(32) == 3)
  {
    if (EEPROM.read(28) == 1)
    {
      if (EEPROM.read(26) == 1)
      {
        display.fillRect(20, 9, 2, 2, myBLK);
        display.fillRect(20, 15, 2, 3, myBLK);
        display.fillRect(20, 22, 2, 2, myBLK);
        display.fillRect(42, 9, 2, 2, myBLK);
        display.fillRect(42, 15, 2, 3, myBLK);
        display.fillRect(42, 22, 2, 2, myBLK);
      }
    }
    else if (EEPROM.read(28) == 2)
    {
      if (EEPROM.read(37) == 1)
      {
        display.drawPixel(44, 2, myBLK);
        display.drawPixel(44, 4, myBLK);
        display.drawPixel(44, 6, myBLK);
        display.drawPixel(54, 2, myBLK);
        display.drawPixel(54, 4, myBLK);
        display.drawPixel(54, 6, myBLK);
      }
      else
      {
        display.drawPixel(44, 26, myBLK);
        display.drawPixel(44, 28, myBLK);
        display.drawPixel(44, 30, myBLK);
        display.drawPixel(54, 26, myBLK);
        display.drawPixel(54, 28, myBLK);
        display.drawPixel(54, 30, myBLK);
      }
    }
    else if (EEPROM.read(28) == 3)
    {
      display.drawPixel(44, 26, myBLK);
      display.drawPixel(44, 28, myBLK);
      display.drawPixel(44, 30, myBLK);
      display.drawPixel(54, 26, myBLK);
      display.drawPixel(54, 28, myBLK);
      display.drawPixel(54, 30, myBLK);
    }
    EEPROM.write(32, 0);
  }
  display.setFont();
}

void apStatus()
{
  if (EEPROM.read(71) != 204)
  {
    uint16_t myBLK = display.color565(0, 0, 0);

    if (WiFi.softAPIP().toString() == "10.0.39.1")
    {
      if (EEPROM.read(18) == 1)
        display.drawPixel(7, 30, myGRN);
      else if (EEPROM.read(28) == 1)
        display.drawPixel(7, 7, myGRN);
      else if (EEPROM.read(28) == 2)
        display.drawPixel(7, 10, myGRN);
    }
    else
    {
      if (EEPROM.read(46) == 0)
      {
        if (EEPROM.read(18) == 1)
          display.drawPixel(7, 30, myBLK);
        else if (EEPROM.read(28) == 1)
          display.drawPixel(7, 7, myBLK);
        else if (EEPROM.read(28) == 2)
          display.drawPixel(7, 10, myBLK);
        EEPROM.write(46, 3);
      }
      else if (EEPROM.read(46) == 3)
      {
        if (EEPROM.read(18) == 1)
          display.drawPixel(7, 30, myGRN);
        else if (EEPROM.read(28) == 1)
          display.drawPixel(7, 7, myGRN);
        else if (EEPROM.read(28) == 2)
          display.drawPixel(7, 10, myGRN);
        EEPROM.write(46, 0);
      }
    }
  }
}

void buzzr_vibe()
{
  EEPROM.write(19, 26);
  uint16_t cc_red = display.color565(16, 0, 0), cc_grn = display.color565(0, 16, 0), cc_ylw = display.color565(16, 16, 0), myBLU = display.color565(0, 0, 255), cc_rdm = random(1000, 65535), myBLK = display.color565(0, 0, 0);

  EEPROM.write(33, EEPROM.read(33) + 1);

  if (EEPROM.read(33) == 1)
  {
    if (EEPROM.read(64) >= 6 && EEPROM.read(64) <= 23)
      if (numApplesEaten != 4)
        analogWrite(buzzPin, 70);

    if (EEPROM.read(28) == 2)
    {
      if (EEPROM.read(37) == 1)
      {
        display.drawRect(35, 1, 29, 7, myBLK);
        display.drawRect(35, 1, 9, 7, myBLU);
        display.drawRect(0, 1, 31, 7, myBLK);
        display.drawRect(22, 1, 9, 7, myBLU);
      }
      else
      {
        display.drawRect(35, 25, 29, 7, myBLK);
        display.drawRect(35, 25, 9, 7, myBLU);
        display.drawRect(0, 25, 31, 7, myBLK);
        display.drawRect(22, 25, 9, 7, myBLU);
      }
      if (EEPROM.read(57) == 10)
      {
        if (EEPROM.read(37) == 1)
          display.drawRect(0, 9, 64, 23, myBLK);
        else
          display.drawRect(0, 0, 64, 25, myBLK);
        EEPROM.write(57, 0);
      }
      buzzr_dateGL();
    }
    else if (EEPROM.read(28) == 3)
    {
      display.drawRect(35, 25, 29, 7, myBLK);
      display.drawRect(35, 25, 9, 7, myBLU);
    }
    else if (EEPROM.read(28) == 1)
      dotHour1();
    draw_love1BLK();
    bwCnt_gap = 900;
  }
  else if (EEPROM.read(33) == 2)
  {
    analogWrite(buzzPin, 0);

    if (EEPROM.read(28) == 2)
    {
      if (EEPROM.read(37) == 1)
      {
        display.drawRect(35, 1, 9, 7, myBLK);
        display.drawRect(45, 1, 9, 7, cc_red);

        display.drawRect(22, 1, 9, 7, myBLK);
        if (mmonth == 2 || mmonth == 4 || mmonth == 7)
          display.drawRect(9, 1, 14, 7, cc_red);
        else
          display.drawRect(9, 1, 13, 7, cc_red);
      }
      else
      {
        display.drawRect(35, 25, 9, 7, myBLK);
        display.drawRect(45, 25, 9, 7, cc_red);

        display.drawRect(22, 25, 9, 7, myBLK);
        if (mmonth == 2 || mmonth == 4 || mmonth == 7)
          display.drawRect(9, 25, 14, 7, cc_red);
        else
          display.drawRect(9, 25, 13, 7, cc_red);
      }
      buzzr_dateGB();
      display.drawRect(0, 9, 64, 16, cc_rdm);
    }
    else if (EEPROM.read(28) == 3)
    {
      display.drawRect(35, 25, 9, 7, myBLK);
      display.drawRect(45, 25, 9, 7, cc_red);
    }
    else if (EEPROM.read(28) == 1)
      dotHour2();
    draw_love1();
    bwCnt_gap = 1500;
  }
  else if (EEPROM.read(33) == 3)
  {
    if (EEPROM.read(64) >= 6 && EEPROM.read(64) <= 23)
      if (numApplesEaten != 4)
        analogWrite(buzzPin, 50);

    if (EEPROM.read(28) == 2)
    {
      if (EEPROM.read(37) == 1)
      {
        display.drawRect(45, 1, 9, 7, myBLK);
        display.drawRect(55, 1, 9, 7, cc_grn);

        if (mmonth == 2 || mmonth == 4 || mmonth == 7)
          display.drawRect(9, 1, 14, 7, myBLK);
        else
          display.drawRect(9, 1, 13, 7, myBLK);
        display.drawRect(0, 1, 9, 7, cc_grn);
        display.drawRect(0, 25, 64, 7, cc_rdm);
      }
      else
      {
        display.drawRect(45, 25, 9, 7, myBLK);
        display.drawRect(55, 25, 9, 7, cc_grn);

        if (mmonth == 2 || mmonth == 4 || mmonth == 7)
          display.drawRect(9, 25, 14, 7, myBLK);
        else
          display.drawRect(9, 25, 13, 7, myBLK);
        display.drawRect(0, 25, 9, 7, cc_grn);
        display.drawRect(0, 0, 64, 9, cc_rdm);
      }

      display.drawRect(0, 9, 64, 16, myBLK);
    }
    else if (EEPROM.read(28) == 3)
    {
      display.drawRect(45, 25, 9, 7, myBLK);
      display.drawRect(55, 25, 9, 7, cc_grn);
    }
    else if (EEPROM.read(28) == 1)
      dotHour3();
    draw_love1BLK();
    bwCnt_gap = 700;
  }
  else if (EEPROM.read(33) == 4)
  {
    analogWrite(buzzPin, 0);

    if (EEPROM.read(28) == 2)
    {
      EEPROM.write(33, 0), bwCnt_gap = 1000;
      if (EEPROM.read(37) == 1)
      {
        display.drawRect(55, 1, 9, 7, myBLK);
        display.drawRect(35, 1, 29, 7, cc_ylw);

        display.drawRect(0, 1, 9, 7, myBLK);
        display.drawRect(0, 1, 31, 7, cc_ylw);
        display.drawRect(0, 25, 64, 7, myBLK);
      }
      else
      {
        display.drawRect(55, 25, 9, 7, myBLK);
        display.drawRect(35, 25, 29, 7, cc_ylw);

        display.drawRect(0, 25, 9, 7, myBLK);
        display.drawRect(0, 25, 31, 7, cc_ylw);
        display.drawRect(0, 0, 64, 9, myBLK);
      }

      if (EEPROM.read(37) == 1)
        display.drawRect(0, 9, 64, 23, cc_rdm);
      else
        display.drawRect(0, 0, 64, 25, cc_rdm);
      EEPROM.write(57, 10);
    }
    else if (EEPROM.read(28) == 3)
    {
      EEPROM.write(33, 0), bwCnt_gap = 1000;
      display.drawRect(55, 25, 9, 7, myBLK);
      display.drawRect(35, 25, 29, 7, cc_ylw);
    }
    else if (EEPROM.read(28) == 1)
    {
      display.fillRect(1, 26, 62, 5, myBLK);
      draw_date1(), bwCnt_gap = 1300;
    }
    draw_love1();
  }
  else if (EEPROM.read(33) == 5)
  {
    if (EEPROM.read(64) >= 6 && EEPROM.read(64) <= 23)
      if (numApplesEaten != 4)
        analogWrite(buzzPin, 70);
    draw_love1BLK();
    bwCnt_gap = 700;
  }
  else if (EEPROM.read(33) == 6)
  {
    analogWrite(buzzPin, 0);
    draw_love1();
    EEPROM.write(33, 0);
    bwCnt_gap = 1000;
  }
}

void dotHour1()
{
  uint16_t cc_ylw = display.color565(16, 16, 0), myBLK = display.color565(0, 0, 0);
  display.drawRect(0, 0, 64, 32, myBLK);
  display.drawRect(1, 8, 62, 17, cc_ylw);

  display.fillRect(1, 26, 62, 5, myBLK);
  draw_roomTH();
}

void dotHour2()
{
  uint16_t cc_wht = display.color565(16, 16, 16), cc_ylw = display.color565(16, 16, 0), myBLK = display.color565(0, 0, 0);
  display.drawRect(0, 0, 64, 32, cc_wht);
  display.drawRect(1, 8, 62, 17, myBLK);

  display.fillRect(1, 26, 62, 5, myBLK);

  //-temperature
  EEPROM.write(17, 0), draw_weatherT();
  //-pressure
  EEPROM.write(17, 24), draw_weatherP();
  //-humidity
  EEPROM.write(17, 51), draw_weatherH();
}

void dotHour3()
{
  uint16_t cc_wht = display.color565(16, 16, 16), cc_ylw = display.color565(16, 16, 0), myBLK = display.color565(0, 0, 0);
  display.drawRect(0, 0, 64, 32, cc_wht);
  display.drawRect(1, 8, 62, 17, cc_ylw);

  display.fillRect(1, 26, 62, 5, myBLK);

  //-temperature
  EEPROM.write(17, 0), draw_weatherT();
  //-light sensor
  sensorDisp06();
  //-humidity
  EEPROM.write(17, 51), draw_weatherH();
}

void draw_love()
{
  if (seconds % 5 == 0)
    draw_love2();
}

void draw_love1()
{
  if (EEPROM.read(28) == 2)
    if (EEPROM.read(37) == 1)
      EEPROM.write(19, 26);
    else
      EEPROM.write(19, 2);
  else if (EEPROM.read(28) == 3)
    EEPROM.write(19, 18);
  else if (EEPROM.read(28) == 1)
    EEPROM.write(19, 1);

  EEPROM.write(17, 18), TFDrawChar(&display, 'h', EEPROM.read(17), EEPROM.read(19), myRED);
  EEPROM.write(17, 22), TFDrawChar(&display, 'i', EEPROM.read(17), EEPROM.read(19), myRED);
}

void draw_love1BLK()
{
  uint16_t myBLK = display.color565(0, 0, 0);
  char yo1, yo2;

  if (EEPROM.read(28) == 2)
    if (EEPROM.read(37) == 1)
      yo1 = 26, yo2 = 5;
    else
      yo1 = 2, yo2 = 5;
  else if (EEPROM.read(28) == 3)
    yo1 = 18, yo2 = 22;
  else if (EEPROM.read(28) == 1)
    yo1 = 1, yo2 = 5;

  display.fillRect(17, yo1, 13, yo2, myBLK);
}

void draw_love2()
{
  char sentTxtON[20] = {0};
  if (EEPROM.read(28) == 2)
    if (EEPROM.read(37) == 1)
      EEPROM.write(19, 30);
    else
      EEPROM.write(19, 6);
  else if (EEPROM.read(28) == 3)
    EEPROM.write(19, 22);
  else if (EEPROM.read(28) == 1)
    EEPROM.write(19, 5);

  EEPROM.write(17, 1);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(random(16, 65535));
  display.setCursor(EEPROM.read(17), EEPROM.read(19));
  strcpy_P(sentTxtON, var003);
  display.print(sentTxtON);
  EEPROM.write(17, 30);
  display.setCursor(EEPROM.read(17), EEPROM.read(19));
  strcpy_P(sentTxtON, var004);
  display.print(sentTxtON);
  EEPROM.write(17, 48);
  display.setCursor(EEPROM.read(17), EEPROM.read(19));
  strcpy_P(sentTxtON, var005);
  display.print(sentTxtON);
  display.setFont();
}

void getIntTime()
{
  char lineTime[15] = {0};
  strcpy_P(lineTime, lineTime1);
  EEPROM.put(286, lineTime);

  struct tm tmstruct;
  time_t nowT = 0;
  tmstruct.tm_year = 0;

  nowT = time(&nowT);
  localtime_r(&nowT, &tmstruct);

  iseconds = tmstruct.tm_sec + 1;
  minutes = tmstruct.tm_min; // get minutes (0 - 59)
  hours = tmstruct.tm_hour;  // get hours   (0 - 23)

  mdays = tmstruct.tm_wday;
  mdate = tmstruct.tm_mday;
  mmonth = tmstruct.tm_mon;

  unsigned short myear = 0, setaYY = 0, setbYY = 0;
  myear = setbYY = setaYY = (tmstruct.tm_year) + 1900;
  EEPROM.put2(67, myear);
  EEPROM.put2(65, setaYY);
  EEPROM.put2(40, setbYY);
}

String httpGETRequest(const char *serverName)
{
  WiFiClient client;
  HTTPClient http;

  String payloadw = " ";

  // Your IP address with path or Domain name with URL path
  http.begin(client, serverName);

  // Send HTTP POST request
  int httpResponseCode = http.GET();

  if (httpResponseCode > 0)
  {
    payloadw = http.getString();
  }
  else if (httpResponseCode >= 400)
  {
    if (EEPROM.read(60) <= 180)
      EEPROM.write(20, 3);
  }
  else
  {
    if (EEPROM.read(60) <= 180)
      EEPROM.write(20, 3);
  }
  // Free resources
  http.end();
  return payloadw;
}

void getWeather()
{
  char serverPath[120] = {0};
  memset(serverPath, '\0', sizeof serverPath);
  strcpy_P(serverPath, serverPath1);

  JSONVar myObject = JSON.parse(httpGETRequest(serverPath));

  if (JSON.typeof(myObject) == "undefined")
    return;

  int getTempMS = 0, getPresMS = 0, getHumMS = 0;

  getTempMS = (myObject["main"]["temp"]);
  getTempMS = getTempMS - 273.15;
  getPresMS = (myObject["main"]["pressure"]);
  getHumMS = (myObject["main"]["humidity"]);
  // getZoneT = (myObject /* ["main"] */["timezone"]);

  int8_t tempM = 0, getTempM = 0;
  getTempM = tempM = getTempMS;
  EEPROM.put1(38, tempM);
  EEPROM.put1(392, getTempM);

  unsigned short presM = 0, getPresM = 0;
  getPresM = presM = getPresMS;
  EEPROM.put2(360, presM);
  EEPROM.put2(388, getPresM);

  uint8_t humiM = 0, getHumM = 0;
  getHumM = humiM = getHumMS;
  EEPROM.put1(42, humiM);
  EEPROM.put1(47, getHumM);
}

void draw_weatherT()
{
  uint16_t cc_orr = display.color565(202, 16, 0);

  char sentTxtON[20] = {0};
  char txtSen[20] = {0};
  int8_t getTempM = 0;
  EEPROM.get1(392, getTempM);

  strcpy(txtSen, "");
  if (getTempM == -127)
    TFDrawText(&display, "00_", EEPROM.read(17), EEPROM.read(19), myCYN);
  else
  {
    if (getTempM >= 0 && getTempM < 10)
      strcat(txtSen, "0");
    itoa(getTempM, sentTxtON, 10);
    strcat(txtSen, sentTxtON);
    strcat(txtSen, "_");
    TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_orr);
  }
}
void draw_weatherP()
{
  uint16_t cc_gry = display.color565(128, 128, 128);

  char sentTxtON[20] = {0};
  char txtSen[20] = {0};
  unsigned short getPresM = 0;
  EEPROM.get2(388, getPresM);
  //-pressure
  if (getPresM < 1000)
    EEPROM.write(17, 28);
  itoa(getPresM, sentTxtON, 10);
  strcpy(txtSen, sentTxtON);
  TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_gry);
}
void draw_weatherH()
{
  uint16_t cc_orr = display.color565(202, 16, 0);

  char sentTxtON[20] = {0};
  char txtSen[20] = {0};
  uint8_t getHumM = 0;
  EEPROM.get1(47, getHumM);
  //-humidity
  strcpy(txtSen, "");
  if (getHumM >= 0 && getHumM < 10)
    strcat(txtSen, "0");
  itoa(getHumM, sentTxtON, 10);
  strcat(txtSen, sentTxtON);
  // else
  TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_orr);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(cc_orr);
  EEPROM.write(17, 60), EEPROM.write(19, 5);
  if (EEPROM.read(28) == 2)
    if (EEPROM.read(37) == 1)
      EEPROM.write(19, 30);
    else
      EEPROM.write(19, 6);
  else if (EEPROM.read(28) == 3)
    EEPROM.write(19, 22);
  else if (EEPROM.read(28) == 1 && EEPROM.read(51) == 1)
    EEPROM.write(19, 30);
  display.setCursor(EEPROM.read(17), EEPROM.read(19));
  strcpy_P(sentTxtON, var002);
  display.print(sentTxtON);
  display.setFont();
}

void sensorDisp00()
{
  uint16_t myBLK = display.color565(0, 0, 0);

  if (EEPROM.read(28) == 1)
  {
    display.fillRect(1, 1, 21, 5, myBLK);
    display.fillRect(42, 1, 21, 5, myBLK);
  }
  else if (EEPROM.read(28) == 2)
  {
    if (EEPROM.read(37) == 1)
    {
      display.fillRect(1, 26, 21, 5, myBLK);
      display.fillRect(42, 26, 21, 5, myBLK);
    }
    else
    {
      display.fillRect(1, 2, 21, 5, myBLK);
      display.fillRect(42, 2, 21, 5, myBLK);
    }
  }
  else if (EEPROM.read(28) == 3)
  {
    display.fillRect(1, 18, 21, 5, myBLK);
    display.fillRect(42, 18, 21, 5, myBLK);
  }

  draw_roomTH();
}

void sensorDisp01()
{
  sensorDisp00();

  //-temperature
  EEPROM.write(17, 0), draw_weatherT();
  //-pressure
  EEPROM.write(17, 24), draw_weatherP();
  //-humidity
  EEPROM.write(17, 51), draw_weatherH();
  gap_sp7 = 3000;
}

void sensorDisp02()
{
  uint16_t cc_sal = display.color565(250, 128, 114), cc_grn = display.color565(0, 16, 0), cc_dka = display.color565(189, 183, 107), cc_tom = display.color565(255, 99, 17);

  char txtSen[20] = {0};
  char txtSen1[5] = {0};
  char txtSen2[5] = {0};
  char serverPath[120] = {0};
  memset(serverPath, '\0', sizeof serverPath);
  strcpy_P(serverPath, serverPath7);
  if (EEPROM.read(60) <= 180)
    strcpy(txtSen, httpGETRequest(serverPath).c_str());
  else
    strcpy_P(txtSen, var143);

  strncpy(txtSen1, txtSen, 1);
  strncpy(txtSen2, txtSen + 1, 4);

  if (strlen(txtSen2) == 4)
    EEPROM.write(17, 24);
  else if (strlen(txtSen2) == 3)
    EEPROM.write(17, 23), TFDrawText(&display, "M", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 28);
  else if (strlen(txtSen2) == 2)
    EEPROM.write(17, 27), TFDrawText(&display, "M", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 32);
  else if (strlen(txtSen2) == 1)
    EEPROM.write(17, 31), TFDrawText(&display, "M", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 36);

  TFDrawText(&display, txtSen2, EEPROM.read(17), EEPROM.read(19), cc_sal);

  bool txtSen3 = atoi(txtSen1);
  if (txtSen3 == 0)
    EEPROM.write(69, 3);
  gap_sp7 = 3000;
}

void sensorDisp03()
{
  uint16_t cc_oli = display.color565(128, 128, 0), cc_grn = display.color565(0, 16, 0), cc_dgr = display.color565(184, 134, 11), cc_plg = display.color565(152, 251, 152);

  char txtSen[20] = {0};
  char serverPath[120] = {0};
  memset(serverPath, '\0', sizeof serverPath);
  strcpy_P(serverPath, serverPath8);
  if (EEPROM.read(60) <= 180)
    strcpy(txtSen, httpGETRequest(serverPath).c_str());
  else
    strcpy_P(txtSen, var143);

  if (strlen(txtSen) == 4)
    EEPROM.write(17, 24);
  else if (strlen(txtSen) == 3)
    EEPROM.write(17, 23), TFDrawText(&display, "X", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 28);
  else if (strlen(txtSen) == 2)
    EEPROM.write(17, 27), TFDrawText(&display, "X", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 32);
  else if (strlen(txtSen) == 1)
    EEPROM.write(17, 31), TFDrawText(&display, "X", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 36);

  TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_oli);
  gap_sp7 = 3000;
}

void sensorDisp04()
{
  uint16_t cc_sal = display.color565(250, 128, 114), cc_grn = display.color565(0, 16, 0), cc_dka = display.color565(189, 183, 107), cc_tom = display.color565(255, 99, 17);

  char txtSen[20] = {0};
  char serverPath[120] = {0};
  memset(serverPath, '\0', sizeof serverPath);
  strcpy_P(serverPath, serverPath4);
  if (EEPROM.read(60) <= 180)
    strcpy(txtSen, httpGETRequest(serverPath).c_str());
  else
    strcpy_P(txtSen, var143);

  if (strlen(txtSen) == 4)
    EEPROM.write(17, 24);
  else if (strlen(txtSen) == 3)
    EEPROM.write(17, 23), TFDrawText(&display, "H", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 28);
  else if (strlen(txtSen) == 2)
    EEPROM.write(17, 27), TFDrawText(&display, "H", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 32);
  else if (strlen(txtSen) == 1)
    EEPROM.write(17, 31), TFDrawText(&display, "H", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 36);

  TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_sal);
  gap_sp7 = 3000;
}

void sensorDisp05()
{
  uint16_t cc_pre = display.color565(64, 70, 32), cc_fgn = display.color565(34, 139, 34), myBLK = display.color565(0, 0, 0);

  char txtSen[20] = {0};
  char serverPath[120] = {0};
  memset(serverPath, '\0', sizeof serverPath);
  strcpy_P(serverPath, serverPath5);
  if (EEPROM.read(60) <= 180)
    strcpy(txtSen, httpGETRequest(serverPath).c_str());
  else
    strcpy(txtSen, "9");

  EEPROM.write(17, 31), TFDrawText(&display, "Z", EEPROM.read(17), EEPROM.read(19), cc_pre), EEPROM.write(17, 36);
  TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_fgn);
  gap_sp7 = 3000;
}

//-light sensor
void sensorDisp06()
{
  uint16_t cc_org = display.color565(255, 165, 0);
  char txtSen[20] = {0};

  if (numApplesEaten == 4)
  {
    itoa(EEPROM.read(59), txtSen, 10);
    if (strlen(txtSen) == 4)
      EEPROM.write(17, 24);
    else if (strlen(txtSen) == 3)
      EEPROM.write(17, 28);
    else if (strlen(txtSen) == 2)
      EEPROM.write(17, 32);
    else if (strlen(txtSen) == 1)
      EEPROM.write(17, 36);
    TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_org);
  }
  else
  {
    itoa(analogRead(A0), txtSen, 10);
    if (strlen(txtSen) == 4)
      EEPROM.write(17, 24);
    else if (strlen(txtSen) == 3)
      EEPROM.write(17, 28);
    else if (strlen(txtSen) == 2)
      EEPROM.write(17, 32);
    else if (strlen(txtSen) == 1)
      EEPROM.write(17, 36);
    TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_org);
  }
  gap_sp7 = 3000;
}

void sensorDisp07()
{
  uint16_t cc_ind = display.color565(75, 0, 130);
  char txtSen[20] = {0};
  itoa(EEPROM.read(20), txtSen, 10);

  if (strlen(txtSen) == 4)
    EEPROM.write(17, 24);
  else if (strlen(txtSen) == 3)
    EEPROM.write(17, 28);
  else if (strlen(txtSen) == 2)
    EEPROM.write(17, 32);
  else if (strlen(txtSen) == 1)
    EEPROM.write(17, 36);
  TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_ind);
  gap_sp7 = 3000;
}

void sensorDisp08()
{
  char sentTxtON[20] = {0};
  uint16_t cc_grn = display.color565(0, 16, 0), cc_ylw = display.color565(16, 16, 0);
  char txtSen[20] = {0};
  itoa(EEPROM.read(71), txtSen, 10);

  if (strlen(txtSen) == 4)
    EEPROM.write(17, 24);
  else if (strlen(txtSen) == 3)
    EEPROM.write(17, 23), TFDrawText(&display, "G", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 28);
  else if (strlen(txtSen) == 2)
    EEPROM.write(17, 27), TFDrawText(&display, "G", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 32);
  else if (strlen(txtSen) == 1)
    EEPROM.write(17, 31), TFDrawText(&display, "G", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 36);

  if (EEPROM.read(71) <= 9999)
    TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  else
  {
    strcpy_P(sentTxtON, var142);
    EEPROM.write(17, 24), TFDrawText(&display, sentTxtON, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  }
  gap_sp7 = 3000;
}

void sensorDisp09()
{
  char sentTxtON[20] = {0};
  uint16_t cc_grn = display.color565(0, 16, 0), cc_cho = display.color565(210, 105, 30);
  char txtSen[20] = {0};
  itoa(EEPROM.read(59), txtSen, 10);

  if (strlen(txtSen) == 4)
    EEPROM.write(17, 24);
  else if (strlen(txtSen) == 3)
    EEPROM.write(17, 23), TFDrawText(&display, "A", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 28);
  else if (strlen(txtSen) == 2)
    EEPROM.write(17, 27), TFDrawText(&display, "A", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 32);
  else if (strlen(txtSen) == 1)
    EEPROM.write(17, 31), TFDrawText(&display, "A", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 36);

  if (EEPROM.read(59) <= 9999)
    TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_cho);
  else
  {
    strcpy_P(sentTxtON, var142);
    EEPROM.write(17, 24), TFDrawText(&display, sentTxtON, EEPROM.read(17), EEPROM.read(19), cc_cho);
  }
  gap_sp7 = 3000;
}

void sensorDisp10()
{
  char sentTxtON[20] = {0};
  uint16_t cc_grn = display.color565(0, 16, 0), cc_tan = display.color565(210, 180, 140);
  char txtSen[20] = {0};
  itoa(EEPROM.read(60), txtSen, 10);

  if (strlen(txtSen) == 4)
    EEPROM.write(17, 24);
  else if (strlen(txtSen) == 3)
    EEPROM.write(17, 23), TFDrawText(&display, "B", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 28);
  else if (strlen(txtSen) == 2)
    EEPROM.write(17, 27), TFDrawText(&display, "B", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 32);
  else if (strlen(txtSen) == 1)
    EEPROM.write(17, 31), TFDrawText(&display, "B", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 36);

  if (EEPROM.read(60) <= 9999)
    TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_tan);
  else
  {
    strcpy_P(sentTxtON, var142);
    EEPROM.write(17, 24), TFDrawText(&display, sentTxtON, EEPROM.read(17), EEPROM.read(19), cc_tan);
  }
  gap_sp7 = 3000;
}

void sensorDisp11()
{
  char sentTxtON[20] = {0};
  uint16_t cc_grn = display.color565(0, 16, 0), cc_lsg = display.color565(119, 136, 153);
  char txtSen[20] = {0};
  itoa(ia, txtSen, 10);

  if (strlen(txtSen) == 4)
    EEPROM.write(17, 24);
  else if (strlen(txtSen) == 3)
    EEPROM.write(17, 23), TFDrawText(&display, "C", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 28);
  else if (strlen(txtSen) == 2)
    EEPROM.write(17, 27), TFDrawText(&display, "C", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 32);
  else if (strlen(txtSen) == 1)
    EEPROM.write(17, 31), TFDrawText(&display, "C", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 36);

  if (ia <= 9999)
    TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_lsg);
  else
  {
    strcpy_P(sentTxtON, var142);
    EEPROM.write(17, 24), TFDrawText(&display, sentTxtON, EEPROM.read(17), EEPROM.read(19), cc_lsg);
  }
  gap_sp7 = 3000;
}

void sensorDisp12()
{
  uint16_t cc_pre = display.color565(64, 70, 32), cc_fgn = display.color565(34, 139, 34);
  EEPROM.write(17, 31), TFDrawText(&display, "K", EEPROM.read(17), EEPROM.read(19), cc_pre), EEPROM.write(17, 36);
  char txtSen[20] = {0};
  itoa(EEPROM.read(28), txtSen, 10);
  TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_fgn);
  gap_sp7 = 3000;
}

void sensorDisp13()
{
  char sentTxtON[20] = {0};
  uint16_t cc_grn = display.color565(0, 16, 0), cc_mvr = display.color565(199, 21, 133);
  char txtSen[20] = {0};
  itoa(minsALL, txtSen, 10);

  if (strlen(txtSen) == 4)
    EEPROM.write(17, 24);
  else if (strlen(txtSen) == 3)
    EEPROM.write(17, 23), TFDrawText(&display, "T", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 28);
  else if (strlen(txtSen) == 2)
    EEPROM.write(17, 27), TFDrawText(&display, "T", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 32);
  else if (strlen(txtSen) == 1)
    EEPROM.write(17, 31), TFDrawText(&display, "T", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 36);

  if (minsALL <= 9999)
    TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_mvr);
  else
  {
    strcpy_P(sentTxtON, var142);
    EEPROM.write(17, 23), TFDrawText(&display, sentTxtON, EEPROM.read(17), EEPROM.read(19), cc_mvr);
  }
  gap_sp7 = 3000;
}

void sensorDisp14()
{
  uint16_t cc_grn = display.color565(0, 16, 0), myGLD = display.color565(235, 205, 38);
  char txtSen[20] = {0};
  itoa(EEPROM.read(396), txtSen, 10);

  if (strlen(txtSen) == 4)
    EEPROM.write(17, 24);
  else if (strlen(txtSen) == 3)
    EEPROM.write(17, 23), TFDrawText(&display, "M", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 28);
  else if (strlen(txtSen) == 2)
    EEPROM.write(17, 27), TFDrawText(&display, "M", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 32);
  else if (strlen(txtSen) == 1)
    EEPROM.write(17, 31), TFDrawText(&display, "M", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 36);
  TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), myGLD);
  gap_sp7 = 3000;
}

void sensorDisp15()
{
  uint16_t cc_grn = display.color565(0, 16, 0), cc_cab = display.color565(95, 158, 160);

  char txtSen[20] = {0};
  itoa(EEPROM.read(395), txtSen, 10);

  if (strlen(txtSen) == 4)
    EEPROM.write(17, 24);
  else if (strlen(txtSen) == 3)
    EEPROM.write(17, 23), TFDrawText(&display, "H", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 28);
  else if (strlen(txtSen) == 2)
    EEPROM.write(17, 27), TFDrawText(&display, "H", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 32);
  else if (strlen(txtSen) == 1)
    EEPROM.write(17, 31), TFDrawText(&display, "H", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 36);
  TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_cab);
  gap_sp7 = 3000;
}

void sensorDisp16()
{
  char sentTxtON[20] = {0};
  uint16_t cc_grn = display.color565(0, 16, 0), cc_ylw = display.color565(16, 16, 0);
  char txtSen[20] = {0};
  itoa(EEPROM.read(6), txtSen, 10);

  if (strlen(txtSen) == 4)
    EEPROM.write(17, 24);
  else if (strlen(txtSen) == 3)
    EEPROM.write(17, 23), TFDrawText(&display, "P", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 28);
  else if (strlen(txtSen) == 2)
    EEPROM.write(17, 27), TFDrawText(&display, "P", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 32);
  else if (strlen(txtSen) == 1)
    EEPROM.write(17, 31), TFDrawText(&display, "P", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 36);

  if (EEPROM.read(6) <= 9999)
    TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  else
  {
    strcpy_P(sentTxtON, var142);
    EEPROM.write(17, 24), TFDrawText(&display, sentTxtON, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  }
  gap_sp7 = 3000;
}

void sensorDisp17()
{
  char sentTxtON[20] = {0};
  uint16_t cc_grn = display.color565(0, 16, 0), cc_ylw = display.color565(16, 16, 0);
  char txtSen[20] = {0};
  itoa(EEPROM.read(7), txtSen, 10);

  if (strlen(txtSen) == 4)
    EEPROM.write(17, 24);
  else if (strlen(txtSen) == 3)
    EEPROM.write(17, 23), TFDrawText(&display, "Q", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 28);
  else if (strlen(txtSen) == 2)
    EEPROM.write(17, 27), TFDrawText(&display, "Q", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 32);
  else if (strlen(txtSen) == 1)
    EEPROM.write(17, 31), TFDrawText(&display, "Q", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 36);

  if (EEPROM.read(7) <= 9999)
    TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  else
  {
    strcpy_P(sentTxtON, var142);
    EEPROM.write(17, 24), TFDrawText(&display, sentTxtON, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  }
  gap_sp7 = 3000;
}

void sensorDisp18()
{
  char sentTxtON[20] = {0};
  uint16_t cc_grn = display.color565(0, 16, 0), cc_ylw = display.color565(16, 16, 0);
  char txtSen[20] = {0};
  itoa(EEPROM.read(8), txtSen, 10);

  if (strlen(txtSen) == 4)
    EEPROM.write(17, 24);
  else if (strlen(txtSen) == 3)
    EEPROM.write(17, 23), TFDrawText(&display, "R", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 28);
  else if (strlen(txtSen) == 2)
    EEPROM.write(17, 27), TFDrawText(&display, "R", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 32);
  else if (strlen(txtSen) == 1)
    EEPROM.write(17, 31), TFDrawText(&display, "R", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 36);

  if (EEPROM.read(8) <= 9999)
    TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  else
  {
    strcpy_P(sentTxtON, var142);
    EEPROM.write(17, 24), TFDrawText(&display, sentTxtON, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  }
  gap_sp7 = 3000;
}

void sensorDisp19()
{
  char sentTxtON[20] = {0};
  uint16_t cc_grn = display.color565(0, 16, 0), cc_ylw = display.color565(16, 16, 0);
  char txtSen[20] = {0};
  itoa(EEPROM.read(5), txtSen, 10);

  if (strlen(txtSen) == 4)
    EEPROM.write(17, 24);
  else if (strlen(txtSen) == 3)
    EEPROM.write(17, 23), TFDrawText(&display, "F", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 28);
  else if (strlen(txtSen) == 2)
    EEPROM.write(17, 27), TFDrawText(&display, "F", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 32);
  else if (strlen(txtSen) == 1)
    EEPROM.write(17, 31), TFDrawText(&display, "F", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 36);

  if (EEPROM.read(5) <= 9999)
    TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  else
  {
    strcpy_P(sentTxtON, var142);
    EEPROM.write(17, 24), TFDrawText(&display, sentTxtON, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  }
  gap_sp7 = 3000;
}

void sensorDisp20()
{
  char sentTxtON[20] = {0};
  uint16_t cc_grn = display.color565(0, 16, 0), cc_ylw = display.color565(16, 16, 0);
  char txtSen[20] = {0};
  itoa(EEPROM.read(9), txtSen, 10);

  if (strlen(txtSen) == 4)
    EEPROM.write(17, 24);
  else if (strlen(txtSen) == 3)
    EEPROM.write(17, 23), TFDrawText(&display, "U", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 28);
  else if (strlen(txtSen) == 2)
    EEPROM.write(17, 27), TFDrawText(&display, "U", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 32);
  else if (strlen(txtSen) == 1)
    EEPROM.write(17, 31), TFDrawText(&display, "U", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 36);

  if (EEPROM.read(9) <= 9999)
    TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  else
  {
    strcpy_P(sentTxtON, var142);
    EEPROM.write(17, 24), TFDrawText(&display, sentTxtON, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  }
  gap_sp7 = 3000;
}

void sensorDisp21()
{
  char sentTxtON[20] = {0};
  uint16_t cc_grn = display.color565(0, 16, 0), cc_ylw = display.color565(16, 16, 0);
  char txtSen[20] = {0};
  itoa(EEPROM.read(10), txtSen, 10);

  if (strlen(txtSen) == 4)
    EEPROM.write(17, 24);
  else if (strlen(txtSen) == 3)
    EEPROM.write(17, 23), TFDrawText(&display, "V", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 28);
  else if (strlen(txtSen) == 2)
    EEPROM.write(17, 27), TFDrawText(&display, "V", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 32);
  else if (strlen(txtSen) == 1)
    EEPROM.write(17, 31), TFDrawText(&display, "V", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 36);

  if (EEPROM.read(10) <= 9999)
    TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  else
  {
    strcpy_P(sentTxtON, var142);
    EEPROM.write(17, 24), TFDrawText(&display, sentTxtON, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  }
  gap_sp7 = 3000;
}

void sensorDisp22()
{
  uint16_t cc_pre = display.color565(64, 70, 32), cc_fgn = display.color565(34, 139, 34);

  EEPROM.write(17, 31), TFDrawText(&display, "D", EEPROM.read(17), EEPROM.read(19), cc_pre), EEPROM.write(17, 36);
  char txtSen[20] = {0};
  itoa(mdays, txtSen, 10);
  TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_fgn);
  gap_sp7 = 3000;
}

void sensorDisp23()
{
  uint16_t cc_pre = display.color565(64, 70, 32), cc_fgn = display.color565(34, 139, 34);
  char txtSen[20] = {0};
  itoa(EEPROM.read(mmonth), txtSen, 10);

  if (strlen(txtSen) == 4)
    EEPROM.write(17, 24);
  else if (strlen(txtSen) == 3)
    EEPROM.write(17, 23), TFDrawText(&display, "E", EEPROM.read(17), EEPROM.read(19), cc_pre), EEPROM.write(17, 28);
  else if (strlen(txtSen) == 2)
    EEPROM.write(17, 27), TFDrawText(&display, "E", EEPROM.read(17), EEPROM.read(19), cc_pre), EEPROM.write(17, 32);
  else if (strlen(txtSen) == 1)
    EEPROM.write(17, 31), TFDrawText(&display, "E", EEPROM.read(17), EEPROM.read(19), cc_pre), EEPROM.write(17, 36);

  TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_fgn);
  gap_sp7 = 3000;
}

void sensorDisp24()
{
  char sentTxtON[20] = {0};
  uint16_t cc_grn = display.color565(0, 16, 0), cc_ylw = display.color565(16, 16, 0);
  char txtSen[20] = {0};
  itoa(EEPROM.read(72), txtSen, 10);

  if (strlen(txtSen) == 4)
    EEPROM.write(17, 24);
  else if (strlen(txtSen) == 3)
    EEPROM.write(17, 23), TFDrawText(&display, "J", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 28);
  else if (strlen(txtSen) == 2)
    EEPROM.write(17, 27), TFDrawText(&display, "J", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 32);
  else if (strlen(txtSen) == 1)
    EEPROM.write(17, 31), TFDrawText(&display, "J", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 36);

  if (EEPROM.read(72) <= 9999)
    TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  else
  {
    strcpy_P(sentTxtON, var142);
    EEPROM.write(17, 24), TFDrawText(&display, sentTxtON, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  }
  gap_sp7 = 3000;
}

void sensorDisp25()
{
  char sentTxtON[20] = {0};
  uint16_t cc_grn = display.color565(0, 16, 0), cc_mvr = display.color565(199, 21, 133), cc_ylw = display.color565(16, 16, 0);
  char txtSen[20] = {0};
  itoa(EEPROM.read(73), txtSen, 10);

  if (strlen(txtSen) == 4)
    EEPROM.write(17, 24);
  else if (strlen(txtSen) == 3)
    EEPROM.write(17, 23), TFDrawText(&display, "Y", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 28);
  else if (strlen(txtSen) == 2)
    EEPROM.write(17, 27), TFDrawText(&display, "Y", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 32);
  else if (strlen(txtSen) == 1)
    EEPROM.write(17, 31), TFDrawText(&display, "Y", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 36);

  if (EEPROM.read(73) <= 9999)
    TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_mvr);
  else
  {
    strcpy_P(sentTxtON, var142);
    EEPROM.write(17, 24), TFDrawText(&display, sentTxtON, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  }
  gap_sp7 = 3000;
}

void sensorDisp26()
{
  char sentTxtON[20] = {0};
  uint16_t cc_grn = display.color565(0, 16, 0), cc_ylw = display.color565(16, 16, 0);
  char txtSen[20] = {0};
  itoa(xpos, txtSen, 10);

  if (xpos >= 0 && xpos <= 9999)
  {
    if (strlen(txtSen) == 4)
      EEPROM.write(17, 24);
    else if (strlen(txtSen) == 3)
      EEPROM.write(17, 23), TFDrawText(&display, "X", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 28);
    else if (strlen(txtSen) == 2)
      EEPROM.write(17, 27), TFDrawText(&display, "X", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 32);
    else if (strlen(txtSen) == 1)
      EEPROM.write(17, 31), TFDrawText(&display, "X", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 36);
  }
  else if (xpos < 0)
  {
    if (strlen(txtSen) == 4)
      EEPROM.write(17, 24);
    else if (strlen(txtSen) == 3)
      EEPROM.write(17, 28);
    else if (strlen(txtSen) == 2)
      EEPROM.write(17, 32);
    else if (strlen(txtSen) == 1)
      EEPROM.write(17, 36);
  }

  if (xpos > 9999)
  {
    strcpy_P(sentTxtON, var142);
    EEPROM.write(17, 24), TFDrawText(&display, sentTxtON, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  }
  else
    TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  gap_sp7 = 3000;
}

void sensorDisp27()
{
  char sentTxtON[20] = {0};
  uint16_t cc_grn = display.color565(0, 16, 0), cc_ylw = display.color565(16, 16, 0);
  char txtSen[20] = {0};
  itoa(channel, txtSen, 10);

  if (strlen(txtSen) == 4)
    EEPROM.write(17, 24);
  else if (strlen(txtSen) == 3)
    EEPROM.write(17, 23), TFDrawText(&display, "L", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 28);
  else if (strlen(txtSen) == 2)
    EEPROM.write(17, 27), TFDrawText(&display, "L", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 32);
  else if (strlen(txtSen) == 1)
    EEPROM.write(17, 31), TFDrawText(&display, "L", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 36);

  if (channel <= 9999)
    TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  else
  {
    strcpy_P(sentTxtON, var142);
    EEPROM.write(17, 24), TFDrawText(&display, sentTxtON, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  }
  gap_sp7 = 3000;
}

void sensorDisp28()
{
  uint16_t cc_pre = display.color565(64, 70, 32), cc_fgn = display.color565(34, 139, 34);

  char sentTxtON[20] = {0};
  char txtSen[20] = {0};
  itoa(EEPROM.read(22), txtSen, 10);

  if (strlen(txtSen) == 4)
    EEPROM.write(17, 24);
  else if (strlen(txtSen) == 3)
    EEPROM.write(17, 23), TFDrawText(&display, "I", EEPROM.read(17), EEPROM.read(19), cc_pre), EEPROM.write(17, 28);
  else if (strlen(txtSen) == 2)
    EEPROM.write(17, 27), TFDrawText(&display, "I", EEPROM.read(17), EEPROM.read(19), cc_pre), EEPROM.write(17, 32);
  else if (strlen(txtSen) == 1)
    EEPROM.write(17, 31), TFDrawText(&display, "I", EEPROM.read(17), EEPROM.read(19), cc_pre), EEPROM.write(17, 36);

  if (EEPROM.read(22) <= 9999)
    TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_fgn);
  else
  {
    strcpy_P(sentTxtON, var142);
    EEPROM.write(17, 24), TFDrawText(&display, sentTxtON, EEPROM.read(17), EEPROM.read(19), cc_fgn);
  }
  gap_sp7 = 3000;
}

void sensorDisp29()
{
  uint16_t cc_pre = display.color565(64, 70, 32), cc_fgn = display.color565(34, 139, 34);

  EEPROM.write(17, 31), TFDrawText(&display, "N", EEPROM.read(17), EEPROM.read(19), cc_pre), EEPROM.write(17, 36);
  char txtSen[20] = {0};
  itoa(EEPROM.read(37), txtSen, 10);
  TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_fgn);
  gap_sp7 = 3000;
}

void sensorDisp30()
{
  char sentTxtON[20] = {0};
  uint16_t cc_grn = display.color565(0, 16, 0), cc_ylw = display.color565(16, 16, 0);
  char txtSen[20] = {0};
  itoa(bwCnt_gap, txtSen, 10);

  if (strlen(txtSen) == 4)
    EEPROM.write(17, 24);
  else if (strlen(txtSen) == 3)
    EEPROM.write(17, 23), TFDrawText(&display, "A", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 28);
  else if (strlen(txtSen) == 2)
    EEPROM.write(17, 27), TFDrawText(&display, "A", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 32);
  else if (strlen(txtSen) == 1)
    EEPROM.write(17, 31), TFDrawText(&display, "A", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 36);

  if (bwCnt_gap <= 9999)
    TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  else
  {
    strcpy_P(sentTxtON, var142);
    EEPROM.write(17, 24), TFDrawText(&display, sentTxtON, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  }
  gap_sp7 = 3000;
}

void sensorDisp31()
{
  uint16_t cc_pre = display.color565(64, 70, 32), cc_fgn = display.color565(34, 139, 34);

  EEPROM.write(17, 31), TFDrawText(&display, "B", EEPROM.read(17), EEPROM.read(19), cc_pre), EEPROM.write(17, 36);
  char txtSen[20] = {0};
  itoa(EEPROM.read(61), txtSen, 10);
  TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_fgn);
  gap_sp7 = 3000;
}

void sensorDisp32()
{
  char sentTxtON[20] = {0};
  uint16_t cc_grn = display.color565(0, 16, 0), cc_ylw = display.color565(16, 16, 0);
  char txtSen[20] = {0};
  itoa(play_gap, txtSen, 10);

  if (strlen(txtSen) == 4)
    EEPROM.write(17, 24);
  else if (strlen(txtSen) == 3)
    EEPROM.write(17, 23), TFDrawText(&display, "C", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 28);
  else if (strlen(txtSen) == 2)
    EEPROM.write(17, 27), TFDrawText(&display, "C", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 32);
  else if (strlen(txtSen) == 1)
    EEPROM.write(17, 31), TFDrawText(&display, "C", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 36);

  if (play_gap <= 9999)
    TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  else
  {
    strcpy_P(sentTxtON, var142);
    EEPROM.write(17, 24), TFDrawText(&display, sentTxtON, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  }
  gap_sp7 = 3000;
}

void sensorDisp33()
{
  char sentTxtON[20] = {0};
  uint16_t cc_grn = display.color565(0, 16, 0), cc_ylw = display.color565(16, 16, 0);
  char txtSen[20] = {0};
  itoa(EEPROM.read(46), txtSen, 10);

  if (strlen(txtSen) == 4)
    EEPROM.write(17, 24);
  else if (strlen(txtSen) == 3)
    EEPROM.write(17, 23), TFDrawText(&display, "D", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 28);
  else if (strlen(txtSen) == 2)
    EEPROM.write(17, 27), TFDrawText(&display, "D", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 32);
  else if (strlen(txtSen) == 1)
    EEPROM.write(17, 31), TFDrawText(&display, "D", EEPROM.read(17), EEPROM.read(19), cc_grn), EEPROM.write(17, 36);

  if (EEPROM.read(46) <= 9999)
    TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  else
  {
    strcpy_P(sentTxtON, var142);
    EEPROM.write(17, 24), TFDrawText(&display, sentTxtON, EEPROM.read(17), EEPROM.read(19), cc_ylw);
  }
  gap_sp7 = 3000;
}

void sensorDisp34()
{
  uint16_t cc_pre = display.color565(64, 70, 32), cc_fgn = display.color565(34, 139, 34);

  char sentTxtON[20] = {0};
  char txtSen[20] = {0};
  itoa(EEPROM.read(57), txtSen, 10);

  if (strlen(txtSen) == 4)
    EEPROM.write(17, 24);
  else if (strlen(txtSen) == 3)
    EEPROM.write(17, 23), TFDrawText(&display, "E", EEPROM.read(17), EEPROM.read(19), cc_pre), EEPROM.write(17, 28);
  else if (strlen(txtSen) == 2)
    EEPROM.write(17, 27), TFDrawText(&display, "E", EEPROM.read(17), EEPROM.read(19), cc_pre), EEPROM.write(17, 32);
  else if (strlen(txtSen) == 1)
    EEPROM.write(17, 31), TFDrawText(&display, "E", EEPROM.read(17), EEPROM.read(19), cc_pre), EEPROM.write(17, 36);

  if (EEPROM.read(57) <= 9999)
    TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_fgn);
  else
  {
    strcpy_P(sentTxtON, var142);
    EEPROM.write(17, 24), TFDrawText(&display, sentTxtON, EEPROM.read(17), EEPROM.read(19), cc_fgn);
  }
  gap_sp7 = 3000;
}

void sensorDisp35()
{
  uint16_t cc_pre = display.color565(64, 70, 32), cc_fgn = display.color565(34, 139, 34);

  EEPROM.write(17, 31), TFDrawText(&display, "F", EEPROM.read(17), EEPROM.read(19), cc_pre), EEPROM.write(17, 36);
  char txtSen[20] = {0};
  itoa(EEPROM.read(29), txtSen, 10);
  TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_fgn);
  gap_sp7 = 3000;
}

void sensorDisp36()
{
  EEPROM.write(69, 0), gap_sp7 = 300;
}

void draw_sensorPresRGB()
{
  uint16_t myBLK = display.color565(0, 0, 0), cc_red = display.color565(16, 0, 0), cc_grn = display.color565(0, 16, 0), cc_blu = display.color565(0, 0, 128);

  if (EEPROM.read(28) == 2)
  {
    if (EEPROM.read(37) == 1)
    {
      EEPROM.write(19, 26);

      for (int i = 22; i < 42; i += 3)
        display.drawPixel(0 + i, 25, cc_red);
      for (int i = 23; i < 42; i += 3)
        display.drawPixel(0 + i, 25, cc_grn);
      for (int i = 24; i < 42; i += 3)
        display.drawPixel(0 + i, 25, cc_blu);

      for (int i = 22; i < 42; i += 3)
        display.drawPixel(0 + i, 31, cc_red);
      for (int i = 23; i < 42; i += 3)
        display.drawPixel(0 + i, 31, cc_grn);
      for (int i = 24; i < 42; i += 3)
        display.drawPixel(0 + i, 31, cc_blu);

      display.drawPixel(22, 26, cc_grn);
      display.drawPixel(22, 27, cc_blu);
      display.drawPixel(22, 28, cc_red);
      display.drawPixel(22, 29, cc_grn);
      display.drawPixel(22, 30, cc_blu);

      display.drawPixel(41, 26, cc_grn);
      display.drawPixel(41, 27, cc_blu);
      display.drawPixel(41, 28, cc_red);
      display.drawPixel(41, 29, cc_grn);
      display.drawPixel(41, 30, cc_blu);
    }
    else
    {
      EEPROM.write(19, 2);

      for (int i = 22; i < 42; i += 3)
        display.drawPixel(0 + i, 1, cc_red);
      for (int i = 23; i < 42; i += 3)
        display.drawPixel(0 + i, 1, cc_grn);
      for (int i = 24; i < 42; i += 3)
        display.drawPixel(0 + i, 1, cc_blu);

      for (int i = 22; i < 42; i += 3)
        display.drawPixel(0 + i, 7, cc_red);
      for (int i = 23; i < 42; i += 3)
        display.drawPixel(0 + i, 7, cc_grn);
      for (int i = 24; i < 42; i += 3)
        display.drawPixel(0 + i, 7, cc_blu);

      display.drawPixel(22, 2, cc_grn);
      display.drawPixel(22, 3, cc_blu);
      display.drawPixel(22, 4, cc_red);
      display.drawPixel(22, 5, cc_grn);
      display.drawPixel(22, 6, cc_blu);

      display.drawPixel(41, 2, cc_grn);
      display.drawPixel(41, 3, cc_blu);
      display.drawPixel(41, 4, cc_red);
      display.drawPixel(41, 5, cc_grn);
      display.drawPixel(41, 6, cc_blu);
    }
  }
  else if (EEPROM.read(28) == 3)
    EEPROM.write(19, 18);
  else if (EEPROM.read(28) == 1)
  {
    for (int i = 1; i < 62; i += 3)
      display.drawPixel(0 + i, 6, cc_red);
    for (int i = 2; i < 63; i += 3)
      display.drawPixel(0 + i, 6, cc_grn);
    for (int i = 3; i < 62; i += 3)
      display.drawPixel(0 + i, 6, cc_blu);

    EEPROM.write(19, 1);

    for (int i = 22; i < 42; i += 3)
      display.drawPixel(0 + i, 0, cc_red);
    for (int i = 23; i < 42; i += 3)
      display.drawPixel(0 + i, 0, cc_grn);
    for (int i = 24; i < 42; i += 3)
      display.drawPixel(0 + i, 0, cc_blu);

    display.drawPixel(22, 1, cc_grn);
    display.drawPixel(22, 2, cc_blu);
    display.drawPixel(22, 3, cc_red);
    display.drawPixel(22, 4, cc_grn);
    display.drawPixel(22, 5, cc_blu);

    display.drawPixel(41, 1, cc_blu);
    display.drawPixel(41, 2, cc_red);
    display.drawPixel(41, 3, cc_grn);
    display.drawPixel(41, 4, cc_blu);
    display.drawPixel(41, 5, cc_red);
  }
}

void draw_sensorPres()
{
  draw_sensorPresRGB();
  uint16_t myBLK = display.color565(0, 0, 0);
  unsigned long sensor_past = 0;
  EEPROM.get(197, sensor_past);

  unsigned long nowMsAO = millis();
  if ((unsigned long)nowMsAO - sensor_past >= gap_sp7)
  {
    sensor_past = nowMsAO;
    EEPROM.put(197, sensor_past);

    if (EEPROM.read(28) == 2)
      if (EEPROM.read(37) == 1)
        display.fillRect(23, 26, 18, 5, myBLK);
      else
        display.fillRect(23, 2, 18, 5, myBLK);
    else if (EEPROM.read(28) == 3)
      display.fillRect(23, 18, 18, 5, myBLK);
    else if (EEPROM.read(28) == 1)
      display.fillRect(23, 1, 18, 5, myBLK);

    EEPROM.write(69, EEPROM.read(69) + 1);

    if (EEPROM.read(69) == 1)
      sensorDisp01();
    else if (EEPROM.read(69) == 2)
      sensorDisp02();
    else if (EEPROM.read(69) == 3)
      sensorDisp03();
    else if (EEPROM.read(69) == 4)
      sensorDisp04();
    else if (EEPROM.read(69) == 5)
      sensorDisp05();
    else if (EEPROM.read(69) == 6)
      sensorDisp06();
    else if (EEPROM.read(69) == 7)
      sensorDisp07();
    else if (EEPROM.read(69) == 8)
      sensorDisp08();
    else if (EEPROM.read(69) == 9)
      sensorDisp09();
    else if (EEPROM.read(69) == 10)
      sensorDisp10();
    else if (EEPROM.read(69) == 11)
      sensorDisp11();
    else if (EEPROM.read(69) == 12)
      sensorDisp12();
    else if (EEPROM.read(69) == 13)
      sensorDisp13();
    else if (EEPROM.read(69) == 14)
      sensorDisp14();
    else if (EEPROM.read(69) == 15)
      sensorDisp15();
    else if (EEPROM.read(69) == 16)
      sensorDisp16();
    else if (EEPROM.read(69) == 17)
      sensorDisp17();
    else if (EEPROM.read(69) == 18)
      sensorDisp18();
    else if (EEPROM.read(69) == 19)
      sensorDisp19();
    else if (EEPROM.read(69) == 20)
      sensorDisp20();
    else if (EEPROM.read(69) == 21)
      sensorDisp21();
    else if (EEPROM.read(69) == 22)
      sensorDisp22();
    else if (EEPROM.read(69) == 23)
      sensorDisp23();
    else if (EEPROM.read(69) == 24)
      sensorDisp24();
    else if (EEPROM.read(69) == 25)
      sensorDisp25();
    else if (EEPROM.read(69) == 26)
      sensorDisp26();
    else if (EEPROM.read(69) == 27)
      sensorDisp27();
    else if (EEPROM.read(69) == 28)
      sensorDisp28();
    else if (EEPROM.read(69) == 29)
      sensorDisp29();
    else if (EEPROM.read(69) == 30)
      sensorDisp30();
    else if (EEPROM.read(69) == 31)
      sensorDisp31();
    else if (EEPROM.read(69) == 32)
      sensorDisp32();
    else if (EEPROM.read(69) == 33)
      sensorDisp33();
    else if (EEPROM.read(69) == 34)
      sensorDisp34();
    else if (EEPROM.read(69) == 35)
      sensorDisp35();
    else if (EEPROM.read(69) == 36)
      sensorDisp36();
  }
}

void greetingScroll()
{
  uint16_t cc_pwb = display.color565(176, 224, 230), cc_cor = display.color565(125, 77, 50), cc_cyn = display.color565(0, 64, 128), cc_yld = display.color565(64, 64, 8), cc_pre = display.color565(64, 0, 32), cc_blv = display.color565(138, 43, 226);
  uint16_t cc_gtC = 0;
  char greetingsTEXT[85] = {0};
  EEPROM.write(133, 1); // to be used for controlling greetingsTEXT

  if (EEPROM.read(64) >= 6 && EEPROM.read(64) < 12)
  {
    cc_gtC = cc_cyn;
    EEPROM.put2(139, cc_gtC);
    strcpy_P(greetingsTEXT, greetingsTEXT1);
    EEPROM.put(201, greetingsTEXT);
  }
  else if (EEPROM.read(64) >= 12 && EEPROM.read(64) < 17)
  {
    cc_gtC = cc_yld;
    EEPROM.put2(139, cc_gtC);
    strcpy_P(greetingsTEXT, greetingsTEXT2);
    EEPROM.put(201, greetingsTEXT);
  }
  else if (EEPROM.read(64) >= 17 && EEPROM.read(64) < 21)
  {
    cc_gtC = cc_cor;
    EEPROM.put2(139, cc_gtC);
    strcpy_P(greetingsTEXT, greetingsTEXT3);
    EEPROM.put(201, greetingsTEXT);
  }
  else if (EEPROM.read(64) >= 21 && EEPROM.read(64) < 24)
  {
    cc_gtC = cc_pre;
    EEPROM.put2(139, cc_gtC);
    strcpy_P(greetingsTEXT, greetingsTEXT4);
    EEPROM.put(201, greetingsTEXT);
  }
  else if (EEPROM.read(64) >= 0 && EEPROM.read(64) < 4)
  {
    cc_gtC = cc_blv;
    EEPROM.put2(139, cc_gtC);
    strcpy_P(greetingsTEXT, greetingsTEXT4);
    EEPROM.put(201, greetingsTEXT);
  }
  else if (EEPROM.read(64) >= 4 && EEPROM.read(64) < 6)
  {
    cc_gtC = cc_pwb;
    EEPROM.put2(139, cc_gtC);
    strcpy_P(greetingsTEXT, greetingsTEXT5);
    EEPROM.put(201, greetingsTEXT);
  }
}

void draw_dateOtherV()
{
  if (EEPROM.read(71) == 1)
    spG_00(), bwCnt_gap = 10 * SECONDS, EEPROM.write(71, 3);
  else if (EEPROM.read(71) == 3)
    spG_02();
  else if (EEPROM.read(71) == 4)
  {
    if (EEPROM.read(63) != 30 && EEPROM.read(63) != 31 && EEPROM.read(63) != 32)
      spG_03();
  }
  else if (EEPROM.read(71) == 5)
    spG_03I();
  else if (EEPROM.read(71) == 6)
    spG_03J();
  else if (EEPROM.read(71) == 7)
    spG_04();
  else if (EEPROM.read(71) == 8)
    spG_04I();
  else if (EEPROM.read(71) == 9)
    spG_04J();
  else if (EEPROM.read(71) == 10)
    spG_05();
  else if (EEPROM.read(71) == 11)
    spG_05I();
  else if (EEPROM.read(71) == 12)
    spG_05J();
  else if (EEPROM.read(71) == 13)
    spG_06();
  else if (EEPROM.read(71) == 14)
    spG_06I();
  else if (EEPROM.read(71) == 15)
    spG_06J();
  else if (EEPROM.read(71) == 16)
    spG_07();
  else if (EEPROM.read(71) == 17)
    spG_07I();
  else if (EEPROM.read(71) == 18)
    spG_07J();
  else if (EEPROM.read(71) == 19)
    spG_08();
  else if (EEPROM.read(71) == 20)
    spG_08I();
  else if (EEPROM.read(71) == 21)
    spG_08J();
  else if (EEPROM.read(71) == 22)
    spG_18();
  else if (EEPROM.read(71) == 55)
    spG_18I();
  else if (EEPROM.read(71) == 56)
    spG_18J();
  else if (EEPROM.read(71) == 57)
    spG_19();
  else if (EEPROM.read(71) == 58)
    spG_19I();
  else if (EEPROM.read(71) == 59)
    spG_19J();
  else if (EEPROM.read(71) == 60)
    spG_09();
  else if (EEPROM.read(71) == 23)
    spG_09I();
  else if (EEPROM.read(71) == 24)
    spG_09J();
  else if (EEPROM.read(71) == 25)
    spG_10();
  else if (EEPROM.read(71) == 26)
    spG_10I();
  else if (EEPROM.read(71) == 27)
    spG_10J();
  else if (EEPROM.read(71) == 28)
    spG_11();
  else if (EEPROM.read(71) == 29)
    spG_11I();
  else if (EEPROM.read(71) == 30)
    spG_11J();
  else if (EEPROM.read(71) == 31)
    spG_12();
  else if (EEPROM.read(71) == 32)
    spG_12I();
  else if (EEPROM.read(71) == 33)
    spG_12J();
  else if (EEPROM.read(71) == 34)
    spG_13();
  else if (EEPROM.read(71) == 35)
    spG_13I();
  else if (EEPROM.read(71) == 36)
    spG_13J();
  else if (EEPROM.read(71) == 37)
    spG_14();
  else if (EEPROM.read(71) == 38)
    spG_14I();
  else if (EEPROM.read(71) == 39)
    spG_14J();
  else if (EEPROM.read(71) == 40)
    spG_15();
  else if (EEPROM.read(71) == 41)
    spG_15I();
  else if (EEPROM.read(71) == 42)
    spG_15J();
  else if (EEPROM.read(71) == 43)
    spG_16();
  else if (EEPROM.read(71) == 44)
    spG_16I();
  else if (EEPROM.read(71) == 45)
    spG_16J();
  else if (EEPROM.read(71) == 46)
    spG_17();
  else if (EEPROM.read(71) == 47)
    spG_17I();
  else if (EEPROM.read(71) == 48)
    spG_17J();
}

void spB_000()
{
  gameRate = -1, bwCnt_gap = 0;
}

void spB_001()
{
  EEPROM.write(33, 25), bwCnt_gap = 0;
}

void spB_002()
{
  EEPROM.write(33, ROWS), bwCnt_gap = 0;
}

void spB_003()
{
  EEPROM.write(33, 32), bwCnt_gap = 0;
}

void spB_100()
{
  uint16_t myBLK = display.color565(0, 0, 0), myWHT = display.color565(255, 255, 255);
  int xposg2;

  xposg2 = gameRate - 1;
  xposg2 += 1, display.drawLine(xposg2, 26, xposg2, 30, myBLK);
  if (gameRate != 63)
    gameRate += 1, display.drawLine(gameRate, 26, gameRate, 30, myWHT);
  bwCnt_gap = 50;
}

void spB_101()
{
  uint16_t myBLK = display.color565(0, 0, 0), myWHT = display.color565(255, 255, 255);
  uint8_t yposg2;

  yposg2 = EEPROM.read(33) - 1;
  if (yposg2 != 24)
    yposg2 += 1, display.drawLine(0, yposg2, 63, yposg2, myBLK);
  if (EEPROM.read(33) != 31)
    EEPROM.write(33, EEPROM.read(33) + 1), display.drawLine(0, EEPROM.read(33), 63, EEPROM.read(33), myWHT);
  bwCnt_gap = 500;
}

void spB_102()
{
  uint16_t myBLK = display.color565(0, 0, 0), myWHT = display.color565(255, 255, 255);
  uint8_t xposg2;

  xposg2 = EEPROM.read(33) + 1;
  xposg2 -= 1, display.drawLine(xposg2, 26, xposg2, 30, myBLK);
  if (EEPROM.read(33) != 0)
    EEPROM.write(33, EEPROM.read(33) - 1), display.drawLine(EEPROM.read(33), 26, EEPROM.read(33), 30, myWHT);
  bwCnt_gap = 50;
}

void spB_103()
{
  uint16_t myBLK = display.color565(0, 0, 0), myWHT = display.color565(255, 255, 255);
  uint8_t yposg2;

  yposg2 = EEPROM.read(33) + 1;
  yposg2 -= 1, display.drawLine(0, yposg2, 63, yposg2, myBLK);
  if (EEPROM.read(33) != 25)
    EEPROM.write(33, EEPROM.read(33) - 1), display.drawLine(0, EEPROM.read(33), 63, EEPROM.read(33), myWHT);
  bwCnt_gap = 500;
}

void spG_00()
{
  char sentTxtON[20] = {0};
  uint16_t cc_gry = display.color565(128, 128, 128);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(cc_gry);
  if (EEPROM.read(28) == 1)
    display.setCursor(1, 30);
  else if (EEPROM.read(28) == 2)
  {
    if (EEPROM.read(37) == 1)
      display.setCursor(1, 30);
    else
      display.setCursor(1, 6);
  }
  strcpy_P(sentTxtON, var006);
  display.print(sentTxtON);
  display.setFont();
}

void spG_02()
{
  greetingScroll();
  xposg = ROWS;
  gapScroll = 250;
  bwCnt_gap = 10 * MINUTES;
  EEPROM.write(71, 4);
  EEPROM.write(33, 1);
}

void spG_03()
{
  EEPROM.write(99, 0);
  EEPROM.write(133, 0);
  EEPROM.write(134, 0);
  xposd = xposg = 0;
  char sentTxtON[20] = {0};
  uint16_t cc_tom = display.color565(155, 88, 17), myBLK = display.color565(0, 0, 0);
  display.fillRect(0, 26, 64, 6, myBLK);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(cc_tom);
  display.setCursor(1, 30);
  strcpy_P(sentTxtON, var158);
  display.print(sentTxtON);
  display.setFont();
  spB_000();
  EEPROM.write(71, 5);
}

void spG_03I()
{
  spB_100();
  if (gameRate == 63)
  {
    uint16_t myBLK = display.color565(0, 0, 0);
    display.drawLine(63, 26, 63, 30, myBLK);
    bwCnt_gap = 0;
    EEPROM.write(71, 6);
  }
}

void spG_03J()
{
  char sentTxtOFF[20] = {0};
  draw_date1();

  if (numApplesEaten == 11)
  {
    numApplesEaten = 0;
    strcpy_P(sentTxtOFF, varOFFQ), ws.textAll(sentTxtOFF);
  }
  else
    bwCnt_gap = 30 * SECONDS;
  EEPROM.write(71, 7);
}

void spG_04()
{
  spB_001();
  EEPROM.write(71, 8);
}

void spG_04I()
{
  spB_101();
  if (EEPROM.read(33) == 31)
  {
    uint16_t myBLK = display.color565(0, 0, 0);
    display.drawLine(0, 31, 63, 31, myBLK);
    bwCnt_gap = 0;
    EEPROM.write(71, 9);
  }
}

void spG_04J()
{
  uint16_t cc_ind = display.color565(75, 0, 130);
  EEPROM.write(19, 30);

  char lineTime[15] = {0};
  EEPROM.get(286, lineTime);

  if (strlen(lineTime) == 14)
    EEPROM.write(17, 3);
  else if (strlen(lineTime) == 13)
    EEPROM.write(17, 6);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(cc_ind);
  display.setCursor(EEPROM.read(17), EEPROM.read(19));

  display.print(lineTime);
  display.setFont();
  bwCnt_gap = 5 * SECONDS;
  EEPROM.write(71, 10);
}

void spG_05()
{
  spB_002();
  EEPROM.write(71, 11);
}

void spG_05I()
{
  spB_102();
  if (EEPROM.read(33) == 0)
  {
    uint16_t myBLK = display.color565(0, 0, 0);
    display.drawLine(0, 26, 0, 30, myBLK);
    bwCnt_gap = 0;
    EEPROM.write(71, 12);
  }
}

void spG_05J()
{
  char sentTxtON[20] = {0};
  uint16_t cc_grn = display.color565(0, 16, 0), cc_cho = display.color565(210, 105, 30), cc_ylw = display.color565(16, 16, 0);

  display.setFont(&Font4x5Fixed);
  if (WiFi.gatewayIP().toString() == "10.0.0.1" || WiFi.gatewayIP().toString() == "192.168.0.1")
  {
    display.setCursor(1, 30);
    display.setTextColor(cc_grn);
    strcpy_P(sentTxtON, var007);
    display.print(sentTxtON);
    display.setTextColor(cc_cho);
    if (WiFi.gatewayIP().toString() == "10.0.0.1")
      display.setCursor(40, 30);
    display.print(WiFi.gatewayIP());
  }
  else
  {
    display.setTextColor(cc_ylw);
    display.setCursor(1, 30);
    char wifi_staIP[18] = {0};
    strcpy_P(wifi_staIP, wifi_staIP2);
    display.print(wifi_staIP);
  }
  display.setFont();
  bwCnt_gap = 5 * SECONDS;
  EEPROM.write(71, 13);
}

void spG_06()
{
  spB_003();
  EEPROM.write(71, 14);
}

void spG_06I()
{
  spB_103();
  if (EEPROM.read(33) == 25)
  {
    uint16_t myBLK = display.color565(0, 0, 0);
    display.drawLine(0, 25, 63, 25, myBLK);
    date_Display();
    bwCnt_gap = 0;
    EEPROM.write(71, 15);
  }
}

void spG_06J()
{
  uint16_t cc_tad = display.color565(146, 132, 88);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(cc_tad);
  if (EEPROM.read(138) == 16)
    display.setCursor(5, 30);
  else
    display.setCursor(1, 30);

  char wifi_staIPwt[18] = {0};
  EEPROM.get(165, wifi_staIPwt);
  display.print(wifi_staIPwt);
  display.setFont();
  bwCnt_gap = 5 * SECONDS;
  EEPROM.write(71, 16);
}

void spG_07()
{
  spB_000();
  EEPROM.write(71, 17);
}

void spG_07I()
{
  spB_100();
  if (gameRate == 63)
  {
    uint16_t myBLK = display.color565(0, 0, 0);
    display.drawLine(63, 26, 63, 30, myBLK);
    bwCnt_gap = 0;
    EEPROM.write(71, 18);
  }
}

void spG_07J()
{
  char sentTxtON[20] = {0}, sentTxtOFF[20] = {0};
  uint16_t cc_fgn = display.color565(34, 139, 34), cc_oli = display.color565(128, 128, 0), cc_plg = display.color565(152, 251, 152);
  display.setFont(&Font4x5Fixed);

  char wifi_staIPm[18] = {0};

  strcpy_P(wifi_staIPm, wifi_staIPm2);
  display.setTextColor(cc_fgn);
  display.setCursor(2, 30);
  strcpy_P(sentTxtON, var008);
  display.print(sentTxtON);
  display.setTextColor(cc_oli);
  display.setCursor(35, 30);
  display.print(wifi_staIPm);
  display.setFont();

  if (numApplesEaten == 11)
  {
    bwCnt_gap = 15 * SECONDS, numApplesEaten = 0;

    if (EEPROM.read(133) != 0)
      EEPROM.write(133, 0);
    if (EEPROM.read(99) != 0)
      EEPROM.write(99, 0);

    strcpy_P(sentTxtOFF, varOFFU), ws.textAll(sentTxtOFF);
  }
  else
    bwCnt_gap = 5 * SECONDS;
  EEPROM.write(71, 19);
}

void spG_08()
{
  spB_001();
  EEPROM.write(71, 20);
}

void spG_08I()
{
  spB_101();
  if (EEPROM.read(33) == 31)
  {
    uint16_t myBLK = display.color565(0, 0, 0);
    display.drawLine(0, 31, 63, 31, myBLK);
    bwCnt_gap = 0;
    EEPROM.write(71, 21);
  }
}

void spG_08J()
{
  char sentTxtON[20] = {0};
  uint16_t cc_red = display.color565(16, 0, 0), cc_cyn = display.color565(0, 64, 128), cc_orr = display.color565(255, 69, 0);
  display.setFont(&Font4x5Fixed);

  char wifi_staIPx[18] = {0};

  strcpy_P(wifi_staIPx, wifi_staIPx2);
  display.setTextColor(cc_red);
  display.setCursor(2, 30);
  strcpy_P(sentTxtON, var009);
  display.print(sentTxtON);
  display.setTextColor(cc_cyn);
  display.setCursor(35, 30);
  display.print(wifi_staIPx);
  display.setFont();
  bwCnt_gap = 5 * SECONDS;
  EEPROM.write(71, 22);
}

void spG_18()
{
  spB_000();
  EEPROM.write(71, 55);
}

void spG_18I()
{
  spB_100();
  if (gameRate == 63)
  {
    uint16_t myBLK = display.color565(0, 0, 0);
    display.drawLine(63, 26, 63, 30, myBLK);
    bwCnt_gap = 0;
    EEPROM.write(71, 56);
  }
}

void spG_18J()
{
  char sentTxtON[20] = {0}, sentTxtOFF[20] = {0};
  uint16_t cc_fgn = display.color565(34, 139, 34), cc_oli = display.color565(128, 128, 0), cc_plg = display.color565(152, 251, 152);
  display.setFont(&Font4x5Fixed);

  char wifi_staIPh[18] = {0};

  strcpy_P(wifi_staIPh, wifi_staIPh2);
  display.setTextColor(cc_fgn);
  display.setCursor(2, 30);
  strcpy_P(sentTxtON, var187);
  display.print(sentTxtON);
  display.setTextColor(cc_oli);
  display.setCursor(35, 30);
  display.print(wifi_staIPh);
  display.setFont();
  bwCnt_gap = 5 * SECONDS;
  EEPROM.write(71, 57);
}

void spG_19()
{
  spB_001();
  EEPROM.write(71, 58);
}

void spG_19I()
{
  spB_101();
  if (EEPROM.read(33) == 31)
  {
    uint16_t myBLK = display.color565(0, 0, 0);
    display.drawLine(0, 31, 63, 31, myBLK);
    bwCnt_gap = 0;
    EEPROM.write(71, 59);
  }
}

void spG_19J()
{
  char sentTxtON[20] = {0};
  uint16_t cc_fgn = display.color565(34, 139, 34), cc_ord = display.color565(184, 16, 0);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(cc_fgn);
  display.setCursor(2, 30);
  strcpy_P(sentTxtON, var188);
  display.print(sentTxtON);
  display.setTextColor(cc_ord);

  char serverPath[120] = {0};
  memset(serverPath, '\0', sizeof serverPath);
  strcpy_P(serverPath, serverPath6);
  strcpy(sentTxtON, httpGETRequest(serverPath).c_str());
  display.print(sentTxtON);
  display.setFont();
  bwCnt_gap = 5 * SECONDS;
  EEPROM.write(71, 60);
}

void spG_09()
{
  spB_002();
  EEPROM.write(71, 23);
}

void spG_09I()
{
  spB_102();
  if (EEPROM.read(33) == 0)
  {
    uint16_t myBLK = display.color565(0, 0, 0);
    display.drawLine(0, 26, 0, 30, myBLK);
    bwCnt_gap = 0;
    EEPROM.write(71, 24);
  }
}

void spG_09J()
{
  char sentTxtON[20] = {0};
  uint16_t cc_fgn = display.color565(34, 139, 34);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(cc_fgn);
  display.setCursor(2, 30);
  strcpy_P(sentTxtON, var010);
  display.print(sentTxtON);
  display.setFont();
  bwCnt_gap = 1000;
  EEPROM.write(71, 25);
}

void spG_10()
{
  spB_003();
  EEPROM.write(71, 26);
}

void spG_10I()
{
  spB_103();
  if (EEPROM.read(33) == 25)
  {
    uint16_t myBLK = display.color565(0, 0, 0);
    display.drawLine(0, 25, 63, 25, myBLK);
    date_Display();
    bwCnt_gap = 0;
    EEPROM.write(71, 27);
  }
}

void spG_10J()
{
  uint16_t cc_ylw = display.color565(16, 16, 0);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(cc_ylw);
  display.setCursor(4, 30);
  display.print(WiFi.macAddress());
  display.setFont();
  bwCnt_gap = 5 * SECONDS;
  EEPROM.write(71, 28);
}

void spG_11()
{
  spB_000();
  EEPROM.write(71, 29);
}

void spG_11I()
{
  spB_100();
  if (gameRate == 63)
  {
    uint16_t myBLK = display.color565(0, 0, 0);
    display.drawLine(63, 26, 63, 30, myBLK);
    bwCnt_gap = 0;
    EEPROM.write(71, 30);
  }
}

void spG_11J()
{
  char sentTxtON[20] = {0}, sentTxtOFF[20] = {0};
  uint16_t cc_grn = display.color565(0, 16, 0), cc_orr = display.color565(255, 69, 0);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(cc_grn);
  display.setCursor(2, 30);
  strcpy_P(sentTxtON, var011);
  display.print(sentTxtON);
  display.setTextColor(cc_orr);
  display.setCursor(24, 30);
  char webData[4] = {0};
  EEPROM.get(397, webData);
  display.print(webData);
  display.setFont();

  if (numApplesEaten == 11)
  {
    bwCnt_gap = 20 * SECONDS, numApplesEaten = 0;

    if (EEPROM.read(133) != 0)
      EEPROM.write(133, 0);
    if (EEPROM.read(99) != 0)
      EEPROM.write(99, 0);

    strcpy_P(sentTxtOFF, varOFFV), ws.textAll(sentTxtOFF);
  }
  else
    bwCnt_gap = 5 * SECONDS;
  EEPROM.write(71, 31);
}

void spG_12()
{
  spB_001();
  EEPROM.write(71, 32);
}

void spG_12I()
{
  spB_101();
  if (EEPROM.read(33) == 31)
  {
    uint16_t myBLK = display.color565(0, 0, 0);
    display.drawLine(0, 31, 63, 31, myBLK);
    bwCnt_gap = 0;
    EEPROM.write(71, 33);
  }
}

void spG_12J()
{
  char sentTxtON[20] = {0};
  uint16_t cc_fgn = display.color565(34, 139, 34), cc_ord = display.color565(184, 16, 0);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(cc_fgn);
  display.setCursor(2, 30);
  strcpy_P(sentTxtON, var215);
  display.print(sentTxtON);
  display.setTextColor(cc_ord);
  display.setCursor(19, 30);
  display.print(EEPROM.read(21));
  display.setTextColor(cc_fgn);
  display.setCursor(34, 30);
  strcpy_P(sentTxtON, var012);
  display.print(sentTxtON);
  display.setTextColor(cc_ord);
  display.setCursor(53, 30);
  display.print(EEPROM.read(22));
  display.setFont();
  bwCnt_gap = 5 * SECONDS;
  EEPROM.write(71, 34);
}

void spG_13()
{
  spB_002();
  EEPROM.write(71, 35);
}

void spG_13I()
{
  spB_102();
  if (EEPROM.read(33) == 0)
  {
    uint16_t myBLK = display.color565(0, 0, 0);
    display.drawLine(0, 26, 0, 30, myBLK);
    bwCnt_gap = 0;
    EEPROM.write(71, 36);
  }
}

void spG_13J()
{
  char sentTxtON[20] = {0};
  uint16_t cc_grn = display.color565(0, 16, 0), cc_tom = display.color565(255, 99, 17);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(cc_grn);
  display.setCursor(2, 30);
  strcpy_P(sentTxtON, var216);
  display.print(sentTxtON);
  display.setTextColor(cc_tom);
  display.setCursor(20, 30);
  display.print(EEPROM.read(39));
  display.setTextColor(cc_grn);
  display.setCursor(34, 30);
  strcpy_P(sentTxtON, var013);
  display.print(sentTxtON);
  display.setTextColor(cc_tom);
  display.setCursor(52, 30);
  display.print(EEPROM.read(51));
  display.setFont();
  bwCnt_gap = 5 * SECONDS;
  EEPROM.write(71, 37);
}

void spG_14()
{
  spB_003();
  EEPROM.write(71, 38);
}

void spG_14I()
{
  spB_103();
  if (EEPROM.read(33) == 25)
  {
    uint16_t myBLK = display.color565(0, 0, 0);
    display.drawLine(0, 25, 63, 25, myBLK);
    date_Display();
    bwCnt_gap = 0;
    EEPROM.write(71, 39);
  }
}

void spG_14J()
{
  char sentTxtON[20] = {0};
  uint16_t cc_fgn = display.color565(34, 139, 34), cc_ord = display.color565(184, 16, 0);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(cc_fgn);
  display.setCursor(2, 30);
  strcpy_P(sentTxtON, var240);
  display.print(sentTxtON);
  display.setTextColor(cc_ord);
  display.setCursor(20, 30);
  display.print(EEPROM.read(24));
  display.setTextColor(cc_fgn);
  display.setCursor(34, 30);
  strcpy_P(sentTxtON, var014);
  display.print(sentTxtON);
  display.setTextColor(cc_ord);
  display.setCursor(52, 30);
  display.print(EEPROM.read(57));
  display.setFont();
  bwCnt_gap = 5 * SECONDS;
  EEPROM.write(71, 40);
}

void spG_15()
{
  spB_000();
  EEPROM.write(71, 41);
}

void spG_15I()
{
  spB_100();
  if (gameRate == 63)
  {
    uint16_t myBLK = display.color565(0, 0, 0);
    display.drawLine(63, 26, 63, 30, myBLK);
    bwCnt_gap = 0;
    EEPROM.write(71, 42);
  }
}

void spG_15J()
{
  char sentTxtON[20] = {0};
  uint16_t cc_fgn = display.color565(34, 139, 34), cc_ord = display.color565(184, 16, 0);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(cc_fgn);
  display.setCursor(2, 30);
  strcpy_P(sentTxtON, var155);
  display.print(sentTxtON);
  display.setTextColor(cc_ord);
  display.print(minsALL);
  display.setFont();
  bwCnt_gap = 5 * SECONDS;
  EEPROM.write(71, 43);
}

void spG_16()
{
  spB_000();
  EEPROM.write(71, 44);
}

void spG_16I()
{
  spB_100();
  if (gameRate == 63)
  {
    uint16_t myBLK = display.color565(0, 0, 0);
    display.drawLine(63, 26, 63, 30, myBLK);
    bwCnt_gap = 0;
    EEPROM.write(71, 45);
  }
}

void spG_16J()
{
  EEPROM.write(134, 1); // to be used for controlling megaScrolTEXT

  EEPROM.write(72, 35);
  EEPROM.write(73, 32);
  gapScroll = 500;
  EEPROM.write(52, 1);
  bwCnt_gap = 30 * SECONDS;
  EEPROM.write(71, 46);
}

void spG_17()
{
  char sentTxtON[20] = {0};
  uint16_t cc_tom = display.color565(255, 99, 17), myBLK = display.color565(0, 0, 0);

  EEPROM.write(52, 0);
  EEPROM.write(72, 0);
  EEPROM.write(73, 0);
  EEPROM.write(134, 0);

  display.fillRect(0, 26, 64, 6, myBLK);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(cc_tom);
  display.setCursor(1, 30);
  strcpy_P(sentTxtON, var006);
  display.print(sentTxtON);
  display.setFont();
  spB_003();
  EEPROM.write(71, 47);
}

void spG_17I()
{
  spB_103();
  if (EEPROM.read(33) == 25)
  {
    uint16_t myBLK = display.color565(0, 0, 0);
    display.drawLine(0, 25, 63, 25, myBLK);
    date_Display();
    bwCnt_gap = 0;
    EEPROM.write(71, 48);
  }
}

void spG_17J()
{
  EEPROM.write(71, 1);
}

void spG_U()
{
  xposd = xposg = 0;
  EEPROM.write(133, 0);
  EEPROM.write(99, 0);
  EEPROM.write(134, 0);
  char sentTxtON[20] = {0};
  uint16_t cc_tom = display.color565(155, 88, 17), myBLK = display.color565(0, 0, 0);
  display.fillRect(0, 26, 64, 6, myBLK);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(cc_tom);
  display.setCursor(1, 30);
  strcpy_P(sentTxtON, var158);
  display.print(sentTxtON);
  display.setFont();
  spB_000();
  EEPROM.write(71, 50);
}

void spG_UI()
{
  spB_100();
  if (gameRate == 63)
  {
    uint16_t myBLK = display.color565(0, 0, 0);
    display.drawLine(63, 26, 63, 30, myBLK);
    bwCnt_gap = 0;
    EEPROM.write(71, 51);
  }
}

void spG_UJ()
{
  char sentTxtON[20] = {0};
  uint16_t cc_tom = display.color565(255, 99, 17);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(cc_tom);
  display.setCursor(1, 30);
  strcpy_P(sentTxtON, var006);
  display.print(sentTxtON);
  display.setFont();
  if (EEPROM.read(57) == 1)
  {
    EEPROM.write(71, 1);
    EEPROM.write(59, 100);
  }
  else
    EEPROM.write(71, 0);
}

void spG_V()
{
  xposd = xposg = 0;
  EEPROM.write(133, 0);
  EEPROM.write(99, 0);
  EEPROM.write(134, 0);
  char sentTxtON[20] = {0};
  uint16_t cc_tom = display.color565(155, 88, 17), myBLK = display.color565(0, 0, 0);
  display.fillRect(0, 26, 64, 6, myBLK);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(cc_tom);
  display.setCursor(1, 30);
  strcpy_P(sentTxtON, var158);
  display.print(sentTxtON);
  display.setFont();
  spB_000();
  EEPROM.write(71, 53);
}

void spG_VI()
{
  spB_100();
  if (gameRate == 63)
  {
    uint16_t myBLK = display.color565(0, 0, 0);
    display.drawLine(63, 26, 63, 30, myBLK);
    bwCnt_gap = 0;
    EEPROM.write(71, 54);
  }
}

void spG_VJ()
{
  draw_date1();
  EEPROM.write(71, 0);
}

void draw_date()
{
  uint16_t myWHT = display.color565(255, 255, 255), myBLK = display.color565(0, 0, 0), cc_cor = display.color565(225, 127, 70), cc_grd = display.color565(0, 130, 0), cc_fgn = display.color565(34, 139, 34), cc_lgn = display.color565(86, 189, 16), cc_tom = display.color565(155, 88, 17), cc_grn = display.color565(0, 16, 0), cc_cyd = display.color565(128, 80, 128);

  EEPROM.write(19, 26);
  char actPLAYD[10] = {0};
  char dateMdate[3] = {0}, sTH[3] = {0};

  strcpy(dateMdate, "");
  if (mdate < 10)
    strcpy(dateMdate, "0");
  itoa(mdate, actPLAYD, 10);
  strcat(dateMdate, actPLAYD);

  if (mdate == 1 || mdate == 21 || mdate == 31)
    strcpy(sTH, "st");
  else if (mdate == 2 || mdate == 22)
    strcpy(sTH, "nd");
  else if (mdate == 3 || mdate == 23)
    strcpy(sTH, "rd");
  else
    strcpy(sTH, "th");

  strcpy_P(actPLAYD, (char *)pgm_read_dword(&(DOW[mdays])));
  EEPROM.write(17, xposd), TFDrawText(&display, actPLAYD, EEPROM.read(17), EEPROM.read(19), cc_cor);
  if (strlen(actPLAYD) == 6)
    EEPROM.write(17, EEPROM.read(17) + 28);
  else if (strlen(actPLAYD) == 7)
    EEPROM.write(17, EEPROM.read(17) + 32);
  else if (strlen(actPLAYD) == 8)
    EEPROM.write(17, EEPROM.read(17) + 36);
  else if (strlen(actPLAYD) == 9)
    EEPROM.write(17, EEPROM.read(17) + 40);
  itoa(mdate, actPLAYD, 10);
  TFDrawText(&display, actPLAYD, EEPROM.read(17), EEPROM.read(19), cc_fgn);
  if (mdate < 10)
    EEPROM.write(17, EEPROM.read(17) + 5);
  else
    EEPROM.write(17, EEPROM.read(17) + 9);
  display.setFont(&Font4x5Fixed);
  uint16_t cc_gtC = 0;
  EEPROM.get2(139, cc_gtC);
  display.setTextColor(cc_gtC);
  display.setCursor(EEPROM.read(17), 30);
  display.print(sTH);
  display.setFont();
  EEPROM.write(17, EEPROM.read(17) + 7);
  TFDrawText(&display, " ", EEPROM.read(17), EEPROM.read(19), myBLK);

  strcpy_P(actPLAYD, (char *)pgm_read_dword(&(MONTHS[mmonth])));
  EEPROM.write(17, EEPROM.read(17) + 4), TFDrawText(&display, actPLAYD, EEPROM.read(17), EEPROM.read(19), cc_grd);
  if (strlen(actPLAYD) == 3)
  {
    EEPROM.write(33, 12);
    EEPROM.write(17, EEPROM.read(17) + EEPROM.read(33));
  }
  else if (strlen(actPLAYD) == 4)
  {
    EEPROM.write(33, 16);
    EEPROM.write(17, EEPROM.read(17) + EEPROM.read(33));
  }
  else if (strlen(actPLAYD) == 5)
  {
    EEPROM.write(33, 20);
    EEPROM.write(17, EEPROM.read(17) + EEPROM.read(33));
  }
  else if (strlen(actPLAYD) == 6)
  {
    EEPROM.write(33, 24);
    EEPROM.write(17, EEPROM.read(17) + EEPROM.read(33));
  }
  else if (strlen(actPLAYD) == 7)
  {
    EEPROM.write(33, 28);
    EEPROM.write(17, EEPROM.read(17) + EEPROM.read(33));
  }
  else if (strlen(actPLAYD) == 8)
  {
    EEPROM.write(33, 32);
    EEPROM.write(17, EEPROM.read(17) + EEPROM.read(33));
  }
  else if (strlen(actPLAYD) == 9)
  {
    EEPROM.write(33, 36);
    EEPROM.write(17, EEPROM.read(17) + EEPROM.read(33));
  }
  TFDrawText(&display, " ", EEPROM.read(17), EEPROM.read(19), myBLK);
  unsigned short myear = 0;
  EEPROM.get2(67, myear);
  itoa(myear, actPLAYD, 10);
  EEPROM.write(17, EEPROM.read(17) + 4), TFDrawText(&display, actPLAYD, EEPROM.read(17), EEPROM.read(19), cc_lgn);
  EEPROM.write(17, EEPROM.read(17) + 15), TFDrawText(&display, ".", EEPROM.read(17), EEPROM.read(19), cc_cyd);
  EEPROM.write(17, EEPROM.read(17) + 4), display.drawLine(EEPROM.read(17), 26, EEPROM.read(17), 30, myRED);

  if (EEPROM.read(17) > 1)
  {
    display.drawLine(0, 26, 0, 30, myBLK);
    display.drawLine(0, 26, 0, 30, myRED);
  }
  if (EEPROM.read(17) == 0)
  {
    EEPROM.write(99, 0);
    display.drawLine(0, 26, 0, 30, myBLK);
    display.drawLine(1, 26, 1, 30, myBLK);
    gapScroll = 300;
    EEPROM.write(58, 10);
  }
  if (EEPROM.read(17) == 1)
  {
    display.drawLine(0, 26, 0, 30, myRED);
    display.drawLine(1, 26, 1, 30, myRED);
    gapScroll = 700;
  }
  if (EEPROM.read(17) == 20)
  {
    xposg = ROWS, EEPROM.write(33, 1);
  }
}

void draw_date1()
{
  uint16_t myBLK = display.color565(0, 0, 0), cc_cor = display.color565(225, 127, 70), cc_grd = display.color565(0, 130, 0), cc_fgn = display.color565(34, 139, 34), cc_lgn = display.color565(86, 189, 16), cc_cyd = display.color565(128, 80, 128);
  char actPLAYD[10] = {0};
  char dateMdate[3] = {0};

  strcpy(dateMdate, "");
  if (mdate < 10)
    strcpy(dateMdate, "0");
  itoa(mdate, actPLAYD, 10);
  strcat(dateMdate, actPLAYD);

  EEPROM.write(19, 26);

  strcpy_P(actPLAYD, (char *)pgm_read_dword(&(days[mdays])));
  EEPROM.write(17, 1), TFDrawText(&display, actPLAYD, EEPROM.read(17), EEPROM.read(19), cc_cor);
  EEPROM.write(17, EEPROM.read(17) + 11), TFDrawText(&display, ".", EEPROM.read(17), EEPROM.read(19), cc_cyd);
  EEPROM.write(17, EEPROM.read(17) + 6), TFDrawText(&display, "", EEPROM.read(17), EEPROM.read(19), myBLK);
  EEPROM.write(17, EEPROM.read(17) + 3), TFDrawText(&display, dateMdate, EEPROM.read(17), EEPROM.read(19), cc_fgn);
  EEPROM.write(17, EEPROM.read(17) + 7), TFDrawText(&display, " ", EEPROM.read(17), EEPROM.read(19), myBLK);

  unsigned short myear = 0;
  EEPROM.get2(67, myear);

  strcpy_P(actPLAYD, (char *)pgm_read_dword(&(months[mmonth])));
  EEPROM.write(17, EEPROM.read(17) + 4), TFDrawText(&display, actPLAYD, EEPROM.read(17), EEPROM.read(19), cc_grd);
  EEPROM.write(17, EEPROM.read(17) + 12), TFDrawText(&display, " ", EEPROM.read(17), EEPROM.read(19), myBLK);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(cc_lgn);
  EEPROM.write(17, EEPROM.read(17) + 3), EEPROM.write(19, 30);
  display.setCursor(EEPROM.read(17), EEPROM.read(19));
  display.print(myear);
  display.setFont();
}

void draw_dateGM()
{
  if (EEPROM.read(59) < 99 && EEPROM.read(39) == 0)
  {
    char actPLAYD[10] = {0};
    display.setTextColor(random(1, 65535));
    strcpy_P(actPLAYD, (char *)pgm_read_dword(&(DOW[mdays])));
    if (strlen(actPLAYD) == 6)
      display.setCursor(14, 13);
    else if (strlen(actPLAYD) == 7)
      display.setCursor(12, 13);
    else if (strlen(actPLAYD) == 8)
      display.setCursor(8, 13);
    else if (strlen(actPLAYD) == 9)
      display.setCursor(5, 13);
    display.print(actPLAYD);
    display.setFont();
  }
}

void buzzr_dateGL()
{
  char actPLAYD[10] = {0};
  uint16_t cc_rdm = random(1, 65535);
  strcpy_P(actPLAYD, (char *)pgm_read_dword(&(DOW[mdays])));
  if (strlen(actPLAYD) == 6)
    display.drawRect(12, 11, 39, 11, cc_rdm);
  else if (strlen(actPLAYD) == 7)
    display.drawRect(10, 11, 45, 11, cc_rdm);
  else if (strlen(actPLAYD) == 8)
    display.drawRect(6, 11, 52, 11, cc_rdm);
  else if (strlen(actPLAYD) == 9)
    display.drawRect(3, 11, 57, 11, cc_rdm);
}

void buzzr_dateGB()
{
  char actPLAYD[10] = {0};
  uint16_t myBLK = display.color565(0, 0, 0);
  strcpy_P(actPLAYD, (char *)pgm_read_dword(&(DOW[mdays])));
  if (strlen(actPLAYD) == 6)
    display.drawRect(12, 11, 39, 11, myBLK);
  else if (strlen(actPLAYD) == 7)
    display.drawRect(10, 11, 45, 11, myBLK);
  else if (strlen(actPLAYD) == 8)
    display.drawRect(6, 11, 52, 11, myBLK);
  else if (strlen(actPLAYD) == 9)
    display.drawRect(3, 11, 57, 11, myBLK);
}

void draw_dateG()
{
  char actPLAYD[10] = {0};
  uint16_t myBLK = display.color565(0, 0, 0), cc_grd = display.color565(0, 30, 0), cc_cyn = display.color565(0, 64, 128), cc_pre = display.color565(64, 0, 32), myYLW = display.color565(255, 255, 0), myMAG = display.color565(255, 0, 255);

  unsigned short myear = 0;
  EEPROM.get2(67, myear);

  uint8_t d0, d1, y0;
  d0 = mdate % 10;
  d1 = mdate / 10;
  y0 = myear % 2000;

  if (EEPROM.read(51) == 3)
    if (EEPROM.read(37) == 1)
      display.fillRect(1, 2, 29, 5, myBLK);
    else
      display.fillRect(1, 26, 29, 5, myBLK);

  display.setFont(&Font4x5Fixed);
  if (EEPROM.read(28) == 2)
  {
    display.setTextColor(cc_cyn);
    if (EEPROM.read(37) == 1)
    {
      display.setCursor(1, 6);
      if (d1 == 1)
      {
        display.setCursor(2, 6);
        display.drawPixel(1, 3, cc_cyn);
        display.drawPixel(1, 6, cc_cyn);
        display.drawPixel(3, 6, cc_cyn);
      }
      display.print(d1);
      display.setCursor(5, 6);
      if (d0 == 1)
      {
        display.setCursor(6, 6);
        display.drawPixel(5, 3, cc_cyn);
        display.drawPixel(5, 6, cc_cyn);
        display.drawPixel(7, 6, cc_cyn);
      }
      display.print(d0);
      display.setTextColor(cc_grd);
      display.setCursor(10, 6);
      strcpy_P(actPLAYD, (char *)pgm_read_dword(&(months[mmonth])));
      display.print(actPLAYD);
      display.setTextColor(cc_pre);
      display.setCursor(23, 6);
      display.print(y0);
    }
    else
    {
      display.setCursor(1, 30);
      if (d1 == 1)
      {
        display.setCursor(2, 30);
        display.drawPixel(1, 27, cc_cyn);
        display.drawPixel(1, 30, cc_cyn);
        display.drawPixel(3, 30, cc_cyn);
      }
      display.print(d1);
      display.setCursor(5, 30);
      if (d0 == 1)
      {
        display.setCursor(6, 30);
        display.drawPixel(5, 27, cc_cyn);
        display.drawPixel(5, 30, cc_cyn);
        display.drawPixel(7, 30, cc_cyn);
      }
      display.print(d0);
      display.setTextColor(cc_grd);
      display.setCursor(10, 30);
      strcpy_P(actPLAYD, (char *)pgm_read_dword(&(months[mmonth])));
      display.print(actPLAYD);
      display.setTextColor(cc_pre);
      display.setCursor(23, 30);
      display.print(y0);
    }
  }
  else if (EEPROM.read(28) == 3)
  {
    display.setCursor(1, 30);
    display.setTextColor(myYLW);
    strcpy_P(actPLAYD, (char *)pgm_read_dword(&(DOW[mdays])));
    display.print(actPLAYD);
    display.drawRect(5, 25, 1, 7, myMAG);
    display.setTextColor(cc_grd);
    display.setCursor(7, 30);
    if (d1 == 1)
    {
      display.setCursor(8, 30);
      display.drawPixel(7, 27, cc_grd);
      display.drawPixel(7, 30, cc_grd);
      display.drawPixel(9, 30, cc_grd);
    }
    display.print(d1);
    display.setCursor(11, 30);
    if (d0 == 1)
    {
      display.setCursor(12, 30);
      display.drawPixel(11, 27, cc_grd);
      display.drawPixel(11, 30, cc_grd);
      display.drawPixel(13, 30, cc_grd);
    }
    display.print(d0);
    display.setCursor(16, 30);
    strcpy_P(actPLAYD, (char *)pgm_read_dword(&(months[mmonth])));
    display.print(actPLAYD);
  }
  display.setFont();
}

void getRoomTH()
{
  EEPROM.write(53, dht.readTemperature());
  EEPROM.write(54, dht.readHumidity());
}

void draw_roomTH()
{
  uint16_t cc_pre = display.color565(64, 0, 32);
  if (EEPROM.read(54) <= 100)
  {
    char txtSen[20] = {0};
    itoa(EEPROM.read(53), txtSen, 10);
    EEPROM.write(17, 13), TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_pre);
    itoa(EEPROM.read(54), txtSen, 10);
    EEPROM.write(17, 42), TFDrawText(&display, txtSen, EEPROM.read(17), EEPROM.read(19), cc_pre);
  }
}

void sp7_Zero()
{
  draw_sensorPresRGB();

  if (EEPROM.read(28) == 2)
    if (EEPROM.read(37) == 1)
      EEPROM.write(19, 26);
    else
      EEPROM.write(19, 2);
  else if (EEPROM.read(28) == 3)
    EEPROM.write(19, 18);
  else if (EEPROM.read(28) == 1)
    EEPROM.write(19, 1);

  sensorDisp00();
  //-temperature
  EEPROM.write(17, 0), draw_weatherT();
  //-humidity
  EEPROM.write(17, 51), draw_weatherH();
}

void sp7_Zero1()
{
  draw_sensorPresRGB();
  sensorDisp01();
}

void kickStartClock()
{
  syncT_syncW();
  EEPROM.write(31, 0);

  if (EEPROM.read(57) != 9)
  {
    gap_sp7 = 0, sp7_Zero();
    EEPROM.write(15, 1);
  }
  EEPROM.write(25, 1);

  if (EEPROM.read(28) == 1)
  {
    beautColBLK2();
    if (EEPROM.read(57) != 9)
    {
      if (EEPROM.read(57) != 1 && EEPROM.read(20) != 4)
        spG_03();
      else if (EEPROM.read(20) == 4)
        EEPROM.write(20, 0);
    }

    pixMCUClkDispS();

    EEPROM.write(26, 1);
    if (EEPROM.read(57) != 9)
      EEPROM.write(51, 2);
  }
  else if (EEPROM.read(28) == 2)
  {
    EEPROM.write(44, 1);
    if (EEPROM.read(57) != 9)
      EEPROM.write(51, 3);
    draw_dateGM();
    uint16_t cc_blu = display.color565(0, 0, 128);
    display.drawRect(0, 9, 64, 16, cc_blu);
  }

  if (EEPROM.read(22) == 9)
    EEPROM.write(60, 148);
  else if (EEPROM.read(57) == 8)
    EEPROM.write(57, 0);
  else if (EEPROM.read(57) == 9)
  {
    EEPROM.write(57, 7);
    EEPROM.write(60, 201);
  }

  date_Display();
}

void date_Display0()
{
  EEPROM.write(17, 1);
  if (EEPROM.read(28) == 1)
    EEPROM.write(19, 25);
  else if (EEPROM.read(28) == 2)
    EEPROM.write(19, 23);
}

void date_Display()
{
  date_Display0();

  unsigned short myear = 0;
  EEPROM.get2(67, myear);

  if (mmonth == 1)
  {
    if (myear % 4 == 0)
      mdate_29();
    else
      mdate_28();
  }
  else if (mmonth == 3 || mmonth == 5 || mmonth == 8 || mmonth == 10)
  {
    mdate_30();
  }
  else if (mmonth == 0 || mmonth == 2 || mmonth == 4 || mmonth == 6 || mmonth == 7 || mmonth == 9 || mmonth == 11)
  {
    mdate_31();
  }
}

void megaScroll_FUM()
{
  uint16_t cc_tom = display.color565(255, 99, 17), myBLK = display.color565(0, 0, 0);

  if (EEPROM.read(134) == 1 && EEPROM.read(52) == 1)
  {
    uint8_t ypos = 0, ypos1 = 0;
    ypos1 = EEPROM.read(73) - 1;
    display.fillRect(1, ypos1, 63, 5, myBLK);
    EEPROM.write(73, ypos1);
    display.setFont(&Font4x5Fixed);
    display.setTextColor(cc_tom);
    ypos = EEPROM.read(72) - 1;
    display.setCursor(1, ypos);
    EEPROM.write(72, ypos);
    display.print(var006);
    display.setFont();
  }

  if (EEPROM.read(72) == 30 && EEPROM.read(134) == 1 && EEPROM.read(52) == 1)
  {
    display.fillRect(0, 26, 64, 6, myBLK);
    EEPROM.write(52, 0);
    gapScroll = 200;
    EEPROM.write(72, 40);
  }
  else if (EEPROM.read(72) == 40 && EEPROM.read(134) == 1)
  {
    display.setFont(&Font4x5Fixed);
    display.setTextColor(cc_tom);
    display.setCursor(1, 30);
    display.print(var006);
    display.setFont();
    gapScroll = 500;
    EEPROM.write(72, 41);
  }
  else if (EEPROM.read(72) == 41 && EEPROM.read(134) == 1)
  {
    display.fillRect(0, 26, 64, 6, myBLK);
    gapScroll = 300;
    EEPROM.write(72, 42);
  }
  else if (EEPROM.read(72) == 42 && EEPROM.read(134) == 1)
  {
    display.setFont(&Font4x5Fixed);
    display.setTextColor(cc_tom);
    display.setCursor(1, 30);
    display.print(var006);
    display.setFont();
    gapScroll = 3000;
    EEPROM.write(72, 43);
  }
  else if (EEPROM.read(72) == 43 && EEPROM.read(134) == 1)
  {
    display.fillRect(0, 26, 64, 6, myBLK);
    EEPROM.write(72, 36), EEPROM.write(73, 32);
    EEPROM.write(52, 1);
    gapScroll = 500;
  }
}

void ucheScroll_FUM()
{
  if (EEPROM.read(131) == 1)
  {
    uint16_t myMAG = display.color565(255, 0, 255), myGOL = display.color565(255, 215, 0), myWHT = display.color565(255, 255, 255), cc_wht = display.color565(16, 16, 16), myBLK = display.color565(0, 0, 0);
    uint8_t spB, spB1;

    if (EEPROM.read(28) == 1)
    {
      if (EEPROM.read(33) > 0)
      {
        EEPROM.write(33, xpos - 1), spB1 = xpos - 1;
        spB = EEPROM.read(33) - 1;
        if (EEPROM.read(21) == 201)
          display.drawLine(spB, 1, spB1 -= 1, 5, myWHT);
        else if (EEPROM.read(21) == 202)
          display.drawLine(spB, 26, spB1 -= 1, 30, myWHT);
        EEPROM.write(33, spB);
      }
      display.fillRect(xpos -= 1, EEPROM.read(73), 164, 5, myBLK);
    }
    else if (EEPROM.read(28) == 2)
    {
      if (EEPROM.read(37) == 1)
      {
        if (EEPROM.read(21) == 201)
        {
          if (EEPROM.read(33) > 0)
          {
            EEPROM.write(33, xpos - 1), spB1 = xpos - 1;
            spB = EEPROM.read(33) - 1;
            display.drawLine(spB, 25, spB1 -= 1, 31, myWHT);
            EEPROM.write(33, spB);
          }
        }
        else if (EEPROM.read(21) == 202)
        {
          if (EEPROM.read(33) != 1)
          {
            EEPROM.write(33, xpos - 1), spB1 = xpos - 1;
            spB = EEPROM.read(33) - 1;
            display.drawLine(spB, 1, spB1 -= 1, 7, myWHT);
            EEPROM.write(33, spB);
          }
        }
      }
      else
      {
        if (EEPROM.read(21) == 201)
        {
          if (EEPROM.read(33) != 1)
          {
            EEPROM.write(33, xpos - 1), spB1 = xpos - 1;
            spB = EEPROM.read(33) - 1;
            display.drawLine(spB, 1, spB1 -= 1, 7, myWHT);
            EEPROM.write(33, spB);
          }
        }
        else if (EEPROM.read(21) == 202)
        {
          if (EEPROM.read(33) > 0)
          {
            EEPROM.write(33, xpos - 1), spB1 = xpos - 1;
            spB = EEPROM.read(33) - 1;
            display.drawLine(spB, 25, spB1 -= 1, 31, myWHT);
            EEPROM.write(33, spB);
          }
        }
      }
      display.fillRect(xpos -= 1, EEPROM.read(73), 164, 7, myBLK);
    }

    display.setFont(&Font4x5Fixed);
    if (EEPROM.read(21) == 201)
      display.setTextColor(myMAG);
    else if (EEPROM.read(21) == 202)
      display.setTextColor(myGOL);
    ing = xpos;
    display.setCursor(ing += 3, EEPROM.read(72));

    char ucheScrolTEXT[85] = {0};
    EEPROM.get(201, ucheScrolTEXT);
    display.print(ucheScrolTEXT);
    display.setFont();

    if (EEPROM.read(28) == 1)
    {
      if (EEPROM.read(21) == 201)
      {
        if (EEPROM.read(33) == 0)
        {
          display.drawLine(0, 1, 0, 5, myBLK);
          display.drawLine(0, 1, 0, 5, myWHT);
        }
      }
      else if (EEPROM.read(21) == 202)
      {
        if (EEPROM.read(33) == 0)
        {
          display.drawLine(0, 26, 0, 30, myBLK);
          display.drawLine(0, 26, 0, 30, myWHT);
        }
      }
    }
    else if (EEPROM.read(28) == 2)
    {
      if (EEPROM.read(37) == 1)
      {
        if (EEPROM.read(21) == 201)
        {
          if (EEPROM.read(33) == 0)
          {
            display.drawLine(0, 25, 0, 31, myBLK);
            display.drawLine(0, 25, 0, 31, myWHT);
          }
        }
        else if (EEPROM.read(21) == 202)
        {
          display.drawLine(0, 1, 0, 7, myBLK);
          display.drawLine(63, 1, 63, 7, myBLK);
          display.drawLine(0, 1, 0, 7, cc_wht);
          display.drawLine(63, 1, 63, 7, cc_wht);
          if (EEPROM.read(33) == 1)
          {
            display.drawLine(1, 1, 1, 7, myBLK);
            display.drawLine(1, 1, 1, 7, myWHT);
          }
        }
      }
      else
      {
        if (EEPROM.read(21) == 201)
        {
          display.drawLine(0, 1, 0, 7, myBLK);
          display.drawLine(63, 1, 63, 7, myBLK);
          display.drawLine(0, 1, 0, 7, cc_wht);
          display.drawLine(63, 1, 63, 7, cc_wht);
          if (EEPROM.read(33) == 1)
          {
            display.drawLine(1, 1, 1, 7, myBLK);
            display.drawLine(1, 1, 1, 7, myWHT);
          }
        }
        else if (EEPROM.read(21) == 202)
        {
          if (EEPROM.read(33) == 0)
          {
            display.drawLine(0, 25, 0, 31, myBLK);
            display.drawLine(0, 25, 0, 31, myWHT);
          }
        }
      }
    }
  }
}

void gretScroll_FUM()
{
  if (EEPROM.read(133) != 0)
  {
    uint16_t myWHT = display.color565(255, 255, 255), myBLK = display.color565(0, 0, 0), cc_cor = display.color565(225, 127, 70);
    uint8_t spB, spB1;

    if (EEPROM.read(33) > 0 && EEPROM.read(33) <= ROWS)
    {
      EEPROM.write(33, xposg), spB1 = xposg;
      spB = EEPROM.read(33) - 1;
      display.drawLine(spB, 26, spB1 -= 1, 30, cc_cor);
      EEPROM.write(33, spB);
    }

    display.fillRect(xposg--, 26, 284, 5, myBLK);
    display.setFont(&Font4x5Fixed);
    uint16_t cc_gtC = 0;
    EEPROM.get2(139, cc_gtC);
    display.setTextColor(cc_gtC);
    ing = xposg;
    display.setCursor(ing += 4, 30);

    char greetingsTEXT[85] = {0};
    EEPROM.get(201, greetingsTEXT);
    display.print(greetingsTEXT);
    display.setFont();

    if (EEPROM.read(33) == 0)
    {
      display.drawLine(0, 26, 0, 30, myBLK);
      display.drawLine(0, 26, 0, 30, myWHT);
    }

    if (EEPROM.read(64) >= 6 && EEPROM.read(64) < 12)
      ing += 230;
    else if (EEPROM.read(64) >= 12 && EEPROM.read(64) < 17)
      ing += 240;
    else if (EEPROM.read(64) >= 17 && EEPROM.read(64) < 21)
      ing += 230;
    else if (EEPROM.read(64) >= 21 && EEPROM.read(64) < 24)
      ing += 290;
    else if (EEPROM.read(64) >= 0 && EEPROM.read(64) < 4)
      ing += 290;
    else if (EEPROM.read(64) >= 4 && EEPROM.read(64) < 6)
      ing += 230;

    if (ing == 63 && EEPROM.read(99) == 0)
    {
      EEPROM.write(99, 1);
      gapScroll = 300;
      xposd = ROWS;
      EEPROM.write(33, ROWS + 1);
    }
  }
}

void dateScroll_FUM()
{
  uint16_t myWHT = display.color565(255, 255, 255), myBLK = display.color565(0, 0, 0);

  if (EEPROM.read(99) != 0)
  {
    display.fillRect(xposd--, 26, (75 + EEPROM.read(33)), 5, myBLK);
    draw_date();
  }

  if (EEPROM.read(58) == 10)
    EEPROM.write(58, 11), gapScroll = 0;
  else if (EEPROM.read(58) == 11)
  {
    display.drawLine(0, 26, 0, 30, myRED);
    display.drawLine(1, 26, 1, 30, myRED);
    gapScroll = 300;
    EEPROM.write(58, 12);
  }
  else if (EEPROM.read(58) == 12)
  {
    display.drawLine(0, 26, 0, 30, myBLK);
    display.drawLine(1, 26, 1, 30, myBLK);
    gapScroll = 250;
    EEPROM.write(58, 0);
  }
}

void scroll_text_Conditions()
{
  uint16_t myWHT = display.color565(255, 255, 255), myBLK = display.color565(0, 0, 0);

  if (EEPROM.read(21) == 201 && xpos <= -137)
  {
    EEPROM.write(131, 0);
    EEPROM.write(21, 202);
    if (EEPROM.read(28) == 1)
    {
      EEPROM.write(33, 1);
      EEPROM.write(72, 30), EEPROM.write(73, 26);
      display.drawLine(0, 1, 0, 5, myBLK);
    }
    else
    {
      if (EEPROM.read(28) == 2)
      {
        if (EEPROM.read(37) == 1)
        {
          EEPROM.write(33, 0);
          EEPROM.write(72, 6), EEPROM.write(73, 1);
          display.drawLine(0, 25, 0, 31, myBLK);
        }
        else
        {
          EEPROM.write(33, 1);
          EEPROM.write(72, 30), EEPROM.write(73, 25);
          display.drawLine(1, 1, 1, 7, myBLK);
        }
      }
      else if (EEPROM.read(28) == 3)
        EEPROM.write(72, 22), EEPROM.write(73, 18);
      EEPROM.write(44, 0);
    }
    gap_sp7 = 0, sp7_Zero();
    xpos = ROWS;
    EEPROM.write(131, 1); // to be used for controlling ucheScrolTEXT
    char ucheScrolTEXT[85] = {0};
    strcpy_P(ucheScrolTEXT, ucheScrolTEXT2);
    EEPROM.put(201, ucheScrolTEXT);
  }

  if (EEPROM.read(21) == 202)
    draw_sensorPres();

  if (EEPROM.read(21) == 202 && xpos <= -137)
  {
    uint16_t cc_wht = display.color565(16, 16, 16), myBLK = display.color565(0, 0, 0);

    EEPROM.write(131, 0);
    EEPROM.write(133, 0);
    EEPROM.write(60, 12);
    EEPROM.write(21, 0);
    xpos = 0;
    EEPROM.write(15, 1);

    if (EEPROM.read(28) == 1)
    {
      EEPROM.write(71, 49);
    }
    else if (EEPROM.read(28) == 2)
    {
      numApplesEaten = 0;
      EEPROM.write(44, 1);
      if (EEPROM.read(28) == 2)
      {
        if (EEPROM.read(37) == 1)
        {
          display.drawLine(1, 1, 1, 7, myBLK);
          display.drawRect(32, 1, 2, 7, cc_wht);
        }
        else
        {
          display.drawLine(0, 25, 0, 31, myBLK);
          display.drawRect(32, 25, 2, 7, cc_wht);
        }
      }
    }
  }
}

void scroll_text()
{
  display.setTextWrap(false);

  unsigned long scroll_past = 0;
  EEPROM.get(372, scroll_past);

  unsigned long scroll_now = millis();
  if ((unsigned long)scroll_now - scroll_past >= gapScroll)
  {
    scroll_past = scroll_now;
    EEPROM.put(372, scroll_past);

    if (EEPROM.read(51) == 2)
    {
      gretScroll_FUM();
      dateScroll_FUM();
      megaScroll_FUM();
    }

    if (EEPROM.read(51) == 3 || EEPROM.read(51) == 2)
      ucheScroll_FUM();

    yield();
  }

  scroll_text_Conditions();
}

void fineDigitsS()
{
  uint16_t cc_plg = display.color565(152, 251, 152), myBLK = display.color565(0, 0, 0);
  if (s0 == 1)
  {
    display.drawPixel(61, 9, cc_plg);
    display.drawPixel(61, 23, cc_plg);

    display.drawPixel(54, 9, myBLK);
    display.drawPixel(54, 16, myBLK);
    display.drawPixel(54, 23, myBLK);
  }
  else if (s0 == 2)
  {
    display.drawPixel(54, 9, cc_plg);
    display.drawPixel(61, 23, cc_plg);

    display.drawPixel(54, 16, myBLK);
    display.drawPixel(54, 23, myBLK);
    display.drawPixel(61, 9, myBLK);
  }
  else if (s0 == 3)
  {
    display.drawPixel(54, 9, cc_plg);
    display.drawPixel(54, 16, cc_plg);
    display.drawPixel(54, 23, cc_plg);

    display.drawPixel(61, 9, myBLK);
    display.drawPixel(61, 23, myBLK);
  }
  else if (s0 == 4)
  {
    display.drawPixel(54, 9, cc_plg);
    display.drawPixel(61, 9, cc_plg);
    display.drawPixel(61, 23, cc_plg);

    display.drawPixel(54, 16, myBLK);
    display.drawPixel(54, 23, myBLK);
  }
  else if (s0 == 5)
  {
    display.drawPixel(54, 23, cc_plg);
    display.drawPixel(61, 9, cc_plg);

    display.drawPixel(54, 9, myBLK);
    display.drawPixel(54, 16, myBLK);
    display.drawPixel(61, 23, myBLK);
  }
  else if (s0 == 6)
  {
    display.drawPixel(61, 9, cc_plg);

    display.drawPixel(54, 9, myBLK);
    display.drawPixel(54, 16, myBLK);
    display.drawPixel(54, 23, myBLK);
    display.drawPixel(61, 23, myBLK);
  }
  else if (s0 == 7)
  {
    display.drawPixel(54, 9, cc_plg);
    display.drawPixel(61, 23, cc_plg);

    display.drawPixel(54, 16, myBLK);
    display.drawPixel(54, 23, myBLK);
    display.drawPixel(61, 9, myBLK);
  }
  else if (s0 == 9)
  {
    display.drawPixel(54, 23, cc_plg);

    display.drawPixel(54, 9, myBLK);
    display.drawPixel(54, 16, myBLK);
    display.drawPixel(61, 9, myBLK);
    display.drawPixel(61, 23, myBLK);
  }
  else
  {
    display.drawPixel(54, 9, myBLK);
    display.drawPixel(54, 16, myBLK);
    display.drawPixel(54, 23, myBLK);
    display.drawPixel(61, 9, myBLK);
    display.drawPixel(61, 23, myBLK);
  }

  if (s1 == 1)
  {
    display.drawPixel(52, 9, cc_plg);
    display.drawPixel(52, 23, cc_plg);

    display.drawPixel(45, 9, myBLK);
    display.drawPixel(45, 16, myBLK);
    display.drawPixel(45, 23, myBLK);
  }
  else if (s1 == 2)
  {
    display.drawPixel(45, 9, cc_plg);
    display.drawPixel(52, 23, cc_plg);

    display.drawPixel(45, 16, myBLK);
    display.drawPixel(45, 23, myBLK);
    display.drawPixel(52, 9, myBLK);
  }
  else if (s1 == 3)
  {
    display.drawPixel(45, 9, cc_plg);
    display.drawPixel(45, 16, cc_plg);
    display.drawPixel(45, 23, cc_plg);

    display.drawPixel(52, 9, myBLK);
    display.drawPixel(52, 23, myBLK);
  }
  else if (s1 == 4)
  {
    display.drawPixel(45, 9, cc_plg);
    display.drawPixel(52, 9, cc_plg);
    display.drawPixel(52, 23, cc_plg);

    display.drawPixel(45, 16, myBLK);
    display.drawPixel(45, 23, myBLK);
  }
  else if (s1 == 5)
  {
    display.drawPixel(45, 23, cc_plg);
    display.drawPixel(52, 9, cc_plg);

    display.drawPixel(45, 9, myBLK);
    display.drawPixel(45, 16, myBLK);
    display.drawPixel(52, 23, myBLK);
  }
  else
  {
    display.drawPixel(45, 9, myBLK);
    display.drawPixel(45, 16, myBLK);
    display.drawPixel(45, 23, myBLK);
    display.drawPixel(52, 9, myBLK);
    display.drawPixel(52, 23, myBLK);
  }
}

void fineDigitsM()
{
  uint16_t cc_org = display.color565(200, 16, 0), myBLK = display.color565(0, 0, 0);
  if (m0 == 1)
  {
    display.drawPixel(40, 9, cc_org);
    display.drawPixel(40, 23, cc_org);

    display.drawPixel(33, 9, myBLK);
    display.drawPixel(33, 16, myBLK);
    display.drawPixel(33, 23, myBLK);
  }
  else if (m0 == 2)
  {
    display.drawPixel(33, 9, cc_org);
    display.drawPixel(40, 23, cc_org);

    display.drawPixel(33, 16, myBLK);
    display.drawPixel(33, 23, myBLK);
    display.drawPixel(40, 9, myBLK);
  }
  else if (m0 == 3)
  {
    display.drawPixel(33, 9, cc_org);
    display.drawPixel(33, 16, cc_org);
    display.drawPixel(33, 23, cc_org);

    display.drawPixel(40, 9, myBLK);
    display.drawPixel(40, 23, myBLK);
  }
  else if (m0 == 4)
  {
    display.drawPixel(33, 9, cc_org);
    display.drawPixel(40, 9, cc_org);
    display.drawPixel(40, 23, cc_org);

    display.drawPixel(33, 16, myBLK);
    display.drawPixel(33, 23, myBLK);
  }
  else if (m0 == 5)
  {
    display.drawPixel(33, 23, cc_org);
    display.drawPixel(40, 9, cc_org);

    display.drawPixel(33, 9, myBLK);
    display.drawPixel(33, 16, myBLK);
    display.drawPixel(40, 23, myBLK);
  }
  else if (m0 == 6)
  {
    display.drawPixel(40, 9, cc_org);

    display.drawPixel(33, 9, myBLK);
    display.drawPixel(33, 16, myBLK);
    display.drawPixel(33, 23, myBLK);
    display.drawPixel(40, 23, myBLK);
  }
  else if (m0 == 7)
  {
    display.drawPixel(33, 9, cc_org);
    display.drawPixel(40, 23, cc_org);

    display.drawPixel(33, 16, myBLK);
    display.drawPixel(33, 23, myBLK);
    display.drawPixel(40, 9, myBLK);
  }
  else if (m0 == 9)
  {
    display.drawPixel(33, 23, cc_org);

    display.drawPixel(33, 9, myBLK);
    display.drawPixel(33, 16, myBLK);
    display.drawPixel(40, 9, myBLK);
    display.drawPixel(40, 23, myBLK);
  }
  else
  {
    display.drawPixel(33, 9, myBLK);
    display.drawPixel(33, 16, myBLK);
    display.drawPixel(33, 23, myBLK);
    display.drawPixel(40, 9, myBLK);
    display.drawPixel(40, 23, myBLK);
  }

  if (m1 == 1)
  {
    display.drawPixel(30, 9, cc_org);
    display.drawPixel(30, 23, cc_org);

    display.drawPixel(23, 9, myBLK);
    display.drawPixel(23, 16, myBLK);
    display.drawPixel(23, 23, myBLK);
  }
  else if (m1 == 2)
  {
    display.drawPixel(23, 9, cc_org);
    display.drawPixel(30, 23, cc_org);

    display.drawPixel(23, 16, myBLK);
    display.drawPixel(23, 23, myBLK);
    display.drawPixel(30, 9, myBLK);
  }
  else if (m1 == 3)
  {
    display.drawPixel(23, 9, cc_org);
    display.drawPixel(23, 16, cc_org);
    display.drawPixel(23, 23, cc_org);

    display.drawPixel(30, 9, myBLK);
    display.drawPixel(30, 23, myBLK);
  }
  else if (m1 == 4)
  {
    display.drawPixel(23, 9, cc_org);
    display.drawPixel(30, 9, cc_org);
    display.drawPixel(30, 23, cc_org);

    display.drawPixel(23, 16, myBLK);
    display.drawPixel(23, 23, myBLK);
  }
  else if (m1 == 5)
  {
    display.drawPixel(23, 23, cc_org);
    display.drawPixel(30, 9, cc_org);

    display.drawPixel(23, 9, myBLK);
    display.drawPixel(23, 16, myBLK);
    display.drawPixel(30, 23, myBLK);
  }
  else
  {
    display.drawPixel(23, 9, myBLK);
    display.drawPixel(23, 16, myBLK);
    display.drawPixel(23, 23, myBLK);
    display.drawPixel(30, 9, myBLK);
    display.drawPixel(30, 23, myBLK);
  }
}

void fineDigitsH()
{
  uint16_t cc_org = display.color565(200, 16, 0), myBLK = display.color565(0, 0, 0);
  if (h0 == 1)
  {
    display.drawPixel(18, 9, cc_org);
    display.drawPixel(18, 23, cc_org);

    display.drawPixel(11, 9, myBLK);
    display.drawPixel(11, 16, myBLK);
    display.drawPixel(11, 23, myBLK);
  }
  else if (h0 == 2)
  {
    display.drawPixel(11, 9, cc_org);
    display.drawPixel(18, 23, cc_org);

    display.drawPixel(11, 16, myBLK);
    display.drawPixel(11, 23, myBLK);
    display.drawPixel(18, 9, myBLK);
  }
  else if (h0 == 3)
  {
    display.drawPixel(11, 9, cc_org);
    display.drawPixel(11, 16, cc_org);
    display.drawPixel(11, 23, cc_org);

    display.drawPixel(18, 9, myBLK);
    display.drawPixel(18, 23, myBLK);
  }
  else if (h0 == 4)
  {
    display.drawPixel(11, 9, cc_org);
    display.drawPixel(18, 9, cc_org);
    display.drawPixel(18, 23, cc_org);

    display.drawPixel(11, 16, myBLK);
    display.drawPixel(11, 23, myBLK);
  }
  else if (h0 == 5)
  {
    display.drawPixel(11, 23, cc_org);
    display.drawPixel(18, 9, cc_org);

    display.drawPixel(11, 9, myBLK);
    display.drawPixel(11, 16, myBLK);
    display.drawPixel(18, 23, myBLK);
  }
  else if (h0 == 6)
  {
    display.drawPixel(18, 9, cc_org);

    display.drawPixel(11, 9, myBLK);
    display.drawPixel(11, 16, myBLK);
    display.drawPixel(11, 23, myBLK);
    display.drawPixel(18, 23, myBLK);
  }
  else if (h0 == 7)
  {
    display.drawPixel(11, 9, cc_org);
    display.drawPixel(18, 23, cc_org);

    display.drawPixel(11, 16, myBLK);
    display.drawPixel(11, 23, myBLK);
    display.drawPixel(18, 9, myBLK);
  }
  else if (h0 == 9)
  {
    display.drawPixel(11, 23, cc_org);

    display.drawPixel(11, 9, myBLK);
    display.drawPixel(11, 16, myBLK);
    display.drawPixel(18, 9, myBLK);
    display.drawPixel(18, 23, myBLK);
  }
  else
  {
    display.drawPixel(11, 9, myBLK);
    display.drawPixel(11, 16, myBLK);
    display.drawPixel(11, 23, myBLK);
    display.drawPixel(18, 9, myBLK);
    display.drawPixel(18, 23, myBLK);
  }

  if (h1 == 1)
  {
    display.drawPixel(9, 9, cc_org);
    display.drawPixel(9, 23, cc_org);

    display.drawPixel(2, 9, myBLK);
  }
  else if (h1 == 2)
  {
    display.drawPixel(2, 9, cc_org);
    display.drawPixel(9, 23, cc_org);

    display.drawPixel(9, 9, myBLK);
  }
  else
  {
    display.drawPixel(2, 9, myBLK);
    display.drawPixel(9, 9, myBLK);
    display.drawPixel(9, 23, myBLK);
  }
}

void _s01()
{
  s0 = seconds % 10;
  s1 = seconds / 10;
}

void _m01()
{
  m0 = minutes % 10;
  m1 = minutes / 10;
}

void _h01()
{
  h0 = hours % 10;
  h1 = hours / 10;
}

void pixMCUClkDispS()
{
  _s01(), _m01(), _h01();

  Digits[DIG_S0]->Draw(s0);
  Digits[DIG_S1]->Draw(s1);

  Digits[DIG_M0]->Draw(m0);
  Digits[DIG_M1]->Draw(m1);

  Digits[DIG_H0]->Draw(h0);
  Digits[DIG_H1]->Draw(h1);
}

void pixMCUClkDisp()
{
  _s01(), _m01(), _h01();

  // Seconds
  if (seconds != _Second)
  {
    Digits[DIG_S0]->SetValue(s0);
    Digits[DIG_S1]->SetValue(s1);
    _Second = seconds;
  }

  // minutes
  if (minutes != _Minute)
  {
    Digits[DIG_M0]->SetValue(m0);
    Digits[DIG_M1]->SetValue(m1);
    _Minute = minutes;
  }

  // hours
  if (hours != _Hour)
  {
    Digits[DIG_H0]->SetValue(h0);
    Digits[DIG_H1]->SetValue(h1);
    _Hour = hours;
  }
}

void timeTrigga()
{
  EEPROM.write(62, seconds);
  EEPROM.write(63, minutes);
  EEPROM.write(64, hours);
}

void updateTimeBuzzr()
{
  if (numApplesEaten == 4)
  {
    EEPROM.write(59, EEPROM.read(59) + 1);

    if (EEPROM.read(59) >= 90)
    {
      uint16_t myBLK = display.color565(0, 0, 0), cc_fgn = display.color565(34, 139, 34);

      if (EEPROM.read(59) == 90)
      {
        char sentTxtON[20] = {0};
        if (EEPROM.read(28) == 1)
          stopClkDispl(), beautCol3();
        display.clearDisplay();
        display.setFont(&Font4x5Fixed);
        display.setTextColor(cc_fgn);
        if (EEPROM.read(28) == 1)
          display.setCursor(2, 14);
        else if (EEPROM.read(28) == 2)
          display.setCursor(4, 15), EEPROM.write(59, 99);
        strcpy_P(sentTxtON, var015);
        display.print(sentTxtON);
        if (EEPROM.read(28) == 1)
          display.setCursor(2, 22);
        else if (EEPROM.read(28) == 2)
          display.setCursor(4, 21);
        strcpy_P(sentTxtON, var016);
        display.print(sentTxtON);
        display.setFont();
        putBack31();
      }
      else if (EEPROM.read(59) >= 92)
      {
        EEPROM.write(29, 3);
        EEPROM.write(60, 12);
        EEPROM.write(59, 0);
        numApplesEaten = 0;
      }
    }
  }
}

void updateTime()
{
  EEPROM.write(394, EEPROM.read(394) + 1);

  if (EEPROM.read(394) >= 60)
  {
    EEPROM.write(394, 0);
    EEPROM.write(396, EEPROM.read(396) + 1);
    minsALL++;
    eepromWriteValues();
    if (EEPROM.read(50) == 2)
      EEPROM.commit();
  }

  if (EEPROM.read(396) >= 60)
  {
    EEPROM.write(396, 0);
    EEPROM.write(395, EEPROM.read(395) + 1);
    EEPROM.commit();
  }

  iseconds++, seconds = iseconds;

  if (seconds > 59)
    iseconds = seconds = 0;
  if (seconds == 0)
  {
    if ((EEPROM.read(51) == 3 || EEPROM.read(51) == 2) && EEPROM.read(29) == 3)
    {
      EEPROM.write(45, 1), play_gap = 70;
      if (EEPROM.read(60) == 0)
        date_Display();
    }
    minutes++;
  }

  if (minutes > 59)
    minutes = 0, hours++;

  if (hours >= 24)
    hours = 0, mdays++, mdate++;
  if (hours == 0 && minutes == 0 && seconds == 0)
  {
    if (mdays > 6)
      mdays = 0;
    hoursWorkOut();
  }
}

void hoursWorkOut()
{
  date_Display0();
  if (mmonth == 1)
  {
    unsigned short myear = 0;
    EEPROM.get2(67, myear);

    if (myear % 4 == 0)
    {
      if (mdate > 29)
        daysWorkOut();
      else
      {
        if (EEPROM.read(29) == 3)
          mdate_29();
      }
    }
    else
    {
      if (mdate > 28)
        daysWorkOut();
      else
      {
        if (EEPROM.read(29) == 3)
          mdate_28();
      }
    }
  }
  else if (mmonth == 3 || mmonth == 5 || mmonth == 8 || mmonth == 10)
    if (mdate > 30)
      daysWorkOut();
    else
    {
      if (EEPROM.read(29) == 3)
        mdate_30();
    }
  else if (mmonth == 0 || mmonth == 2 || mmonth == 4 || mmonth == 6 || mmonth == 7 || mmonth == 9 || mmonth == 11)
    if (mdate > 31)
      daysWorkOut();
    else
    {
      if (EEPROM.read(29) == 3)
        mdate_31();
    }
}

void daysWorkOut()
{
  uint16_t cc_rdm = random(1, 65535);
  mdate = 1, mmonth++;
  daysWorkOutZ();
  display.drawPixel(EEPROM.read(17), EEPROM.read(19), cc_rdm);
  if (mmonth > 11)
  {
    mmonth = 0;
    unsigned short myear = 0;
    myear = EEPROM.get2(67, myear) + 1;
    EEPROM.put2(67, myear);
  }
}

void daysWorkOutZ()
{
  uint16_t myBLK = display.color565(0, 0, 0);
  date_Display0();
  display.drawLine(EEPROM.read(17), EEPROM.read(19), 62, EEPROM.read(19), myBLK);
}

void mdate_27()
{
  uint16_t cc_rdm = random(1, 2000);
  if (mdate >= 1)
    display.drawPixel(EEPROM.read(17) + 0, EEPROM.read(19), cc_rdm);
  cc_rdm = random(2001, 4000);
  if (mdate >= 2)
    display.drawPixel(EEPROM.read(17) + 2, EEPROM.read(19), cc_rdm);
  cc_rdm = random(4001, 6000);
  if (mdate >= 3)
    display.drawPixel(EEPROM.read(17) + 4, EEPROM.read(19), cc_rdm);
  cc_rdm = random(6001, 8000);
  if (mdate >= 4)
    display.drawPixel(EEPROM.read(17) + 6, EEPROM.read(19), cc_rdm);
  cc_rdm = random(8001, 10000);
  if (mdate >= 5)
    display.drawPixel(EEPROM.read(17) + 8, EEPROM.read(19), cc_rdm);
  cc_rdm = random(10001, 12000);
  if (mdate >= 6)
    display.drawPixel(EEPROM.read(17) + 10, EEPROM.read(19), cc_rdm);
  cc_rdm = random(12001, 14000);
  if (mdate >= 7)
    display.drawPixel(EEPROM.read(17) + 12, EEPROM.read(19), cc_rdm);
  cc_rdm = random(14001, 16000);
  if (mdate >= 8)
    display.drawPixel(EEPROM.read(17) + 14, EEPROM.read(19), cc_rdm);
  cc_rdm = random(16001, 18000);
  if (mdate >= 9)
    display.drawPixel(EEPROM.read(17) + 16, EEPROM.read(19), cc_rdm);
  cc_rdm = random(18001, 20000);
  if (mdate >= 10)
    display.drawPixel(EEPROM.read(17) + 18, EEPROM.read(19), cc_rdm);
  cc_rdm = random(20001, 22000);
  if (mdate >= 11)
    display.drawPixel(EEPROM.read(17) + 20, EEPROM.read(19), cc_rdm);
  cc_rdm = random(22001, 24000);
  if (mdate >= 12)
    display.drawPixel(EEPROM.read(17) + 22, EEPROM.read(19), cc_rdm);
  cc_rdm = random(24001, 26000);
  if (mdate >= 13)
    display.drawPixel(EEPROM.read(17) + 24, EEPROM.read(19), cc_rdm);
  cc_rdm = random(26001, 28000);
  if (mdate >= 14)
    display.drawPixel(EEPROM.read(17) + 26, EEPROM.read(19), cc_rdm);
  cc_rdm = random(28001, 30000);
  if (mdate >= 15)
    display.drawPixel(EEPROM.read(17) + 28, EEPROM.read(19), cc_rdm);
  cc_rdm = random(30001, 32000);
  if (mdate >= 16)
    display.drawPixel(EEPROM.read(17) + 30, EEPROM.read(19), cc_rdm);
  cc_rdm = random(32001, 34000);
  if (mdate >= 17)
    display.drawPixel(EEPROM.read(17) + 32, EEPROM.read(19), cc_rdm);
  cc_rdm = random(34001, 36000);
  if (mdate >= 18)
    display.drawPixel(EEPROM.read(17) + 34, EEPROM.read(19), cc_rdm);
  cc_rdm = random(36001, 38000);
  if (mdate >= 19)
    display.drawPixel(EEPROM.read(17) + 36, EEPROM.read(19), cc_rdm);
  cc_rdm = random(38001, 40000);
  if (mdate >= 20)
    display.drawPixel(EEPROM.read(17) + 38, EEPROM.read(19), cc_rdm);
  cc_rdm = random(40001, 42000);
  if (mdate >= 21)
    display.drawPixel(EEPROM.read(17) + 40, EEPROM.read(19), cc_rdm);
  cc_rdm = random(42001, 44000);
  if (mdate >= 22)
    display.drawPixel(EEPROM.read(17) + 42, EEPROM.read(19), cc_rdm);
  cc_rdm = random(44001, 46000);
  if (mdate >= 23)
    display.drawPixel(EEPROM.read(17) + 44, EEPROM.read(19), cc_rdm);
  cc_rdm = random(46001, 48000);
  if (mdate >= 24)
    display.drawPixel(EEPROM.read(17) + 46, EEPROM.read(19), cc_rdm);
  cc_rdm = random(48001, 50000);
  if (mdate >= 25)
    display.drawPixel(EEPROM.read(17) + 48, EEPROM.read(19), cc_rdm);
  cc_rdm = random(50001, 52000);
  if (mdate >= 26)
    display.drawPixel(EEPROM.read(17) + 50, EEPROM.read(19), cc_rdm);
  cc_rdm = random(52001, 54000);
  if (mdate >= 27)
    display.drawPixel(EEPROM.read(17) + 52, EEPROM.read(19), cc_rdm);
}

void mdate_28()
{
  mdate_27();
  uint16_t cc_rdm = random(54001, 56000);
  if (mdate == 28)
    display.drawPixel(EEPROM.read(17) + 54, EEPROM.read(19), cc_rdm);
}

void mdate_29()
{
  mdate_27();
  uint16_t cc_rdm = random(54001, 56000);
  if (mdate >= 28)
    display.drawPixel(EEPROM.read(17) + 52, EEPROM.read(19), cc_rdm);
  cc_rdm = random(56001, 58000);
  if (mdate == 29)
    display.drawPixel(EEPROM.read(17) + 54, EEPROM.read(19), cc_rdm);
}

void mdate_30()
{
  mdate_27();
  uint16_t cc_rdm = random(54001, 56000);
  if (mdate >= 28)
    display.drawPixel(EEPROM.read(17) + 54, EEPROM.read(19), cc_rdm);
  cc_rdm = random(56001, 58000);
  if (mdate >= 29)
    display.drawPixel(EEPROM.read(17) + 56, EEPROM.read(19), cc_rdm);
  cc_rdm = random(58001, 60000);
  if (mdate == 30)
    display.drawPixel(EEPROM.read(17) + 58, EEPROM.read(19), cc_rdm);
}

void mdate_31()
{
  mdate_27();
  uint16_t cc_rdm = random(54001, 56000);
  if (mdate >= 28)
    display.drawPixel(EEPROM.read(17) + 54, EEPROM.read(19), cc_rdm);
  cc_rdm = random(56001, 58000);
  if (mdate >= 29)
    display.drawPixel(EEPROM.read(17) + 56, EEPROM.read(19), cc_rdm);
  cc_rdm = random(58001, 60000);
  if (mdate >= 30)
    display.drawPixel(EEPROM.read(17) + 58, EEPROM.read(19), cc_rdm);
  cc_rdm = random(60001, 62000);
  if (mdate == 31)
    display.drawPixel(EEPROM.read(17) + 60, EEPROM.read(19), cc_rdm);
}

void gameMCUtime()
{
  uint16_t cc_rdm = random(1, 65535), cc_cyn = display.color565(0, 64, 128), cc_red = display.color565(64, 0, 0), cc_wht = display.color565(16, 16, 16), myYLW = display.color565(255, 255, 0), myBLU = display.color565(0, 0, 255), myMAG = display.color565(255, 0, 255), myBLK = display.color565(0, 0, 0);

  if (EEPROM.read(28) == 2)
  {
    if (hours == 0 && minutes == 0 && seconds == 0)
    {
      clear_RectBLK01();
      draw_dateGM();
    }

    if (seconds % 10 == 0)
    {
      draw_dateGM();
      if (EEPROM.read(37) == 1)
        display.drawRect(32, 1, 2, 7, cc_rdm);
      else
        display.drawRect(32, 25, 2, 7, cc_rdm);

      if (EEPROM.read(395) >= 1)
      {
        display.drawPixel(2, 13, cc_rdm);
        if (EEPROM.read(396) >= 50)
          display.drawPixel(2, 16, cc_rdm);
        if (EEPROM.read(396) >= 59)
          display.drawPixel(2, 19, cc_rdm);
      }
    }
  }

  if (EEPROM.read(34) == 0)
    draw_dateG();

  _s01(), _m01(), _h01();

  display.setFont(&Font4x5Fixed);
  if (EEPROM.read(28) == 2)
  {
    if (EEPROM.read(37) == 1)
    {
      display.fillRect(56, 2, 7, 5, myBLK);
      display.fillRect(36, 2, 7, 5, myBLK);
      display.fillRect(46, 2, 7, 5, myBLK);
      display.setCursor(36, 6);

      display.setTextColor(cc_cyn);
      if (h1 == 1)
      {
        display.setCursor(37, 6);
        display.drawPixel(36, 3, cc_cyn);
        display.drawPixel(36, 6, cc_cyn);
        display.drawPixel(38, 6, cc_cyn);
      }
      display.print(h1);
      display.setCursor(40, 6);
      if (h0 == 1)
      {
        display.setCursor(41, 6);
        display.drawPixel(40, 3, cc_cyn);
        display.drawPixel(40, 6, cc_cyn);
        display.drawPixel(42, 6, cc_cyn);
      }
      display.print(h0);
      display.setCursor(46, 6);
      if (m1 == 1)
      {
        display.setCursor(47, 6);
        display.drawPixel(46, 3, cc_cyn);
        display.drawPixel(46, 6, cc_cyn);
        display.drawPixel(48, 6, cc_cyn);
      }
      display.print(m1);
      display.setCursor(50, 6);
      if (m0 == 1)
      {
        display.setCursor(51, 6);
        display.drawPixel(50, 3, cc_cyn);
        display.drawPixel(50, 6, cc_cyn);
        display.drawPixel(52, 6, cc_cyn);
      }
      display.print(m0);
      display.setTextColor(cc_rdm);
      display.setCursor(56, 6);
      if (s1 == 1)
      {
        display.setCursor(57, 6);
        display.drawPixel(56, 3, cc_rdm);
        display.drawPixel(56, 6, cc_rdm);
        display.drawPixel(58, 6, cc_rdm);
      }
      display.print(s1);
      display.setCursor(60, 6);
      if (s0 == 1)
      {
        display.setCursor(61, 6);
        display.drawPixel(60, 3, cc_rdm);
        display.drawPixel(60, 6, cc_rdm);
        display.drawPixel(62, 6, cc_rdm);
      }
      display.print(s0);
    }
    else
    {
      display.fillRect(56, 26, 7, 5, myBLK);
      display.fillRect(36, 26, 7, 5, myBLK);
      display.fillRect(46, 26, 7, 5, myBLK);
      display.setCursor(36, 30);

      display.setTextColor(cc_cyn);
      if (h1 == 1)
      {
        display.setCursor(37, 30);
        display.drawPixel(36, 27, cc_cyn);
        display.drawPixel(36, 30, cc_cyn);
        display.drawPixel(38, 30, cc_cyn);
      }
      display.print(h1);
      display.setCursor(40, 30);
      if (h0 == 1)
      {
        display.setCursor(41, 30);
        display.drawPixel(40, 27, cc_cyn);
        display.drawPixel(40, 30, cc_cyn);
        display.drawPixel(42, 30, cc_cyn);
      }
      display.print(h0);
      display.setCursor(46, 30);
      if (m1 == 1)
      {
        display.setCursor(47, 30);
        display.drawPixel(46, 27, cc_cyn);
        display.drawPixel(46, 30, cc_cyn);
        display.drawPixel(48, 30, cc_cyn);
      }
      display.print(m1);
      display.setCursor(50, 30);
      if (m0 == 1)
      {
        display.setCursor(51, 30);
        display.drawPixel(50, 27, cc_cyn);
        display.drawPixel(50, 30, cc_cyn);
        display.drawPixel(52, 30, cc_cyn);
      }
      display.print(m0);
      display.setTextColor(cc_rdm);
      display.setCursor(56, 30);
      if (s1 == 1)
      {
        display.setCursor(57, 30);
        display.drawPixel(56, 27, cc_rdm);
        display.drawPixel(56, 30, cc_rdm);
        display.drawPixel(58, 30, cc_rdm);
      }
      display.print(s1);
      display.setCursor(60, 30);
      if (s0 == 1)
      {
        display.setCursor(61, 30);
        display.drawPixel(60, 27, cc_rdm);
        display.drawPixel(60, 30, cc_rdm);
        display.drawPixel(62, 30, cc_rdm);
      }
      display.print(s0);
    }
  }
  else if (EEPROM.read(28) == 3)
  {
    display.fillRect(56, 26, 7, 5, myBLK);
    display.fillRect(36, 26, 7, 5, myBLK);
    display.fillRect(46, 26, 7, 5, myBLK);
    display.setCursor(36, 30);
    display.setTextColor(cc_cyn);
    if (h1 == 1)
    {
      display.setCursor(37, 30);
      display.drawPixel(36, 27, cc_cyn);
      display.drawPixel(36, 30, cc_cyn);
      display.drawPixel(38, 30, cc_cyn);
    }
    display.print(h1);
    display.setCursor(40, 30);
    if (h0 == 1)
    {
      display.setCursor(41, 30);
      display.drawPixel(40, 27, cc_cyn);
      display.drawPixel(40, 30, cc_cyn);
      display.drawPixel(42, 30, cc_cyn);
    }
    display.print(h0);

    display.setCursor(46, 30);
    if (m1 == 1)
    {
      display.setCursor(47, 30);
      display.drawPixel(46, 27, cc_cyn);
      display.drawPixel(46, 30, cc_cyn);
      display.drawPixel(48, 30, cc_cyn);
    }
    display.print(m1);
    display.setCursor(50, 30);
    if (m0 == 1)
    {
      display.setCursor(51, 30);
      display.drawPixel(50, 27, cc_cyn);
      display.drawPixel(50, 30, cc_cyn);
      display.drawPixel(52, 30, cc_cyn);
    }
    display.print(m0);
    display.setTextColor(cc_rdm);
    display.setCursor(56, 30);
    if (s1 == 1)
    {
      display.setCursor(57, 30);
      display.drawPixel(56, 27, cc_rdm);
      display.drawPixel(56, 30, cc_rdm);
      display.drawPixel(58, 30, cc_rdm);
    }
    display.print(s1);
    display.setCursor(60, 30);
    if (s0 == 1)
    {
      display.setCursor(61, 30);
      display.drawPixel(60, 27, cc_rdm);
      display.drawPixel(60, 30, cc_rdm);
      display.drawPixel(62, 30, cc_rdm);
    }
    display.print(s0);
  }
  display.setFont();
}

void dimPixel()
{
  if (analogRead(A0) >= 0 && analogRead(A0) <= 10)
    display.setBrightness(70);
  else if (analogRead(A0) > 900)
    display.setBrightness(255);
}

void dimPixel1()
{
  if (analogRead(A0) > 600)
    display.setBrightness(120);
  else
    display.setBrightness(70);
}

void checkCleanClients()
{
  ws.cleanupClients();
  getRoomTH();
}

void eventConnected()
{
  char sentTxtON[20] = {0}, sentTxtOFF[20] = {0};
  uint16_t cc_aqm = display.color565(127, 255, 212);
  display.drawPixel(63, 31, cc_aqm);

  if (EEPROM.read(29) < 3)
    strcpy_P(sentTxtOFF, varDR11), ws.textAll(sentTxtOFF);
  if (EEPROM.read(60) == 13) // For browser time Auto
  {
    bwCnt_gap = 0;
    EEPROM.write(30, 0);
    EEPROM.write(70, 0);
    EEPROM.write(60, 14);
    strcpy_P(sentTxtOFF, varOFFB), ws.textAll(sentTxtOFF);
  }
  strcpy_P(sentTxtON, varONC), ws.textAll(sentTxtON);
}

void eventDisconnected()
{
  ESP.getFreeHeap();
  char sentTxtOFF[20] = {0};
  uint16_t myBLK = display.color565(0, 0, 0);
  display.drawPixel(63, 31, myBLK);
  strcpy_P(sentTxtOFF, varOFFC), ws.textAll(sentTxtOFF);
}

void checkWifiStatus()
{
  char sentTxtON[20] = {0};
  uint16_t cc_dgr = display.color565(30, 30, 30);
  char inputS2[10] = {0};

  if (EEPROM.read(28) == 1)
    beautCol3();
  clear_RectBLK01();

  if (WiFi.gatewayIP().toString() == "10.0.0.1" || WiFi.gatewayIP().toString() == "192.168.0.1")
  {
    display.setFont(&Font4x5Fixed);
    display.setTextColor(cc_dgr);
    if (EEPROM.read(28) == 1)
      display.setCursor(2, 14);
    else if (EEPROM.read(28) == 2)
      display.setCursor(4, 15), EEPROM.write(59, 99);
    strcpy_P(sentTxtON, var017);
    display.print(sentTxtON);
    if (EEPROM.read(28) == 1)
      display.setCursor(2, 22);
    else if (EEPROM.read(28) == 2)
      display.setCursor(4, 21);
    strcpy_P(sentTxtON, var018);
    display.print(sentTxtON);
    display.setFont();

    if (WiFi.gatewayIP().toString() == "10.0.0.1")
      strcpy(inputS2, "CONNECTME"), EEPROM.put(183, inputS2);
    else
      strcpy(inputS2, "VMxxxxxxxx"), EEPROM.put(183, inputS2);

    EEPROM.write(39, 3);
  }
  else
  {
    clear_RectBLK01();
    display.setFont(&Font4x5Fixed);
    display.setTextColor(cc_dgr);
    if (EEPROM.read(28) == 1)
      display.setCursor(2, 14);
    else if (EEPROM.read(28) == 2)
      display.setCursor(4, 15), EEPROM.write(59, 99);
    strcpy_P(sentTxtON, var019);
    display.print(sentTxtON);
    if (EEPROM.read(28) == 1)
      display.setCursor(2, 22);
    else if (EEPROM.read(28) == 2)
      display.setCursor(4, 21);
    strcpy_P(sentTxtON, var020);
    display.print(sentTxtON);
    display.setFont();

    EEPROM.write(39, 1), playerLength = 0;
  }

  daysWorkOutZ();

  EEPROM.write(59, 1);
  EEPROM.write(60, 0);
  EEPROM.write(61, 0);

  if (EEPROM.read(31) == 1)
  {
    unsigned short setaYY = 0;
    EEPROM.put2(65, setaYY);
  }
}

void stopClkDispl()
{
  EEPROM.write(26, 0);
}

void syncWeatherTime()
{
  if (EEPROM.read(24) == 0 && EEPROM.read(39) == 0 && EEPROM.read(60) == 0)
  {
    // get online temperature
    if ((EEPROM.read(63) == 27 || EEPROM.read(63) == 57) && (EEPROM.read(62) == 7))
    {
      EEPROM.write(46, 1), play_gap = 130;
      EEPROM.write(60, 128);
      EEPROM.write(62, 0);
    }

    // display scrol text
    if ((EEPROM.read(63) == 30) && (EEPROM.read(62) == 30))
    {
      if (EEPROM.read(28) == 1)
        EEPROM.write(71, 52), bwCnt_gap = 0;
      doFlashScrol();
      EEPROM.write(62, 0);
    }
  }
}

void trueWifi1ABC()
{
  if (EEPROM.read(26) == 1)
  {
    fineDigitsS(), fineDigitsM(), fineDigitsH();
    for (int im = 0; im < NUM_DIGITS; im++)
      Digits[im]->Morph();
    uint16_t cc_fgn = display.color565(34, 139, 34), cc_pre = display.color565(64, 0, 32), cc_orr = display.color565(255, 69, 0), cc_cho = display.color565(210, 105, 30), cc_plg = display.color565(152, 251, 152);

    if (EEPROM.read(395) >= 1)
      display.drawPixel(45, 7, myGRN);
    if (EEPROM.read(395) >= 2)
      display.drawPixel(47, 7, cc_fgn);
    if (EEPROM.read(395) >= 3)
      display.drawPixel(49, 7, cc_orr);
    if (EEPROM.read(395) >= 4)
      display.drawPixel(51, 7, cc_plg);
    if (EEPROM.read(395) >= 5)
    {
      display.drawPixel(53, 7, cc_cho);
      if (EEPROM.read(396) >= 50)
        display.drawPixel(57, 7, cc_pre);
    }
  }

  if (EEPROM.read(60) == 6)
    caseB_006();

  if (EEPROM.read(60) == 79)
    caseB_079();

  if (EEPROM.read(60) == 104)
    mcuPushToGame();

  if (EEPROM.read(60) == 17)
    changePlayerColor();
}

void trueWifi2ABC()
{
  if (minutes != 0)
    doMinNotZero();
}

void doMinNotZero()
{
  if (EEPROM.read(29) == 3)
  {
    if (EEPROM.read(57) == 0)
      if (minutes == 59 && seconds == 59)
        EEPROM.write(60, 10);

    if ((EEPROM.read(15) == 1 || EEPROM.read(15) == 2) && (EEPROM.read(71) != 204))
    {
      draw_sensorPres();
    }
    else if (minutes == 1 && seconds == 0)
    {
      if (EEPROM.read(57) == 0)
      {
        putBack31();
        EEPROM.write(60, 12);
      }
    }
  }
}

void putBack31()
{
  uint16_t cc_blu = display.color565(0, 0, 128), cc_wht = display.color565(16, 16, 16), myBLK = display.color565(0, 0, 0);

  analogWrite(buzzPin, 0);
  draw_love1BLK();
  sp7_Zero1();

  if (EEPROM.read(28) == 2 || EEPROM.read(28) == 3)
  {
    buzzrBLK2();
    EEPROM.write(51, 3);
  }
  else if (EEPROM.read(28) == 1)
  {
    buzzrBLK1();
    bwCnt_gap = 0;
    EEPROM.write(71, 49);
    EEPROM.write(51, 2);
  }
}

void doFlashScrol()
{
  uint16_t myBLK = display.color565(0, 0, 0);

  EEPROM.write(15, 0);
  dimPixel1();
  EEPROM.write(21, 201);

  if (EEPROM.read(28) == 1)
  {
    display.drawLine(22, 0, 41, 0, myBLK);
    display.drawLine(22, 1, 22, 5, myBLK);
    display.drawLine(41, 1, 41, 5, myBLK);
    EEPROM.write(72, 5);
    EEPROM.write(73, 1);
    EEPROM.write(33, 1);
  }
  else if (EEPROM.read(28) == 2)
    if (EEPROM.read(37) == 1)
    {
      EEPROM.write(72, 30);
      EEPROM.write(73, 25);
      EEPROM.write(33, 1);
    }
    else
    {
      EEPROM.write(72, 6);
      EEPROM.write(73, 1);
      EEPROM.write(33, 0);
    }
  else if (EEPROM.read(28) == 3)
  {
    EEPROM.write(72, 22);
    EEPROM.write(73, 18);
  }
  xpos = ROWS, gapScroll = 200;
  EEPROM.write(131, 1); // to be used for controlling ucheScrolTEXT
  char ucheScrolTEXT[85] = {0};
  strcpy_P(ucheScrolTEXT, ucheScrolTEXT1);
  EEPROM.put(201, ucheScrolTEXT);
}

void dispPLAY()
{
  uint16_t myBLK = display.color565(0, 0, 0), cc_yld = display.color565(64, 64, 8);

  display.fillRect(1, 25, 30, 7, myBLK);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(cc_yld);
  display.setCursor(1, 30);
  char actPLAY[10] = {0};
  EEPROM.get(362, actPLAY);
  display.print(actPLAY);
  display.setFont();
}

void trueWifi3ABC()
{
  if ((EEPROM.read(28) == 2 || EEPROM.read(28) == 3) && EEPROM.read(44) == 1)
  {
    if (EEPROM.read(28) == 2)
    {
      uint16_t myBLK = display.color565(0, 0, 0), cc_blu = display.color565(0, 0, 128), cc_rdm, cc_wht = display.color565(16, 16, 16);

      if (EEPROM.read(51) == 3 && EEPROM.read(63) != 30 && EEPROM.read(63) != 31 && EEPROM.read(63) != 32 && EEPROM.read(63) != 0 && EEPROM.read(63) != 1 && numApplesEaten != 10)
      {
        if (EEPROM.read(395) == 0)
        {
          if (EEPROM.read(37) == 0 && ((EEPROM.read(396) >= 12 && EEPROM.read(396) < 24) || (EEPROM.read(396) >= 36 && EEPROM.read(396) < 48)))
          {
            EEPROM.write(37, 1);
            display.fillRect(1, 1, 62, 7, myBLK);
            display.fillRect(0, 25, 64, 7, myBLK);
            display.drawRect(32, 1, 2, 7, cc_wht);
            gap_sp7 = 0, sp7_Zero();
          }

          if (EEPROM.read(37) == 1 && ((EEPROM.read(396) >= 24 && EEPROM.read(396) < 36) || (EEPROM.read(396) >= 48 && EEPROM.read(396) < 59)))
          {
            EEPROM.write(37, 0);
            display.fillRect(1, 1, 62, 7, myBLK);
            display.fillRect(0, 25, 64, 7, myBLK);
            display.drawRect(32, 25, 2, 7, cc_wht);
            gap_sp7 = 0, sp7_Zero();
          }
        }

        if (EEPROM.read(395) >= 1)
        {
          if (EEPROM.read(37) == 0 && ((EEPROM.read(396) >= 0 && EEPROM.read(396) < 12) || (EEPROM.read(396) >= 24 && EEPROM.read(396) < 36) || (EEPROM.read(396) >= 48 && EEPROM.read(396) < 59)))
          {
            EEPROM.write(37, 1);
            display.fillRect(1, 1, 62, 7, myBLK);
            display.fillRect(0, 25, 64, 7, myBLK);
            display.drawRect(32, 1, 2, 7, cc_wht);
            gap_sp7 = 0, sp7_Zero();
          }

          if (EEPROM.read(37) == 1 && ((EEPROM.read(396) >= 12 && EEPROM.read(396) < 24) || (EEPROM.read(396) >= 36 && EEPROM.read(396) < 48)))
          {
            EEPROM.write(37, 0);
            display.fillRect(1, 1, 62, 7, myBLK);
            display.fillRect(0, 25, 64, 7, myBLK);
            display.drawRect(32, 25, 2, 7, cc_wht);
            gap_sp7 = 0, sp7_Zero();
          }
        }
      }

      if (seconds % 30 == 0)
      {
        if (EEPROM.read(395) == 0)
        {
          cc_rdm = random(2001, 4000);
          if (EEPROM.read(396) >= 12)
            display.drawPixel(10, 22, cc_rdm);
          if (EEPROM.read(396) >= 36)
            display.drawPixel(22, 22, cc_rdm);

          cc_rdm = random(8001, 10000);
          if (EEPROM.read(396) >= 24)
            display.drawPixel(16, 22, cc_rdm);
          if (EEPROM.read(396) >= 48)
            display.drawPixel(28, 22, cc_rdm);
        }

        if (EEPROM.read(395) >= 1)
        {
          cc_rdm = random(2001, 4000);
          display.drawPixel(10, 22, cc_rdm);
          display.drawPixel(22, 22, cc_rdm);

          cc_rdm = random(8001, 10000);
          display.drawPixel(16, 22, cc_rdm);
          display.drawPixel(28, 22, cc_rdm);

          cc_rdm = random(14001, 16000);
          if (EEPROM.read(396) >= 0)
            display.drawPixel(34, 22, cc_rdm);
          if (EEPROM.read(396) >= 24)
            display.drawPixel(46, 22, cc_rdm);
          if (EEPROM.read(396) >= 48)
            display.drawPixel(59, 22, cc_rdm);

          cc_rdm = random(20001, 22000);
          if (EEPROM.read(396) >= 12)
            display.drawPixel(40, 22, cc_rdm);
          if (EEPROM.read(396) >= 36)
            display.drawPixel(52, 22, cc_rdm);
        }
      }
    }

    doMinNotZero();
  }
}

void buzzrBLK1()
{
  uint16_t myBLK = display.color565(0, 0, 0);
  display.drawRect(0, 0, 64, 32, myBLK);
  display.drawRect(1, 8, 62, 17, myBLK);
}

void buzzrBLK2()
{
  char actPLAYD[10] = {0};
  uint16_t cc_blu = display.color565(0, 0, 128), cc_wht = display.color565(16, 16, 16), myBLK = display.color565(0, 0, 0);

  if (EEPROM.read(28) == 2)
  {
    if (EEPROM.read(37) == 1)
    {
      display.drawRect(35, 1, 29, 7, myBLK);
      display.drawRect(35, 1, 9, 7, myBLK);
      display.drawRect(45, 1, 9, 7, myBLK);
      display.drawRect(55, 1, 9, 7, myBLK);

      display.drawRect(0, 1, 31, 7, myBLK);
      display.drawRect(22, 1, 9, 7, myBLK);
      if (mmonth == 2 || mmonth == 4 || mmonth == 7)
        display.drawRect(9, 1, 14, 7, myBLK);
      else
        display.drawRect(9, 1, 13, 7, myBLK);
      display.drawRect(0, 1, 9, 7, myBLK);
      display.drawRect(0, 9, 64, 23, myBLK);
      display.drawRect(0, 25, 64, 7, myBLK);
    }
    else
    {
      display.drawRect(35, 25, 29, 7, myBLK);
      display.drawRect(35, 25, 9, 7, myBLK);
      display.drawRect(45, 25, 9, 7, myBLK);
      display.drawRect(55, 25, 9, 7, myBLK);

      display.drawRect(0, 25, 31, 7, myBLK);
      display.drawRect(22, 25, 9, 7, myBLK);
      if (mmonth == 2 || mmonth == 4 || mmonth == 7)
        display.drawRect(9, 25, 14, 7, myBLK);
      else
        display.drawRect(9, 25, 13, 7, myBLK);
      display.drawRect(0, 25, 9, 7, myBLK);
      display.drawRect(0, 0, 64, 25, myBLK);
      display.drawRect(0, 0, 64, 9, myBLK);
    }

    EEPROM.write(57, 0);
    display.drawRect(0, 9, 64, 16, myBLK);
    display.drawRect(0, 0, 64, 9, cc_wht);
    display.drawRect(0, 9, 64, 16, cc_blu);
  }
  else if (EEPROM.read(28) == 3)
  {
    display.drawRect(35, 25, 29, 7, myBLK);
    display.drawRect(35, 25, 9, 7, myBLK);
    display.drawRect(45, 25, 9, 7, myBLK);
    display.drawRect(55, 25, 9, 7, myBLK);

    display.drawRect(0, 25, 31, 7, myBLK);
    display.drawRect(22, 25, 9, 7, myBLK);
    if (mmonth == 2 || mmonth == 4 || mmonth == 7)
      display.drawRect(9, 25, 14, 7, myBLK);
    else
      display.drawRect(9, 25, 13, 7, myBLK);
    display.drawRect(0, 25, 9, 7, myBLK);
  }

  strcpy_P(actPLAYD, (char *)pgm_read_dword(&(DOW[mdays])));
  if (strlen(actPLAYD) == 6)
    display.drawRect(12, 11, 39, 11, myBLK);
  else if (strlen(actPLAYD) == 7)
    display.drawRect(10, 11, 45, 11, myBLK);
  else if (strlen(actPLAYD) == 8)
    display.drawRect(6, 11, 52, 11, myBLK);
  else if (strlen(actPLAYD) == 9)
    display.drawRect(3, 11, 57, 11, myBLK);
}

void mcuPushToGame()
{
  uint16_t cc_blu = display.color565(0, 0, 128), cc_rdm = random(100, 2000), cc_wht = display.color565(16, 16, 16);

  if (EEPROM.read(28) == 2)
  {
    display.drawRect(0, 0, 64, 9, cc_wht);
    display.drawRect(0, 9, 64, 16, cc_blu);
    if (EEPROM.read(37) == 1)
      display.drawRect(32, 1, 2, 7, cc_wht);
    else
      display.drawRect(32, 25, 2, 7, cc_wht);
    display.drawPixel(4, 22, cc_rdm);
    draw_dateGM();
    EEPROM.write(60, 0);
  }
  else if (EEPROM.read(28) == 3)
  {
    display.drawRect(0, 16, 64, 9, cc_wht);
    display.drawRect(31, 25, 2, 7, cc_wht);

    randomSeed(analogRead(0));
    defineBoard();
    startGame();
  }

  EEPROM.write(29, 3);
  EEPROM.write(44, 1);
  gap_sp7 = 0, sp7_Zero();
  date_Display();
}

void trueWifi4ABC()
{
  if (EEPROM.read(29) == 3)
  {
    trueButtons();
    wifiStatus();
    syncWeatherTime();
  }

  if (EEPROM.read(60) == 11)
  {
    uint16_t myBLK = display.color565(0, 0, 0);
    char yo1, yo2;

    EEPROM.write(15, 0);
    dimPixel1();
    EEPROM.write(51, 1);
    daysWorkOutZ();
    bwCnt_gap = 0;
    EEPROM.write(33, 0);

    if (EEPROM.read(28) == 2)
      if (EEPROM.read(37) == 1)
        yo1 = 26, yo2 = 5;
      else
        yo1 = 2, yo2 = 5;
    else if (EEPROM.read(28) == 3)
      yo1 = 18, yo2 = 22;
    else if (EEPROM.read(28) == 1)
      yo1 = 1, yo2 = 5;

    display.fillRect(1, yo1, 17, yo2, myBLK);
    display.fillRect(30, yo1, 33, yo2, myBLK);
    if (EEPROM.read(28) == 2)
    {
      if (EEPROM.read(37) == 1)
      {
        display.drawLine(22, 25, 41, 25, myBLK);
        display.drawLine(22, 31, 41, 31, myBLK);
        display.drawLine(22, 26, 22, 30, myBLK);
        display.drawLine(41, 26, 41, 30, myBLK);
      }
      else
      {
        display.drawLine(22, 1, 41, 1, myBLK);
        display.drawLine(22, 7, 41, 7, myBLK);
        display.drawLine(22, 2, 22, 6, myBLK);
        display.drawLine(41, 2, 41, 6, myBLK);
      }
    }
    else if (EEPROM.read(28) == 3)
    {
      display.drawLine(0, 26, 0, 30, myBLK);
      display.drawLine(1, 26, 1, 30, myBLK);
    }
    else if (EEPROM.read(28) == 1)
    {
      display.drawLine(22, 0, 41, 0, myBLK);
      display.drawLine(22, 1, 22, 5, myBLK);
      display.drawLine(41, 1, 41, 5, myBLK);
    }
    draw_love2();
    if (EEPROM.read(28) == 2)
      display.drawRect(0, 0, 64, 9, myBLK);
    EEPROM.write(60, 0);
  }

  if (EEPROM.read(51) == 1)
    draw_love();
}

void sleepButton()
{
  // RESTART SYSTEM
  if (EEPROM.read(60) == 51)
  {
    stopClkDispl();
    EEPROM.write(44, 0);
    EEPROM.write(30, 0);
    EEPROM.write(51, 50);
    numApplesEaten = 0;
    pixStart3();
    EEPROM.write(60, 52);
    EEPROM.commit();
  }

  if (EEPROM.read(60) == 132)
  {
    char sentTxtON[20] = {0};
    display.clearDisplay();
    beautCol1();
    display.setTextColor(myCYN);
    display.setCursor(2, 6);
    strcpy_P(sentTxtON, var030);
    display.print(sentTxtON);
    display.setCursor(2, 13);
    strcpy_P(sentTxtON, var031);
    display.print(sentTxtON);
    EEPROM.write(60, 93);
  }

  if (EEPROM.read(64) == 8 && EEPROM.read(63) == 0 && EEPROM.read(62) == 30)
    if (EEPROM.read(71) == 203)
      EEPROM.write(60, 125), EEPROM.write(62, 0);

  if (EEPROM.read(60) == 125)
  {
    stopClkDispl();

    if (EEPROM.read(50) == 6)
    {
      EEPROM.write(9, EEPROM.read(9) + 1);
      pixStart6();
      EEPROM.write(60, 57);
      EEPROM.write(44, 0);
      EEPROM.write(51, 50);
      EEPROM.write(29, 4);
      EEPROM.write(71, 203);
      EEPROM.write(50, 2);
    }
    else if (EEPROM.read(50) == 2)
    {
      uint16_t myBLK = display.color565(0, 0, 0);

      EEPROM.write(50, 1);

      if (EEPROM.read(71) == 203)
      {
        pixStart8();
        EEPROM.write(71, 0);
        EEPROM.write(10, EEPROM.read(10) + 1);

        if (EEPROM.read(28) == 1)
        {
          if (EEPROM.read(395) >= 6)
          {
            EEPROM.write(60, 153);
          }
          else
          {
            if (EEPROM.read(134) == 1)
              EEPROM.write(134, 0);
            EEPROM.write(60, 151);
          }
        }
        else if (EEPROM.read(28) == 2)
        {
          if (EEPROM.read(395) >= 2)
          {
            EEPROM.write(394, 0);
            EEPROM.write(395, 0);
            EEPROM.write(396, 0);
            EEPROM.write(31, 1);
            if (EEPROM.read(134) == 1)
              EEPROM.write(134, 0);
            EEPROM.write(60, 151);
          }
          else
          {
            EEPROM.write(60, 153);
          }
        }
        else if (EEPROM.read(28) == 3)
        {
          if (EEPROM.read(395) < 2)
          {
            EEPROM.write(60, 155);
          }
        }
      }
      else
      {
        EEPROM.write(28, 1);
        EEPROM.write(71, 204);
        EEPROM.write(394, 0);
        EEPROM.write(395, 0);
        EEPROM.write(396, 0);

        if (EEPROM.read(134) == 1)
          EEPROM.write(134, 0);
        EEPROM.write(31, 1);
        EEPROM.write(60, 151);
      }
    }
  }

  if (EEPROM.read(60) == 123)
  {
    stopClkDispl();
    EEPROM.write(51, 3);
    EEPROM.write(71, 204);
    pixStart7();
    EEPROM.write(60, 101);
  }

  if (EEPROM.read(60) == 124)
  {
    stopClkDispl();
    EEPROM.write(51, 3);
    EEPROM.write(71, 204);
    pixStart4();
    EEPROM.write(60, 105);
  }

  if (EEPROM.read(50) != 2)
    dotColon();
}

void mainFunction1()
{
  bwCnt_gap = 0;
  EEPROM.write(71, 49);
}

void mainFunction2()
{
  EEPROM.write(59, 100);
  uint16_t cc_blu = display.color565(0, 0, 128), cc_rdm = random(100, 2000), cc_wht = display.color565(16, 16, 16);
  display.drawRect(0, 0, 64, 9, cc_wht);
  display.drawRect(0, 9, 64, 16, cc_blu);
  if (EEPROM.read(37) == 1)
    display.drawRect(32, 1, 2, 7, cc_wht);
  else
    display.drawRect(32, 25, 2, 7, cc_wht);
  display.drawPixel(4, 22, cc_rdm);
}

void mainFunction3()
{
  EEPROM.write(59, 100);
  uint16_t cc_blu = display.color565(0, 0, 128), cc_rdm = random(100, 2000), cc_wht = display.color565(16, 16, 16);
  display.drawRect(0, 16, 64, 9, cc_wht);
  display.drawRect(31, 25, 2, 7, cc_wht);
  randomSeed(analogRead(0));
  defineBoard();
  startGame();
}

void trueButtons()
{
  preparingData3();
  char sentTxtON[20] = {0};
  if (EEPROM.read(22) == 0 && EEPROM.read(24) == 0 && EEPROM.read(39) == 0 && EEPROM.read(63) != 30 && EEPROM.read(63) != 31 && EEPROM.read(63) != 32 && EEPROM.read(63) != 57 && EEPROM.read(63) != 27 && EEPROM.read(63) != 0 && EEPROM.read(63) != 1)
  {
    if (EEPROM.read(60) == 0)
    {
      if (EEPROM.read(28) == 1)
        if (EEPROM.read(395) >= 6 && EEPROM.read(62) == 30)
          EEPROM.write(60, 123), EEPROM.write(62, 0);

      if (EEPROM.read(28) == 2)
        if (EEPROM.read(395) >= 2 && EEPROM.read(62) == 30)
          EEPROM.write(60, 125), EEPROM.write(50, 2), EEPROM.write(62, 0);

      if (EEPROM.read(43) == 1 && WiFi.status() != WL_CONNECTED)
      {
        if (EEPROM.read(28) == 1)
          stopClkDispl();
        EEPROM.write(60, 66);
        EEPROM.write(43, 0);
      }
    }

    if (EEPROM.read(20) == 3)
      EEPROM.write(60, 12), EEPROM.write(20, 4);
  }
  else if (EEPROM.read(20) == 3)
    EEPROM.write(20, 0);

  if (EEPROM.read(60) == 117)
  {
    uint16_t cc_yld = display.color565(64, 64, 8);

    if (EEPROM.read(28) == 1)
      stopClkDispl(), beautCol3();
    clear_RectBLK01();
    display.setFont(&Font4x5Fixed);
    display.setTextColor(cc_yld);
    if (EEPROM.read(28) == 1)
      display.setCursor(2, 14);
    else if (EEPROM.read(28) == 2)
      display.setCursor(4, 15), EEPROM.write(59, 99);
    strcpy_P(sentTxtON, var021);
    display.print(sentTxtON);
    if (EEPROM.read(28) == 1)
      display.setCursor(2, 22);
    else if (EEPROM.read(28) == 2)
      display.setCursor(4, 21);
    strcpy_P(sentTxtON, var022);
    display.print(sentTxtON);
    display.setFont();

    if (WiFi.gatewayIP().toString() == "10.0.0.1" || WiFi.gatewayIP().toString() == "192.168.0.1")
    {
      // connect to wifi only for AP OTA
      EEPROM.write(60, 61);
    }
    else if (WiFi.softAPIP().toString() == "10.0.39.1")
    {
      // connect to wifi only for STA OTA
      EEPROM.write(60, 64);
    }
  }

  if (EEPROM.read(60) == 85)
  {
    display.clearDisplay();
    beautCol1();
    display.setTextColor(myCYN);
    display.setCursor(2, 1);
    strcpy_P(sentTxtON, var026);
    display.print(sentTxtON);
    display.setCursor(2, 11);
    strcpy_P(sentTxtON, var027);
    display.print(sentTxtON);
    display.setCursor(2, 21);
    strcpy_P(sentTxtON, var028);
    display.print(sentTxtON);
    EEPROM.write(60, 86);
  }

  if (EEPROM.read(60) == 89)
  {
    display.clearDisplay();
    beautCol1();
    display.setTextColor(myCYN);
    display.setCursor(2, 1);
    strcpy_P(sentTxtON, var026);
    display.print(sentTxtON);
    display.setCursor(2, 11);
    strcpy_P(sentTxtON, var027);
    display.print(sentTxtON);
    display.setCursor(2, 21);
    strcpy_P(sentTxtON, var029);
    display.print(sentTxtON);
    EEPROM.write(60, 90);
  }

  if (EEPROM.read(60) == 127)
  {
    EEPROM.write(31, 1);

    uint16_t cc_yld = display.color565(64, 64, 8);

    if (EEPROM.read(28) == 1)
      stopClkDispl(), beautCol3();
    clear_RectBLK01();
    display.setFont(&Font4x5Fixed);
    display.setTextColor(cc_yld);
    if (EEPROM.read(28) == 1)
      display.setCursor(2, 14);
    else if (EEPROM.read(28) == 2)
      display.setCursor(4, 15), EEPROM.write(59, 99);
    strcpy_P(sentTxtON, var034);
    display.print(sentTxtON);
    if (EEPROM.read(28) == 1)
      display.setCursor(2, 22);
    else if (EEPROM.read(28) == 2)
      display.setCursor(4, 21);
    strcpy_P(sentTxtON, var032);
    display.print(sentTxtON);
    display.setFont();
    EEPROM.write(60, 66);
  }

  if (EEPROM.read(131) == 0)
    if (EEPROM.read(60) == 128)
    {
      uint16_t cc_grn = display.color565(0, 16, 0);

      if (EEPROM.read(28) == 1)
        stopClkDispl(), beautCol3();
      clear_RectBLK01();
      display.setFont(&Font4x5Fixed);
      display.setTextColor(cc_grn);
      if (EEPROM.read(28) == 1)
        display.setCursor(2, 14);
      else if (EEPROM.read(28) == 2)
        display.setCursor(4, 15), EEPROM.write(59, 99);
      strcpy_P(sentTxtON, var034);
      display.print(sentTxtON);
      if (EEPROM.read(28) == 1)
        display.setCursor(2, 22);
      else if (EEPROM.read(28) == 2)
        display.setCursor(4, 21);
      strcpy_P(sentTxtON, var035);
      display.print(sentTxtON);
      display.setFont();
      EEPROM.write(60, 76);
    }

  if (EEPROM.read(60) == 131)
  {
    stopClkDispl();
    EEPROM.write(25, 0);
    EEPROM.write(18, 1);

    bwCnt_gap = 0;
    EEPROM.write(51, 50);
    hours = minutes = seconds = 0;
    mdays = mdate = mmonth = 0;
    _Second = _Minute = _Hour = 0;

    unsigned short myear = 0, setaYY = 0;
    EEPROM.put2(67, myear);
    EEPROM.put2(65, setaYY);

    display.clearDisplay();
    beautCol1();
    display.setTextColor(myCYN);
    display.setCursor(2, 1);
    strcpy_P(sentTxtON, var039);
    display.print(sentTxtON);
    display.setCursor(2, 11);
    strcpy_P(sentTxtON, var027);
    display.print(sentTxtON);
    EEPROM.write(60, 82);
  }

  if (EEPROM.read(60) == 1)
  {
    uint16_t cc_yld = display.color565(64, 64, 8);

    if (EEPROM.read(28) == 1)
      stopClkDispl(), beautCol3();
    clear_RectBLK01();
    display.setFont(&Font4x5Fixed);
    display.setTextColor(cc_yld);
    if (EEPROM.read(28) == 1)
      display.setCursor(2, 14);
    else if (EEPROM.read(28) == 2)
      display.setCursor(4, 15), EEPROM.write(59, 99);
    strcpy_P(sentTxtON, var040);
    display.print(sentTxtON);
    if (EEPROM.read(28) == 1)
      display.setCursor(2, 22);
    else if (EEPROM.read(28) == 2)
      display.setCursor(4, 21);
    if (numApplesEaten == 2)
      strcpy_P(sentTxtON, var042);
    else if (numApplesEaten == 3)
      strcpy_P(sentTxtON, var043);
    else if (numApplesEaten == 10)
      strcpy_P(sentTxtON, var156);
    else
      strcpy_P(sentTxtON, var041);
    display.print(sentTxtON);
    display.setFont();
    EEPROM.write(60, 2);
  }

  if (EEPROM.read(60) == 4)
  {
    clear_RectBLK01();
    if (EEPROM.read(28) == 1)
    {
      beautColBLK2();
      pixMCUClkDispS();
      EEPROM.write(26, 1);
      if (EEPROM.read(134) == 1)
        EEPROM.write(134, 0);
    }
    else if (EEPROM.read(28) == 2)
    {
      EEPROM.write(59, 0);
      draw_dateGM();
      uint16_t cc_blu = display.color565(0, 0, 128);
      display.drawRect(0, 9, 64, 16, cc_blu);
    }

    if (numApplesEaten == 2)
    {
      if (EEPROM.read(71) != 16)
        spG_07();
      numApplesEaten = 11;
    }
    else if (numApplesEaten == 3)
    {
      if (EEPROM.read(71) != 28)
        spG_11();
      numApplesEaten = 11;
    }
    else if (numApplesEaten == 10)
    {
      doFlashScrol();
      char sentTxtOFF[20] = {0};
      strcpy_P(sentTxtOFF, varOFFP), ws.textAll(sentTxtOFF);
    }
    else
    {
      if (EEPROM.read(71) != 7)
        spG_03();
      numApplesEaten = 11;
    }
    EEPROM.write(60, 0);
  }

  if (EEPROM.read(60) == 7)
  {
    uint16_t cc_yld = display.color565(64, 64, 8);

    if (EEPROM.read(28) == 1)
    {
      stopClkDispl();
      beautCol3();
      EEPROM.write(29, 4);
    }

    clear_RectBLK01();
    display.setFont(&Font4x5Fixed);
    display.setTextColor(cc_yld);
    if (EEPROM.read(28) == 1)
      display.setCursor(2, 14);
    else if (EEPROM.read(28) == 2)
      display.setCursor(4, 15), EEPROM.write(59, 99);
    strcpy_P(sentTxtON, var040);
    display.print(sentTxtON);
    if (EEPROM.read(28) == 1)
      display.setCursor(2, 22);
    else if (EEPROM.read(28) == 2)
      display.setCursor(4, 21);
    strcpy_P(sentTxtON, var016);
    display.print(sentTxtON);
    display.setFont();
    EEPROM.write(60, 8);
  }
}

void onblinkWifi()
{
  char sentTxtON[20] = {0};
  uint16_t cc_red = display.color565(16, 0, 0), myBLK = display.color565(0, 0, 0);

  clear_RectBLK01();
  display.setFont(&Font4x5Fixed);
  display.setTextColor(cc_red);
  if (EEPROM.read(28) == 1)
    display.setCursor(2, 14);
  else if (EEPROM.read(28) == 2)
    display.setCursor(4, 15);
  strcpy_P(sentTxtON, var044);
  display.print(sentTxtON);
  if (EEPROM.read(28) == 1)
    display.setCursor(2, 22);
  else if (EEPROM.read(28) == 2)
    display.setCursor(4, 21);
  strcpy_P(sentTxtON, var045);
  display.print(sentTxtON);

  if (EEPROM.read(28) == 2)
  {
    EEPROM.write(31, 6);
  }
  else if (EEPROM.read(28) == 3)
  {
    EEPROM.write(31, 6);
  }
  else if (EEPROM.read(28) == 1)
  {
    if (EEPROM.read(31) == 1 || EEPROM.read(31) == 3)
    {
      strcpy_P(sentTxtON, var046);
      display.print(sentTxtON);
    }
    else if (EEPROM.read(31) == 2)
    {
      strcpy_P(sentTxtON, var047);
      display.print(sentTxtON);
    }
    else
    {
      char inputS2[10] = {0};
      EEPROM.get(183, inputS2);
      display.print(inputS2);
    }
  }
  display.setFont();
}

void d0ButClintg22()
{
  if (EEPROM.read(39) == 3)
  {
    char sentTxtON[20] = {0};
    uint16_t cc_blu = display.color565(0, 0, 128), myBLK = display.color565(0, 0, 0);

    clear_RectBLK01();
    display.setFont(&Font4x5Fixed);
    display.setTextColor(cc_blu);
    if (EEPROM.read(28) == 1)
      display.setCursor(2, 14);
    else if (EEPROM.read(28) == 2)
      display.setCursor(4, 15);
    strcpy_P(sentTxtON, var031);
    display.print(sentTxtON);
    if (EEPROM.read(28) == 1)
      display.setCursor(2, 22);
    else if (EEPROM.read(28) == 2)
      display.setCursor(4, 21);
    strcpy_P(sentTxtON, var045);
    display.print(sentTxtON);
    char inputS2[10] = {0};
    EEPROM.get(183, inputS2);
    display.print(inputS2);
    display.setFont();
    EEPROM.write(59, 1), EEPROM.write(39, 4);
  }
}

void d0ButClintg23()
{
  if (EEPROM.read(39) == 4)
  {
    char sentTxtON[20] = {0};
    uint16_t cc_dgr = display.color565(30, 30, 30), myBLK = display.color565(0, 0, 0);

    clear_RectBLK01();
    display.setFont(&Font4x5Fixed);
    display.setTextColor(cc_dgr);
    if (EEPROM.read(28) == 1)
      display.setCursor(2, 14);
    else if (EEPROM.read(28) == 2)
      display.setCursor(4, 15);
    strcpy_P(sentTxtON, var048);
    display.print(sentTxtON);
    if (EEPROM.read(28) == 1)
      display.setCursor(2, 22);
    else if (EEPROM.read(28) == 2)
      display.setCursor(4, 21);
    strcpy_P(sentTxtON, var049);
    display.print(sentTxtON);
    char inputS2[10] = {0};
    EEPROM.get(183, inputS2);
    display.print(inputS2);
    display.setFont();
    EEPROM.write(59, 1), EEPROM.write(39, 5);
  }
}

void doSyncT()
{
  char sentTxtON[20] = {0};
  uint16_t cc_blu = display.color565(0, 0, 128), cc_dgr = display.color565(30, 30, 30), myMAG = display.color565(255, 0, 255), myBLK = display.color565(0, 0, 0);

  unsigned short setaYY = 0;
  EEPROM.get2(65, setaYY);
  if (setaYY >= 2022)
  {
    if (EEPROM.read(39) == 6)
    {
      clear_RectBLK01();
      display.setFont(&Font4x5Fixed);
      display.setTextColor(cc_blu);
      if (EEPROM.read(28) == 1)
        display.setCursor(2, 14);
      else if (EEPROM.read(28) == 2)
        display.setCursor(4, 15);
      strcpy_P(sentTxtON, var050);
      display.print(sentTxtON);
      if (EEPROM.read(28) == 1)
        display.setCursor(2, 22);
      else if (EEPROM.read(28) == 2)
        display.setCursor(4, 21);
      strcpy_P(sentTxtON, var051);
      display.print(sentTxtON);
      display.setFont();
      EEPROM.write(59, 2), EEPROM.write(39, 7);
    }
    else if (EEPROM.read(39) == 7)
    {
      if (EEPROM.read(28) == 1)
      {
        char wifi_staIPwt[18] = {0};
        strcpy_P(wifi_staIPwt, wifi_staIPwt1);
        EEPROM.put(165, wifi_staIPwt);
      }
      else if (EEPROM.read(28) == 2)
        EEPROM.write(31, 4);
      EEPROM.write(59, 100);
      EEPROM.write(61, 1);
      EEPROM.write(60, 0);
      EEPROM.write(39, 0);
    }
  }
  else if (EEPROM.read(59) >= 30)
  {
    if (EEPROM.read(59) == 30)
    {
      clear_RectBLK01();
      display.setFont(&Font4x5Fixed);
      display.setTextColor(myMAG);
      if (EEPROM.read(28) == 1)
        display.setCursor(2, 14);
      else if (EEPROM.read(28) == 2)
        display.setCursor(4, 15);
      strcpy_P(sentTxtON, var154);
      display.print(sentTxtON);
      if (EEPROM.read(28) == 1)
        display.setCursor(2, 22);
      else if (EEPROM.read(28) == 2)
        display.setCursor(4, 21);
      strcpy_P(sentTxtON, var049);
      display.print(sentTxtON);
      char inputS2[10] = {0};
      EEPROM.get(183, inputS2);
      display.print(inputS2);
      display.setFont();
    }
    else if (EEPROM.read(59) >= 31)
    {
      EEPROM.write(61, 2);
      EEPROM.write(31, 3);
      EEPROM.write(59, 1);
    }
  }
  else
  {
    if (EEPROM.read(39) == 5)
    {
      clear_RectBLK01();
      display.setFont(&Font4x5Fixed);
      display.setTextColor(cc_dgr);
      if (EEPROM.read(28) == 1)
        display.setCursor(2, 14);
      else if (EEPROM.read(28) == 2)
        display.setCursor(4, 15);
      strcpy_P(sentTxtON, var193);
      display.print(sentTxtON);
      if (EEPROM.read(28) == 1)
        display.setCursor(2, 22);
      else if (EEPROM.read(28) == 2)
        display.setCursor(4, 21);
      strcpy_P(sentTxtON, var049);
      display.print(sentTxtON);
      char inputS2[10] = {0};
      EEPROM.get(183, inputS2);
      display.print(inputS2);
      display.setFont();
      EEPROM.write(59, 1), EEPROM.write(39, 6);
    }
    getIntTime();
  }
}

void mdoSyncT()
{
  char sentTxtON[20] = {0};
  uint16_t cc_dgr = display.color565(30, 30, 30), myMAG = display.color565(255, 0, 255), myBLK = display.color565(0, 0, 0);

  unsigned short setaYY = 0;
  EEPROM.get2(65, setaYY);
  if (setaYY >= 2022)
  {
    char sentTxtON[20] = {0};
    uint16_t cc_blu = display.color565(0, 0, 128), myBLK = display.color565(0, 0, 0);

    if (EEPROM.read(39) == 6)
    {
      clear_RectBLK01();
      display.setFont(&Font4x5Fixed);
      display.setTextColor(cc_blu);
      if (EEPROM.read(28) == 1)
        display.setCursor(2, 14);
      else if (EEPROM.read(28) == 2)
        display.setCursor(4, 15);
      strcpy_P(sentTxtON, var152);
      display.print(sentTxtON);
      if (EEPROM.read(28) == 1)
        display.setCursor(2, 22);
      else if (EEPROM.read(28) == 2)
        display.setCursor(4, 21);
      strcpy_P(sentTxtON, var051);
      display.print(sentTxtON);
      display.setFont();
      EEPROM.write(59, 2), EEPROM.write(39, 7);
    }
    else if (EEPROM.read(39) == 7)
    {
      if (EEPROM.read(28) == 1)
      {
        char wifi_staIPwt[18] = {0};
        strcpy_P(wifi_staIPwt, wifi_staIPwt1);
        EEPROM.put(165, wifi_staIPwt);
      }
      else if (EEPROM.read(28) == 2)
        EEPROM.write(31, 4);
      EEPROM.write(59, 100);
      EEPROM.write(39, 0);
      EEPROM.write(60, 0);
    }
  }
  else if (EEPROM.read(59) >= 30)
    d0BCnt30();
  else
  {
    if (EEPROM.read(39) == 5)
    {
      clear_RectBLK01();
      display.setFont(&Font4x5Fixed);
      display.setTextColor(cc_dgr);
      if (EEPROM.read(28) == 1)
        display.setCursor(2, 14);
      else if (EEPROM.read(28) == 2)
        display.setCursor(4, 15);
      strcpy_P(sentTxtON, var048);
      display.print(sentTxtON);
      if (EEPROM.read(28) == 1)
        display.setCursor(2, 22);
      else if (EEPROM.read(28) == 2)
        display.setCursor(4, 21);
      strcpy_P(sentTxtON, var049);
      display.print(sentTxtON);
      strcpy_P(sentTxtON, var153);
      display.print(sentTxtON);
      display.setFont();
      EEPROM.write(59, 1), EEPROM.write(39, 6);
      EEPROM.write(24, 1);
    }
    EEPROM.write(22, 8);
    EEPROM.write(60, 189);
  }
}

void doSyncW()
{
  char sentTxtON[20] = {0};
  uint16_t cc_blu = display.color565(0, 0, 128), cc_dgr = display.color565(30, 30, 30), myYLW = display.color565(255, 255, 0), myBLK = display.color565(0, 0, 0);

  int8_t getTempM = 0;
  EEPROM.get1(392, getTempM);
  if (getTempM != -127)
  {

    if (EEPROM.read(39) == 6)
    {
      clear_RectBLK01();
      display.setFont(&Font4x5Fixed);
      display.setTextColor(cc_blu);
      if (EEPROM.read(28) == 1)
        display.setCursor(2, 14);
      else if (EEPROM.read(28) == 2)
        display.setCursor(4, 15);
      strcpy_P(sentTxtON, var050);
      display.print(sentTxtON);
      if (EEPROM.read(28) == 1)
        display.setCursor(2, 22);
      else if (EEPROM.read(28) == 2)
        display.setCursor(4, 21);
      strcpy_P(sentTxtON, var052);
      display.print(sentTxtON);
      display.setFont();
      EEPROM.write(59, 2), EEPROM.write(39, 7);
    }
    else if (EEPROM.read(39) == 7)
    {
      if (EEPROM.read(28) == 1)
      {
        char wifi_staIPwt[18] = {0};
        strcpy_P(wifi_staIPwt, wifi_staIPwt2);
        EEPROM.put(165, wifi_staIPwt);
      }
      else if (EEPROM.read(28) == 2)
        EEPROM.write(31, 5);
      EEPROM.write(59, 100);
      EEPROM.write(61, 1);
      EEPROM.write(60, 0);
      EEPROM.write(39, 0);
    }
  }
  else if (EEPROM.read(59) >= 30)
  {
    EEPROM.write(61, 2);
    d0BCnt30();
  }
  else
  {
    if (EEPROM.read(39) == 5)
    {
      clear_RectBLK01();
      display.setFont(&Font4x5Fixed);
      display.setTextColor(cc_dgr);
      if (EEPROM.read(28) == 1)
        display.setCursor(2, 14);
      else if (EEPROM.read(28) == 2)
        display.setCursor(4, 15);
      strcpy_P(sentTxtON, var204);
      display.print(sentTxtON);
      if (EEPROM.read(28) == 1)
        display.setCursor(2, 22);
      else if (EEPROM.read(28) == 2)
        display.setCursor(4, 21);
      strcpy_P(sentTxtON, var049);
      display.print(sentTxtON);
      char inputS2[10] = {0};
      EEPROM.get(183, inputS2);
      display.print(inputS2);
      display.setFont();
      EEPROM.write(59, 1), EEPROM.write(39, 6);
    }
    getWeather();
  }
}

void d0BCnt30()
{
  if (EEPROM.read(59) == 30)
    onblinkWifi();
  else if (EEPROM.read(59) >= 31)
    d0BCnt32();
}

void d0BCnt32()
{
  unsigned short setaYY = 0, setbYY = 0;
  EEPROM.get2(40, setbYY);
  setaYY = setbYY;
  EEPROM.put2(65, setaYY);

  int8_t tempM = 0, getTempM = 0;
  EEPROM.get1(38, tempM);
  getTempM = tempM;
  EEPROM.put1(392, getTempM);

  unsigned short presM = 0, getPresM = 0;
  EEPROM.get2(360, presM);
  getPresM = presM;
  EEPROM.put2(388, getPresM);

  uint8_t humiM = 0, getHumM = 0;
  EEPROM.get1(42, humiM);
  getHumM = humiM;
  EEPROM.put1(47, getHumM);

  EEPROM.write(59, 100);
  EEPROM.write(31, 0);
  EEPROM.write(39, 0);
  EEPROM.write(60, 0);
}

void routerConnect1()
{
  if (EEPROM.read(39) == 1)
  {
    char sentTxtON[20] = {0};
    char inputS1[24] = {0}, inputS2[10] = {0};
    uint16_t cc_dgr = display.color565(30, 30, 30), myBLK = display.color565(0, 0, 0);

    EEPROM.write(59, EEPROM.read(59) + 1), playerLength++;

    if (EEPROM.read(59) == 2)
    {
      clear_RectBLK01();
      display.setFont(&Font4x5Fixed);
      display.setTextColor(cc_dgr);
      if (EEPROM.read(28) == 1)
        display.setCursor(2, 14);
      else if (EEPROM.read(28) == 2)
        display.setCursor(4, 15);
      strcpy_P(sentTxtON, var053);
      display.print(sentTxtON);
      if (EEPROM.read(28) == 1)
        display.setCursor(2, 22);
      else if (EEPROM.read(28) == 2)
        display.setCursor(4, 21);
      strcpy_P(sentTxtON, var054);
      display.print(sentTxtON);
      display.setFont();

      WiFi.disconnect(true), WiFi.scanDelete();
    }
    else if (EEPROM.read(59) == 3)
      WiFi.scanNetworks();
    else if (EEPROM.read(59) == 4)
      EEPROM.write(61, WiFi.scanComplete());

    if (EEPROM.read(59) >= 5 && playerLength < 1200)
    {
      for (int i = 0; i < EEPROM.read(61); i++)
      {
        if (WiFi.SSID(i) == "CONNECTME")
        {
          strcpy(inputS1, "CONNECTME");
          EEPROM.put(336, inputS1);
        }
        if (WiFi.SSID(i) == "VMxxxxxxxx")
        {
          strcpy(inputS2, "VMxxxxxxxx");
          EEPROM.put(183, inputS2);
        }
      }
      WiFi.scanDelete();

      if (EEPROM.read(59) >= 6)
      {
        EEPROM.get(336, inputS1), EEPROM.get(183, inputS2);
        if (strcmp(inputS1, "CONNECTME") == 0 && strcmp(inputS2, "VMxxxxxxxx") == 0)
        {
          strcpy(inputS2, "CONNECTME"), strcpy(inputS1, "PSWxxxxxx");
          EEPROM.put(336, inputS1), EEPROM.put(183, inputS2);
          EEPROM.write(43, 1);
          EEPROM.write(61, 0);

          clear_RectBLK01();
          display.setFont(&Font4x5Fixed);
          display.setTextColor(cc_dgr);
          if (EEPROM.read(28) == 1)
            display.setCursor(2, 14);
          else if (EEPROM.read(28) == 2)
            display.setCursor(4, 15);
          display.print(inputS2);
          if (EEPROM.read(28) == 1)
            display.setCursor(2, 22);
          else if (EEPROM.read(28) == 2)
            display.setCursor(4, 21);
          strcpy_P(sentTxtON, var055);
          display.print(sentTxtON);
          display.setFont();

          EEPROM.write(39, 2);
          EEPROM.write(59, 0);
        }
        else if (strcmp(inputS1, "CONNECTME") != 0 && strcmp(inputS2, "VMxxxxxxxx") == 0)
        {
          strcpy(inputS2, "VMxxxxxxxx"), strcpy(inputS1, "PSWxxxxxxxx");
          EEPROM.put(336, inputS1), EEPROM.put(183, inputS2);
          EEPROM.write(43, 1);
          EEPROM.write(61, 0);

          clear_RectBLK01();
          display.setFont(&Font4x5Fixed);
          display.setTextColor(cc_dgr);
          if (EEPROM.read(28) == 1)
            display.setCursor(2, 14);
          else if (EEPROM.read(28) == 2)
            display.setCursor(4, 15);
          display.print(inputS2);
          if (EEPROM.read(28) == 1)
            display.setCursor(2, 22);
          else if (EEPROM.read(28) == 2)
            display.setCursor(4, 21);
          strcpy_P(sentTxtON, var055);
          display.print(sentTxtON);
          display.setFont();

          EEPROM.write(39, 2);
          EEPROM.write(59, 0);
        }
        else if (strcmp(inputS1, "CONNECTME") == 0 && strcmp(inputS2, "VMxxxxxxxx") != 0)
        {
          strcpy(inputS2, "CONNECTME"), strcpy(inputS1, "PSWxxxxxx");
          EEPROM.put(336, inputS1), EEPROM.put(183, inputS2);
          EEPROM.write(43, 1);
          EEPROM.write(61, 0);

          clear_RectBLK01();
          display.setFont(&Font4x5Fixed);
          display.setTextColor(cc_dgr);
          if (EEPROM.read(28) == 1)
            display.setCursor(2, 14);
          else if (EEPROM.read(28) == 2)
            display.setCursor(4, 15);
          display.print(inputS2);
          if (EEPROM.read(28) == 1)
            display.setCursor(2, 22);
          else if (EEPROM.read(28) == 2)
            display.setCursor(4, 21);
          strcpy_P(sentTxtON, var055);
          display.print(sentTxtON);
          display.setFont();

          EEPROM.write(39, 2);
          EEPROM.write(59, 0);
        }
        else
          EEPROM.write(59, 2);
      }
    }
    else if (playerLength >= 1200)
    {
      clear_RectBLK01();
      display.setFont(&Font4x5Fixed);
      display.setTextColor(cc_dgr);
      if (EEPROM.read(28) == 1)
        display.setCursor(2, 14);
      else if (EEPROM.read(28) == 2)
        display.setCursor(4, 15);
      strcpy_P(sentTxtON, var056);
      display.print(sentTxtON);
      if (EEPROM.read(28) == 1)
        display.setCursor(2, 22);
      else if (EEPROM.read(28) == 2)
        display.setCursor(4, 21);
      strcpy_P(sentTxtON, var055);
      display.print(sentTxtON);
      display.setFont();
      startWiFiAP();
      playerLength = 0;
      EEPROM.write(39, 0);
      EEPROM.write(59, 0);
      EEPROM.write(61, 0);
    }
  }
}

void routerConnect2()
{
  if (EEPROM.read(39) == 2)
  {
    char sentTxtON[20] = {0};
    uint16_t cc_dgr = display.color565(30, 30, 30), myBLK = display.color565(0, 0, 0);
    char inputS1[24] = {0}, inputS2[10] = {0};
    EEPROM.get(336, inputS1), EEPROM.get(183, inputS2);

    EEPROM.write(59, EEPROM.read(59) + 1);

    if (EEPROM.read(59) == 2)
    {
      clear_RectBLK01();
      display.setFont(&Font4x5Fixed);
      display.setTextColor(cc_dgr);
      if (EEPROM.read(28) == 1)
        display.setCursor(2, 14);
      else if (EEPROM.read(28) == 2)
        display.setCursor(4, 15);
      strcpy_P(sentTxtON, var057);
      display.print(sentTxtON);
      if (EEPROM.read(28) == 1)
        display.setCursor(2, 22);
      else if (EEPROM.read(28) == 2)
        display.setCursor(4, 21);
      strcpy_P(sentTxtON, var058);
      display.print(sentTxtON);
      display.setFont();
      EEPROM.write(60, 21);
    }
    else if (EEPROM.read(59) == 3)
    {
      if (strcmp(inputS2, "CONNECTME") == 0 || strcmp(inputS2, "VMxxxxxxxx") == 0)
        WiFi.begin(inputS2, inputS1);
    }
    else if (EEPROM.read(59) == 4)
    {
      clear_RectBLK01();
      display.setFont(&Font4x5Fixed);
      display.setTextColor(cc_dgr);
      if (EEPROM.read(28) == 1)
        display.setCursor(2, 14);
      else if (EEPROM.read(28) == 2)
        display.setCursor(4, 15);
      strcpy_P(sentTxtON, var059);
      display.print(sentTxtON);
      if (EEPROM.read(28) == 1)
        display.setCursor(2, 22);
      else if (EEPROM.read(28) == 2)
        display.setCursor(4, 21);
      strcpy_P(sentTxtON, var045);
      display.print(sentTxtON);
      display.print(inputS2);
      display.setFont();
      EEPROM.write(60, 22);
      EEPROM.write(39, 3);
      EEPROM.write(59, 0);
    }

    if (EEPROM.read(28) == 3)
    {
      if (EEPROM.read(56) == PLAYING)
      {
        EEPROM.write(60, 28);
        EEPROM.write(56, PAUSED);

        char actPLAY[10] = {0};
        strcpy_P(actPLAY, actPLAY1);
        EEPROM.put(362, actPLAY);
      }
    }
  }
}

void routerConnect3()
{
  if (EEPROM.read(39) >= 3 && EEPROM.read(39) <= 7)
  {
    EEPROM.write(59, EEPROM.read(59) + 1);

    if (EEPROM.read(59) >= 2)
    {
      if (WiFi.status() == WL_CONNECTED)
      {
        d0ButClintg22();
        d0ButClintg23();

        if (EEPROM.read(39) >= 5 && EEPROM.read(39) <= 7)
        {
          if (EEPROM.read(31) == 1)
            doSyncT();
          else if (EEPROM.read(31) == 2)
            doSyncW();
          else if (EEPROM.read(31) == 3)
            mdoSyncT();
          else
          {
            EEPROM.write(61, 2);
            d0BCnt32();
          }
        }
      }
      else if (EEPROM.read(59) >= 30)
      {
        EEPROM.write(61, 3);
        d0BCnt30();
      }
    }
  }
}

void routerConnect4()
{
  if (EEPROM.read(50) != 2 && EEPROM.read(71) != 204)
  {
    EEPROM.write(70, EEPROM.read(70) + 1);

    if (EEPROM.read(70) == 5)
    {
      if (EEPROM.read(28) == 1)
        display.drawPixel(13, 7, myRED);
      else if (EEPROM.read(28) == 2)
        display.drawPixel(13, 10, myRED);
    }
    else if (EEPROM.read(70) == 10)
    {
      if (EEPROM.read(28) == 1)
        display.drawPixel(13, 7, myGRN);
      else if (EEPROM.read(28) == 2)
        display.drawPixel(13, 10, myGRN);
    }
    else if (EEPROM.read(70) >= 15)
    {
      uint16_t myBLU = display.color565(0, 0, 255);

      if (EEPROM.read(28) == 1)
        display.drawPixel(13, 7, myBLU);
      else if (EEPROM.read(28) == 2)
        display.drawPixel(13, 10, myBLU);
      EEPROM.write(70, 0);
    }

    if (EEPROM.read(70) % 5 == 0)
      if (EEPROM.read(15) == 1)
        dimPixel();
  }

  if (EEPROM.read(28) == 1)
  {
    if (EEPROM.read(26) == 1)
      pixMCUClkDisp();
  }
  else if ((EEPROM.read(28) == 2 || EEPROM.read(28) == 3) && (EEPROM.read(44) == 1))
    gameMCUtime();

  if (EEPROM.read(57) == 1)
  {
    lastClockTick++;
    if (lastClockTick >= 20)
    {
      EEPROM.write(29, 3);
      lastClockTick = 0;
      EEPROM.write(57, 0);
      char sentTxtON[20] = {0};
      strcpy_P(sentTxtON, varDR3), ws.textAll(sentTxtON);
    }
  }

  if ((EEPROM.read(24) > 0))
  {
    EEPROM.write(24, EEPROM.read(24) + 1);

    if (EEPROM.read(24) >= 100 && EEPROM.read(24) < 120)
    {
      if (EEPROM.read(59) >= 10)
      {
        uint16_t cc_sal = display.color565(250, 128, 114), myBLK = display.color565(0, 0, 0);
        char sentTxtON[20] = {0};

        display.fillRect(0, 26, 64, 6, myBLK);
        display.setFont(&Font4x5Fixed);
        display.setTextColor(cc_sal);
        display.setCursor(1, 30);
        strcpy_P(sentTxtON, var246);
        display.print(sentTxtON);
        display.setFont();
        EEPROM.write(24, 120);
      }
      else if (EEPROM.read(60) == 190 && EEPROM.read(57) != 3)
      {
        if (EEPROM.read(24) == 100)
        {
          EEPROM.write(59, EEPROM.read(59) + 1);

          uint16_t myBLK = display.color565(0, 0, 0);
          char sentTxtON[20] = {0};

          display.fillRect(0, 26, 64, 6, myBLK);
          display.setFont(&Font4x5Fixed);
          display.setTextColor(myRED);
          display.setCursor(1, 30);
          strcpy_P(sentTxtON, var244);
          display.print(sentTxtON);
          display.setFont();
        }
        else if (EEPROM.read(24) == 102)
        {
          uint16_t myGLD = display.color565(215, 205, 38), myBLK = display.color565(0, 0, 0);
          char sentTxtON[20] = {0};

          display.fillRect(0, 26, 64, 6, myBLK);
          display.setFont(&Font4x5Fixed);
          display.setTextColor(myGLD);
          display.setCursor(1, 30);
          strcpy_P(sentTxtON, var245);
          display.print(sentTxtON);
          display.setFont();
        }
        else if (EEPROM.read(24) >= 103)
        {
          EEPROM.write(24, 1);
          esp_now_send(myMacAddr.macAddrSend, (uint8_t *)&mySendData, sizeof(mySendData));
        }
      }
    }
    else if (EEPROM.read(24) >= 120)
    {
      if (EEPROM.read(24) >= 122)
      {
        if (EEPROM.read(20) == 1 || EEPROM.read(20) == 2)
        {
          uint16_t myBLK = display.color565(0, 0, 0);
          display.fillRect(0, 26, 64, 6, myBLK);
          EEPROM.write(20, 0);
          EEPROM.write(22, 0);
          EEPROM.write(24, 0);
          EEPROM.write(57, 5);
        }
      }
    }
  }

  if (numApplesEaten == 6)
  {
    gameRate++;
    if (gameRate == 3)
    {
      char sentTxtOFF[20] = {0};
      strcpy_P(sentTxtOFF, varOFF0), ws.textAll(sentTxtOFF);
      numApplesEaten = gameRate = 0;
    }
  }

  if (EEPROM.read(25) == 1)
    timeTrigga(), updateTime();

  preparingData2();
}

void caseB_079()
{
  memset(&mySendData, '\0', sizeof mySendData);
  mySendData.msgType = DATA;
  mySendData.id = BOARD_PX;

  if (EEPROM.read(22) == 9)
  {
    mySendData.sendcounter = 204;

    uint16_t cc_lgn = display.color565(86, 189, 16);
    if (EEPROM.read(28) == 2)
      display.drawPixel(30, 10, cc_lgn);
    else if (EEPROM.read(28) == 1)
      display.drawPixel(30, 7, cc_lgn);

    EEPROM.write(22, 3);
  }
  else if (EEPROM.read(22) == 8)
  {
    mySendData.sendcounter = 205;
    char lineTime[15] = {0};
    strcpy_P(lineTime, lineTime3);
    EEPROM.put(286, lineTime);
  }

  // MainRout
  esp_now_send(myMacAddr.macAddrSend, (uint8_t *)&mySendData, sizeof(mySendData));

  EEPROM.write(60, 0);
}

void caseB_006()
{
  // Set values to send
  memset(&mySendData, '\0', sizeof mySendData);
  mySendData.msgType = DATA;
  mySendData.id = BOARD_PX;
  if (EEPROM.read(22) == 14)
  {
    mySendData.sendcounter = 250;
    char txtSen[100] = {0};
    strcpy_P(txtSen, var243);
    strcpy(mySendData.aS, txtSen);

    EEPROM.write(22, 0);
  }

  // WemoRout
  esp_now_send(myMacAddr.macAddrSend, (uint8_t *)&mySendData, sizeof(mySendData));
  EEPROM.write(60, 0);
}

void preparingData0()
{
  char sentTxtON[20] = {0};
  uint16_t cc_tom = display.color565(255, 99, 17), myGLD = display.color565(215, 205, 100), myBLK = display.color565(0, 0, 0);

  if (EEPROM.read(59) == 1)
  {
    if (EEPROM.read(51) == 11)
    {
      memset(sentTxtON, '\0', sizeof sentTxtON);
      memset(&mySendData, '\0', sizeof mySendData);
      memset(prepData, '\0', sizeof prepData);
      strcpy(prepData, "");

      EEPROM.write(51, 22);
    }
    EEPROM.write(59, 2);
  }
  else if (EEPROM.read(59) == 2)
  {
    if (EEPROM.read(51) == 22)
    {
      // Set values to send
      if (EEPROM.read(20) == 1)
      {
        itoa(ia, sentTxtON, 10);
        strcat(prepData, sentTxtON);
        strcpy_P(sentTxtON, var001);
        strcat(prepData, sentTxtON);
        itoa(EEPROM.read(ia), sentTxtON, 10);
        strcat(prepData, sentTxtON);
        strcpy_P(sentTxtON, eeMem1);
        strcat(prepData, sentTxtON);
      }
      else if (EEPROM.read(20) == 2)
      {
        char holdData[3000] = {0};
        memset(holdData, '\0', sizeof holdData);
        strcpy_P(holdData, holdData1);
        prepData[filecounter] = holdData[ia];
      }

      display.fillRect(0, 26, 20, 6, myBLK);
      display.setFont(&Font4x5Fixed);
      display.setTextColor(cc_tom);
      display.setCursor(1, 30);
      strcpy_P(sentTxtON, var206);
      display.print(sentTxtON);
      display.print(ia);
      display.setFont();
    }

    display.drawPixel(62, 7, myGLD);
    EEPROM.write(59, 3);
  }
  else if (EEPROM.read(59) == 3)
  {
    if (EEPROM.read(51) == 22)
    {
      ia++;
      filecounter++;
    }

    if (EEPROM.read(20) == 1)
    {
      if (filecounter == 25)
      {
        filecounter = 0;
        EEPROM.write(51, 8);
      }

      if (ia >= 512)
      {
        if (filecounter > 0)
        {
          EEPROM.write(365, 1);
          EEPROM.write(51, 8);
          filecounter = 0;
        }
        else
          EEPROM.write(57, 5);

        EEPROM.write(59, 0);
      }
      else if (ia < 512)
        EEPROM.write(59, 2);
    }
    else if (EEPROM.read(20) == 2)
    {
      if (filecounter == 230)
      {
        EEPROM.write(51, 8);
        filecounter = 0;
      }

      if (ia >= 999)
      {
        if (filecounter > 0)
        {
          EEPROM.write(365, 1);
          EEPROM.write(51, 8);
          filecounter = 0;
        }
        else
          EEPROM.write(57, 5);

        EEPROM.write(59, 0);
      }
      else if (ia < 999)
        EEPROM.write(59, 2);
    }

    display.drawPixel(62, 7, myBLK);
  }
}

void preparingData1()
{
  char sentTxtON[20] = {0};

  // data sent
  if (EEPROM.read(51) == 15)
  {
    EEPROM.write(51, 14);
  }
  else if (EEPROM.read(51) == 14)
  {
    uint16_t cc_tom = display.color565(255, 99, 17), myBLK = display.color565(0, 0, 0);
    display.fillRect(20, 26, 44, 6, myBLK);
    display.setFont(&Font4x5Fixed);
    display.setTextColor(cc_tom);
    display.setCursor(21, 30);
    strcpy_P(sentTxtON, var207);
    display.print(sentTxtON);
    display.print(EEPROM.read(21));
    strcpy_P(sentTxtON, var213);
    display.print(sentTxtON);
    if (EEPROM.read(366) == 1)
    {
      strcpy_P(sentTxtON, var231);
      display.print(sentTxtON);
    }
    else if (EEPROM.read(366) == 2)
    {
      strcpy_P(sentTxtON, var232);
      display.print(sentTxtON);
    }
    else if (EEPROM.read(366) == 3)
    {
      strcpy_P(sentTxtON, var233);
      display.print(sentTxtON);
    }
    else if (EEPROM.read(366) == 4)
    {
      strcpy_P(sentTxtON, var247);
      display.print(sentTxtON);
    }
    else if (EEPROM.read(366) == 5)
    {
      strcpy_P(sentTxtON, var248);
      display.print(sentTxtON);
    }
    display.setFont();
    EEPROM.write(51, 13);
  }
  else if (EEPROM.read(51) == 13)
  {
    esp_now_send(myMacAddr.macAddrSend, (uint8_t *)&mySendData, sizeof(mySendData));

    EEPROM.write(51, 21);
  }

  // start
  if (EEPROM.read(57) == 7)
  {
    uint16_t cc_org = display.color565(255, 165, 0), myBLK = display.color565(0, 0, 0);
    EEPROM.write(59, EEPROM.read(59) + 1);
    if (EEPROM.read(59) >= 3)
    {
      display.drawPixel(60, 7, myBLK);
      unsigned short geteep11 = 0;
      ia = geteep11 = 0;
      EEPROM.put2(368, geteep11); 
      EEPROM.write(362, 0);
      EEPROM.write(363, 0);
      EEPROM.write(364, 0);
      EEPROM.write(365, 0);
      EEPROM.write(366, 0);
      EEPROM.write(367, 1);
      EEPROM.write(370, 0);
      EEPROM.write(371, 0);
      filecounter = 0;
      mysendinc = 0;
      EEPROM.write(57, 4);
      EEPROM.write(21, 0);
      EEPROM.write(52, 0);

      if (EEPROM.read(28) == 1)
        display.fillRect(0, 26, 64, 6, myBLK);
      else if (EEPROM.read(28) == 2)
        display.fillRect(0, 25, 64, 7, myBLK);

      uint16_t cc_sal = display.color565(250, 128, 114);
      char sentTxtON[20] = {0};
      display.drawPixel(60, 7, myBLK);
      display.setFont(&Font4x5Fixed);
      display.setTextColor(cc_sal);
      display.setCursor(21, 30);
      strcpy_P(sentTxtON, var210);
      display.print(sentTxtON);
      display.setFont();
      EEPROM.write(59, 1);
      EEPROM.write(51, 11);
    }
  }

  // manage error
  if (EEPROM.read(57) == 4)
  {
    if ((EEPROM.read(51) == 18 || EEPROM.read(51) == 10) && (EEPROM.read(60) == 0 || EEPROM.read(60) == 201 || EEPROM.read(60) == 203 || EEPROM.read(60) == 204))
    {
      EEPROM.write(52, EEPROM.read(52) + 1);

      if (EEPROM.read(52) == 3 )
      {
        if (EEPROM.read(51) == 10) // if sent error 1
          EEPROM.write(51, 14), EEPROM.write(366, 1);
      }
      else if (EEPROM.read(52) == 6 )
      {
        if (EEPROM.read(51) == 10) // if sent error 2
          EEPROM.write(51, 14), EEPROM.write(366, 2);
      }
      else if (EEPROM.read(52) == 9 )
      {
        if (EEPROM.read(51) == 10) // if sent error 3
          EEPROM.write(51, 14), EEPROM.write(366, 3);
      }
      else if (EEPROM.read(52) == 12 )
      {
        if (EEPROM.read(51) == 10) // if sent error 2
          EEPROM.write(51, 14), EEPROM.write(366, 4);
      }
      else if (EEPROM.read(52) == 15 )
      {
        if (EEPROM.read(51) == 10) // if sent error 3
          EEPROM.write(51, 14), EEPROM.write(366, 5);
      }

      else if (EEPROM.read(52) >= 20)
      {
        if (EEPROM.read(52) == 20)
        {
          if (EEPROM.read(51) == 10) // if sent error
          {
            if (EEPROM.read(363) == 0)
              EEPROM.write(367, 1);
            else
            {
              mysendinc = EEPROM.read(363);
            }

            if (EEPROM.read(364) == 0)
              EEPROM.write(21, 0);
            else
              EEPROM.write(21, EEPROM.read(364));

            unsigned short geteep11 = 0;
            EEPROM.get2(368, geteep11);
            if (geteep11 == 0)
              ia = 0;
            else
              ia = geteep11;

            if (EEPROM.read(365) == 1)
              EEPROM.write(59, 1), EEPROM.write(365, 0);

            EEPROM.write(370, EEPROM.read(370) + 1);
          }
          else if (EEPROM.read(51) == 18) // if sent sucess
          {
            EEPROM.write(370, 0);
            EEPROM.write(371, EEPROM.read(371) + 1);
          }
        }
        else if (EEPROM.read(52) >= 21)
        {
          EEPROM.write(362, EEPROM.read(362) + 1);

          if (EEPROM.read(365) == 1 && EEPROM.read(51) == 18)
          {
            // exit data sending
            EEPROM.write(57, 5);
          }
          else
          {
            if (EEPROM.read(51) == 10) // if sent error
            {
              uint16_t cc_sal = display.color565(250, 128, 114), myBLK = display.color565(0, 0, 0);
              char sentTxtON[20] = {0};
              display.drawPixel(60, 7, myBLK);
              display.fillRect(20, 26, 44, 6, myBLK);
              display.setFont(&Font4x5Fixed);
              display.setTextColor(cc_sal);
              display.setCursor(21, 30);
              strcpy_P(sentTxtON, var228);
              display.print(sentTxtON);
              display.setFont();
            }
            else if (EEPROM.read(51) == 18) // if sent sucess
            {
              uint16_t cc_sal = display.color565(250, 128, 114), myBLK = display.color565(0, 0, 0);
              char sentTxtON[20] = {0};
              display.drawPixel(60, 7, myBLK);
              display.fillRect(20, 26, 44, 6, myBLK);
              display.setFont(&Font4x5Fixed);
              display.setTextColor(cc_sal);
              display.setCursor(21, 30);
              strcpy_P(sentTxtON, var227);
              display.print(sentTxtON);
              display.setFont();
            }

            if (EEPROM.read(362) < 10)
            {
              EEPROM.write(52, 0);
              EEPROM.write(59, 1);
              EEPROM.write(51, 11);
            }
            else if (EEPROM.read(362) >= 30)
            {
              EEPROM.write(52, 0);
              EEPROM.write(57, 3);
              EEPROM.write(362, 0);
              EEPROM.write(370, 0);
              EEPROM.write(371, 0);
            }
          }
        }
      }
    }
  }

  // exit
  if (EEPROM.read(57) == 6)
  {
    uint16_t cc_dka = display.color565(189, 183, 107), myBLK = display.color565(0, 0, 0);
    char sentTxtON[20] = {0};

    EEPROM.write(59, EEPROM.read(59) + 1);

    if (EEPROM.read(59) == 3)
    {
      display.fillRect(0, 26, 64, 6, myBLK);
      strcpy_P(sentTxtON, varOFF14), ws.textAll(sentTxtON);

      EEPROM.write(15, 1);
      if (EEPROM.read(28) == 1)
      {
        // EEPROM.write(51, 2);
        sp7_Zero1();
        spG_00();
        bwCnt_gap = 0;
        EEPROM.write(71, 49);
      }
      else if (EEPROM.read(28) == 2)
      {
        // EEPROM.write(51, 3);
        sp7_Zero1();
      }
    }
    else if (EEPROM.read(59) >= 5)
    {
      unsigned short geteep11 = 0;
      ia = geteep11 = 0;
      EEPROM.put2(368, geteep11); 
      filecounter = 0;
      mysendinc = 0;
      mySendData.sendcounter = 0;
      memset(prepData, '\0', sizeof prepData);
      memset(&mySendData, '\0', sizeof mySendData);
      EEPROM.write(362, 0);
      EEPROM.write(363, 0);
      EEPROM.write(364, 0);
      EEPROM.write(365, 0);
      EEPROM.write(366, 0);
      EEPROM.write(367, 0);
      EEPROM.write(370, 0);
      EEPROM.write(371, 0);
      EEPROM.write(60, 12);
      EEPROM.write(57, 8);
      EEPROM.write(59, 0);
      EEPROM.write(52, 0);
      EEPROM.write(21, 0);
      if (EEPROM.read(20) == 1)
        strcpy_P(sentTxtON, varOFF13), ws.textAll(sentTxtON);
      else if (EEPROM.read(20) == 2)
        strcpy_P(sentTxtON, varOFF15), ws.textAll(sentTxtON);
      EEPROM.write(20, 0);
    }
  }
}

void preparingData2()
{
  // data sent success
  if (EEPROM.read(51) == 7)
  {
    EEPROM.write(51, 16);
  }
  else if (EEPROM.read(51) == 16)
  {
    EEPROM.write(51, 17);
  }

  // data sent error
  if (EEPROM.read(51) == 19)
  {
    EEPROM.write(51, 20);
  }
  else if (EEPROM.read(51) == 20)
  {
    EEPROM.write(51, 9);
  }

  // data received
  if (EEPROM.read(51) == 6)
  {
    EEPROM.write(51, 12);
  }
  else if (EEPROM.read(51) == 12)
  {
    if (EEPROM.read(365) == 1)
      EEPROM.write(51, 18), EEPROM.write(52, 19), EEPROM.write(60, 203);
    else
      EEPROM.write(51, 4);
  }
}

void preparingData3()
{
  // start
  if (EEPROM.read(57) == 3)
  {
    uint16_t cc_org = display.color565(255, 165, 0), cc_wht = display.color565(16, 16, 16), myBLK = display.color565(0, 0, 0);
    char sentTxtON[20] = {0};

    if (EEPROM.read(28) == 2)
      display.fillRect(0, 25, 64, 7, myBLK);
    else if (EEPROM.read(28) == 1)
      display.fillRect(0, 26, 64, 6, myBLK);

    display.setFont(&Font4x5Fixed);
    display.setTextColor(cc_org);
    display.setCursor(1, 30);
    strcpy_P(sentTxtON, var205);
    display.print(sentTxtON);
    display.setFont();
    EEPROM.write(60, 12);
    EEPROM.write(57, 9);
  }

  // exit
  if (EEPROM.read(57) == 5)
  {
    uint16_t cc_dka = display.color565(189, 183, 107), myBLK = display.color565(0, 0, 0);
    char sentTxtON[20] = {0};

    memset(&mySendData, '\0', sizeof mySendData);
    display.drawPixel(60, 7, myBLK);
    display.fillRect(20, 26, 44, 6, myBLK);
    display.setFont(&Font4x5Fixed);
    display.setTextColor(cc_dka);
    display.setCursor(21, 30);
    strcpy_P(sentTxtON, var209);
    display.print(sentTxtON);
    display.setFont();
    EEPROM.write(57, 6);
  }

  // received report
  if (EEPROM.read(51) == 4)
  {
    uint16_t cc_sal = display.color565(250, 128, 114), myBLK = display.color565(0, 0, 0);
    char sentTxtON[20] = {0};
    display.drawPixel(60, 7, myBLK);
    display.fillRect(20, 26, 44, 6, myBLK);
    display.setFont(&Font4x5Fixed);
    display.setTextColor(cc_sal);
    display.setCursor(21, 30);
    strcpy_P(sentTxtON, var229);
    display.print(sentTxtON);
    display.setFont();

    unsigned short geteep11 = 0;
    geteep11 = ia;
    EEPROM.put2(368, geteep11); 
    EEPROM.write(363, mysendinc);
    EEPROM.write(364, EEPROM.read(21));
    EEPROM.write(59, 1);
    EEPROM.write(51, 11);
  }

  // prepare data to send
  if (EEPROM.read(51) == 8)
  {
    mySendData.msgType = DATA;
    mySendData.id = BOARD_PX;

    if (EEPROM.read(367) == 1)
    {
      if (EEPROM.read(20) == 1)
        mysendinc = 5;
      else if (EEPROM.read(20) == 2)
        mysendinc = 205;
      mySendData.sendcounter = mysendinc;
      EEPROM.write(367, 2);
    }
    else if (EEPROM.read(367) == 2)
    {
      if (EEPROM.read(20) == 1)
        mysendinc = 10;
      else if (EEPROM.read(20) == 2)
        mysendinc = 210;
      mySendData.sendcounter = mysendinc;
      EEPROM.write(367, 3);
    }
    else if (EEPROM.read(367) == 3)
    {
      if (EEPROM.read(20) == 1)
      {
        if ((ia >= 512) && (EEPROM.read(365) == 1))
        {
          mysendinc = 1;
          mySendData.sendcounter = mysendinc;
        }
        else if (ia < 512)
        {
          mysendinc++;
          mySendData.sendcounter = mysendinc;
        }
      }
      else if (EEPROM.read(20) == 2)
      {
        if ((ia >= 999) && (EEPROM.read(365) == 1))
        {
          mysendinc = 201;
          mySendData.sendcounter = mysendinc;
        }
        else if (ia < 999)
        {
          mysendinc++;
          mySendData.sendcounter = mysendinc;
        }
      }
    }

    char sentTxtON[20] = {0};
    strcpy(mySendData.aS, "");
    if (EEPROM.read(20) == 1)
    {
      strcpy_P(sentTxtON, var230);
      strncat(mySendData.aS, sentTxtON, strlen(sentTxtON));
    }
    EEPROM.write(21, EEPROM.read(21) + 1);
    if (EEPROM.read(20) == 1)
    {
      itoa(EEPROM.read(21), sentTxtON, 10);
      strcat(mySendData.aS, sentTxtON);
      strcpy_P(sentTxtON, eeMem2);
      strcat(mySendData.aS, sentTxtON);
    }
    strncat(mySendData.aS, prepData, strlen(prepData));
    if (EEPROM.read(20) == 1)
    {
      strcpy_P(sentTxtON, eeMem3);
      strcat(mySendData.aS, sentTxtON);
    }

    uint16_t cc_tan = display.color565(210, 180, 140), myBLK = display.color565(0, 0, 0);
    display.fillRect(20, 26, 44, 6, myBLK);
    display.setFont(&Font4x5Fixed);
    display.setTextColor(cc_tan);
    display.setCursor(21, 30);
    display.print(strlen(mySendData.aS));
    strcpy_P(sentTxtON, var214);
    display.print(sentTxtON);
    display.setFont();
    EEPROM.write(51, 15);
  }

  // data sent success
  if (EEPROM.read(51) == 17)
  {
    uint16_t cc_oli = display.color565(128, 128, 0), cc_tom = display.color565(255, 99, 17), myBLK = display.color565(0, 0, 0);
    char sentTxtON[20] = {0};
    display.setFont(&Font4x5Fixed);

    if (EEPROM.read(57) == 4)
    {
      display.fillRect(20, 26, 44, 6, myBLK);
      EEPROM.write(52, 0);
      EEPROM.write(362, 0);
      EEPROM.write(60, 203);
    }
    else if ((EEPROM.read(57) != 4) && (EEPROM.read(20) == 1 || EEPROM.read(20) == 2 || EEPROM.read(22) == 8))
    {
      display.fillRect(0, 26, 64, 6, myBLK);
      display.setTextColor(cc_tom);
      display.setCursor(1, 30);
      strcpy_P(sentTxtON, var239);
      display.print(sentTxtON);
      display.print(channel);

      if (EEPROM.read(60) > 183 && EEPROM.read(60) <= 186)
        EEPROM.write(60, 183);
      else if (EEPROM.read(60) == 187)
        EEPROM.write(60, 188);
    }

    display.setTextColor(cc_oli);
    display.setCursor(21, 30);
    strcpy_P(sentTxtON, var211);
    display.print(sentTxtON);
    display.setFont();

    if (EEPROM.read(366) >= 1 && EEPROM.read(366) <= 5)
      EEPROM.write(52, 0), EEPROM.write(366, 0);
    EEPROM.write(51, 18);
  }

  // data sent error
  if (EEPROM.read(51) == 9)
  {
    uint16_t cc_red = display.color565(16, 0, 0), cc_tom = display.color565(255, 99, 17), myBLK = display.color565(0, 0, 0);
    char sentTxtON[20] = {0};
    display.setFont(&Font4x5Fixed);

    if (EEPROM.read(57) == 4)
    {
      EEPROM.write(60, 204);
      display.fillRect(20, 26, 44, 6, myBLK);
    }
    else if ((EEPROM.read(57) != 4) && (EEPROM.read(20) == 1 || EEPROM.read(20) == 2 || EEPROM.read(22) == 8))
    {
      display.fillRect(0, 26, 64, 6, myBLK);
      display.setTextColor(cc_tom);
      display.setCursor(1, 30);
      strcpy_P(sentTxtON, var239);
      display.print(sentTxtON);
      display.print(channel);

      if (EEPROM.read(60) > 183 && EEPROM.read(60) <= 186)
        EEPROM.write(60, 183);
      else if (EEPROM.read(60) == 187)
        EEPROM.write(60, 188);
    }

    display.setTextColor(cc_red);
    display.setCursor(21, 30);
    strcpy_P(sentTxtON, var212);
    display.print(sentTxtON);
    display.setFont();

    EEPROM.write(51, 10);
  }

  // data received
  if (EEPROM.read(51) == 5)
  {
    uint16_t cc_lgn = display.color565(86, 189, 16), myBLK = display.color565(0, 0, 0);
    display.drawPixel(60, 7, myGRN);

    char sentTxtON[20] = {0};
    display.fillRect(20, 26, 44, 6, myBLK);
    display.setFont(&Font4x5Fixed);
    display.setTextColor(cc_lgn);
    display.setCursor(21, 30);
    strcpy_P(sentTxtON, var207);
    display.print(sentTxtON);
    display.print(EEPROM.read(21));
    strcpy_P(sentTxtON, var208);
    display.print(sentTxtON);
    display.setFont();

    EEPROM.write(51, 6);
  }
}

void routerConnect5()
{
  char sentTxtON[20] = {0}, sentTxtOFF[20] = {0};
  uint16_t myBLK = display.color565(0, 0, 0);
  unsigned short myear = 0, setaYY = 0;

  switch (EEPROM.read(60))
  {
  // RESTART SYSTEM
  case 52:
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 53:
    EEPROM.write(60, EEPROM.read(60) + 1);
    strcpy_P(sentTxtOFF, varOFFR), ws.textAll(sentTxtOFF);
    break;
  case 54:
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 55:
    ESP.restart(), EEPROM.write(60, 0);
    break;

  case 57:
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 58:
    display.clearDisplay();
    strcpy_P(sentTxtOFF, varOFFS), ws.textAll(sentTxtOFF);
    EEPROM.write(60, 0);
    break;

  case 151:
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 152:
    pixStart5();
    EEPROM.write(60, 59);
    break;

  case 59:
    EEPROM.write(5, EEPROM.read(5) + 1);
    EEPROM.write(6, EEPROM.read(6) + 1);
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 60:
    wtCheck2();
    EEPROM.write(60, 133);
    break;
  case 133:

    EEPROM.write(29, 3);
    if (EEPROM.read(28) == 1)
    {
      mainFunction1();
    }

    if (numApplesEaten == 7)
      strcpy_P(sentTxtOFF, varOFFG), ws.textAll(sentTxtOFF), numApplesEaten = 0;
    else if (numApplesEaten == 8)
      strcpy_P(sentTxtOFF, varOFFH), ws.textAll(sentTxtOFF), numApplesEaten = 0;
    else
      strcpy_P(sentTxtOFF, varOFFS), ws.textAll(sentTxtOFF);
    EEPROM.write(60, 66);
    break;

  case 61:
    WiFi.disconnect(true);
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 62:
    startWiFiAP();
    strcpy_P(sentTxtOFF, varOFF1), ws.textAll(sentTxtOFF);
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 63:
    EEPROM.write(59, 100);
    EEPROM.write(60, 0);
    break;

  case 64:
    WiFi.softAPdisconnect(true);
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 65:
    strcpy_P(sentTxtOFF, varOFF1), ws.textAll(sentTxtOFF);
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;

  case 74:
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 75:
    strcpy_P(sentTxtOFF, varOFF3), ws.textAll(sentTxtOFF);
    EEPROM.write(60, 127);
    break;

  case 76:
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 77:
  {
    int8_t getTempM = -127;
    EEPROM.put1(392, getTempM);
    EEPROM.write(31, 2);
    EEPROM.write(60, 66);
    strcpy_P(sentTxtOFF, varOFF4), ws.textAll(sentTxtOFF);
  }
  break;

  case 148:
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 149:
    EEPROM.write(60, 160);
    break;
  case 160:
  {
    EEPROM.write(60, 161);
  }
  break;
  case 161:
    EEPROM.write(60, 162);
    break;
  case 162:
    if (EEPROM.read(22) == 8 || EEPROM.read(22) == 9)
      EEPROM.write(60, 79);
    else if (EEPROM.read(22) == 14)
      EEPROM.write(60, 6);
    break;

  case 141:
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 142:
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 143:
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 144:
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 145:
    if (EEPROM.read(28) == 1)
    {
      stopClkDispl();
      display.fillRect(0, 26, 64, 6, myBLK);
    }
    else if (EEPROM.read(28) == 2)
    {
      EEPROM.write(15, 1);
      sp7_Zero1();
    }

    EEPROM.write(22, 0);
    EEPROM.write(24, 0);
    EEPROM.write(60, 66);
    break;

  case 2:
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 3:
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;

  case 82:
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 83:
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 84:
    display.clearDisplay();
    beautCol1();
    display.setTextColor(myCYN);
    display.setCursor(2, 8);
    strcpy_P(sentTxtON, var060);
    display.print(sentTxtON);
    display.setCursor(2, 13);
    strcpy_P(sentTxtON, var061);
    display.print(sentTxtON);
    display.setCursor(2, 23);
    strcpy_P(sentTxtON, var062);
    display.print(sentTxtON);
    strcpy_P(sentTxtOFF, varOFF7), ws.textAll(sentTxtOFF);
    EEPROM.write(60, 0);
    break;

  case 86:
    getBrwsTimeDate();

    EEPROM.get2(67, myear);
    if ((iseconds >= 0 && iseconds <= 59) && (minutes >= 0 && minutes <= 59) && (hours >= 0 && hours <= 23) && (mdays >= 1 && mdays <= 7) && (mdate >= 0 && mdate <= 31) && (mmonth >= 1 && mmonth <= 12) && (myear >= 2019 && myear <= 3000))
      EEPROM.write(60, EEPROM.read(60) + 1);
    else
      EEPROM.write(60, 0);
    break;
  case 87:
  {
    display.clearDisplay();
    char lineTime[15] = {0};
    strcpy_P(lineTime, lineTime4);
    EEPROM.put(286, lineTime);
    strcpy_P(sentTxtOFF, varOFF8), ws.textAll(sentTxtOFF);
    sp7_Zero1();
    if (EEPROM.read(28) == 1)
      EEPROM.write(71, 49), bwCnt_gap = 0;
    EEPROM.write(59, 100);
    EEPROM.write(60, 0);
  }
  break;

  case 90:
    getBrwsTimeDate();
    EEPROM.get2(65, setaYY);
    if (setaYY >= 2022)
      EEPROM.write(60, EEPROM.read(60) + 1);
    else
      EEPROM.write(60, 0);
    break;
  case 91:
  {
    display.clearDisplay();
    char lineTime[15] = {0};
    strcpy_P(lineTime, lineTime5);
    EEPROM.put(286, lineTime);
    strcpy_P(sentTxtOFF, varOFF9), ws.textAll(sentTxtOFF);
    sp7_Zero1();
    if (EEPROM.read(28) == 1)
      EEPROM.write(71, 49), bwCnt_gap = 0;
    EEPROM.write(59, 100);
    EEPROM.write(60, 0);
  }
  break;

  case 93:
    getBrwsTimeDate();
    EEPROM.get2(65, setaYY);
    if (setaYY >= 2022)
      EEPROM.write(60, EEPROM.read(60) + 1);
    else
      EEPROM.write(60, 13);
    break;
  case 94:
    display.clearDisplay();
    beautCol1();
    display.setCursor(2, 6);
    strcpy_P(sentTxtON, var063);
    display.print(sentTxtON);
    display.setCursor(2, 13);
    strcpy_P(sentTxtON, var051);
    display.print(sentTxtON);
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 95:
  {
    display.clearDisplay();
    char lineTime[15] = {0};
    strcpy_P(lineTime, lineTime5);
    EEPROM.put(286, lineTime);

    if (EEPROM.read(28) == 1)
      mainFunction1();
    else if (EEPROM.read(28) == 2)
      mainFunction2();
    else if (EEPROM.read(28) == 3)
      mainFunction3();
  }
  break;

  case 153:
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 154:
    EEPROM.write(60, 123);
    break;

  case 101:
    EEPROM.write(5, EEPROM.read(5) + 1);
    EEPROM.write(7, EEPROM.read(7) + 1);
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 102:
    EEPROM.write(394, 0);
    EEPROM.write(395, 0);
    EEPROM.write(396, 0);
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 103:
    wtCheck2();
    EEPROM.write(28, 2);
    if (numApplesEaten == 7)
      strcpy_P(sentTxtOFF, varOFFG), ws.textAll(sentTxtOFF), numApplesEaten = 0;
    else
      strcpy_P(sentTxtOFF, varOFFS), ws.textAll(sentTxtOFF);
    EEPROM.write(60, 139);
    break;
  case 139:
    EEPROM.write(71, 205);
    EEPROM.write(60, 104);
    display.clearDisplay();
    break;

  case 155:
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 156:
    EEPROM.write(60, 124);
    break;

  case 105:
    EEPROM.write(5, EEPROM.read(5) + 1);
    EEPROM.write(8, EEPROM.read(8) + 1);
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 106:
    EEPROM.write(394, 0);
    EEPROM.write(395, 0);
    EEPROM.write(396, 0);
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 107:
    wtCheck2();
    EEPROM.write(28, 3);
    if (numApplesEaten == 8)
      strcpy_P(sentTxtOFF, varOFFH), ws.textAll(sentTxtOFF), numApplesEaten = 0;
    else
      strcpy_P(sentTxtOFF, varOFFS), ws.textAll(sentTxtOFF);
    EEPROM.write(60, 140);
    break;
  case 140:
    EEPROM.write(71, 205);
    EEPROM.write(60, 104);
    display.clearDisplay();
    break;

  case 109:
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 110:
    EEPROM.write(31, 1);
    EEPROM.write(60, 66);
    strcpy_P(sentTxtOFF, varOFFT), ws.textAll(sentTxtOFF);
    break;

  case 111:
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 112:
  {
    EEPROM.write(34, 1);
    EEPROM.write(60, 28);
    EEPROM.write(56, PLAYING), EEPROM.write(55, WAIT);

    char actPLAY[10] = {0};
    strcpy_P(actPLAY, actPLAY2);
    EEPROM.put(362, actPLAY);
  }
  break;

  case 113:
  {
    EEPROM.write(35, 1);
    EEPROM.write(60, 28);
    EEPROM.write(56, PAUSED);

    char actPLAY[10] = {0};
    strcpy_P(actPLAY, actPLAY1);
    EEPROM.put(362, actPLAY);
  }
  break;
  case 114:
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 115:
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 116:
    EEPROM.write(34, 0), EEPROM.write(60, 0);
    break;

  case 119:
    EEPROM.write(60, EEPROM.read(60) + 1);
    break;
  case 120:
  {
    EEPROM.write(60, 28);

    char actPLAY[10] = {0};
    strcpy_P(actPLAY, actPLAY3);
    EEPROM.put(362, actPLAY);
  }
  break;
  case 121:
  {
    EEPROM.write(60, 28);

    char actPLAY[10] = {0};
    strcpy_P(actPLAY, actPLAY4);
    EEPROM.put(362, actPLAY);
  }
  break;
  case 122:
    display.fillRect(0, 0, 64, 16, myBLK);
    resetGameVariables();
    drawBoard(), drawPlayer();
    EEPROM.write(56, PAUSED), EEPROM.write(34, 0), EEPROM.write(60, 0);
    break;
  }
}

void routerConnect()
{
  unsigned long rout_past = 0 ;
  EEPROM.get(376, rout_past);

  unsigned long now_rout = millis();
  if ((unsigned long)now_rout - rout_past >= 1000UL)
  {
    rout_past = now_rout;
    EEPROM.put(376, rout_past);

    checkCleanClients();
    updateTimeBuzzr();

    routerConnect1();
    routerConnect2();
    routerConnect3();
    routerConnect4();
    routerConnect5();
  }
}

void playLoop()
{
  unsigned long play_last = 0;
  EEPROM.get(380, play_last);

  unsigned long play_now = millis();
  if ((unsigned long)play_now - play_last >= play_gap)
  {
    play_last = play_now;
    EEPROM.put(380, play_last);

    if (EEPROM.read(25) == 1)
      playBuzz(), playVibr();
  }
}

// ------------------ SNAKE GAME ------------------------
void defineBoard()
{
  for (int i = 0; i < COLS; i++)
  {
    board[0][i] = 1;
    board[ROWS - 1][i] = 1;
  }
}

void generateRandomBoard()
{
  // clear the existing board first
  for (int i = 1; i < ROWS - 1; i++)
  {
    for (int j = 0; j < COLS; j++)
    {
      if (j == 0 || j == (COLS - 1))
      {
        board[i][j] = 1;
      }
      else
      {
        board[i][j] = 0;
      }
    }
  }
}

void startGame()
{
  EEPROM.write(34, 1), EEPROM.write(36, 1);

  if (EEPROM.read(56) == GAME_OVER)
  {
    char sentTxtON[20] = {0};
    uint16_t myBLU = display.color565(0, 0, 255), myBLK = display.color565(0, 0, 0);

    display.fillRect(0, 0, 64, 16, myBLK);
    display.setTextColor(myRED);
    display.setCursor(2, 8);
    display.drawRect(0, 0, 64, 16, myBLU);
    strcpy_P(sentTxtON, var064);
    display.print(sentTxtON);

    EEPROM.write(60, 119);
  }
  else
    EEPROM.write(60, 121);
}

void resetGameVariables()
{
  EEPROM.write(56, INITIALIZING);
  generateRandomBoard();
  bool found = 0;
  // generate a random spot for the user to start, and a random direction
  while (!found)
  {
    // start the player in a random spot
    playerHead.xLine = random(1, ROWS - 1);
    playerHead.yLine = random(1, COLS - 1);
    int startDirection = random(0, 2);

    if (playerHas5Moves())
    {
      found = 1;
    }
  }

  generateApple();

  playerLength = 1;
  player[0].xLine = playerHead.xLine;
  player[0].yLine = playerHead.yLine;

  lastClockTick = millis();
  gameRate = 400;
  numApplesEaten = 0;
}
// make sure with the random start that the player has a few moves to react
bool playerHas5Moves()
{
  for (int i = 0; i < 5; i++)
  {
    switch (EEPROM.read(55))
    {
    case DOWN:
      if (board[playerHead.xLine][playerHead.yLine + i] == 1)
      {
        return false;
      }
      break;
    case UP:
      if (board[playerHead.xLine][playerHead.yLine - i] == 1)
      {
        return false;
      }
      break;
    case LEFT:
      if (board[playerHead.xLine - i][playerHead.yLine] == 1)
      {
        return false;
      }
      break;
    case RIGHT:
      if (board[playerHead.xLine + i][playerHead.yLine] == 1)
      {
        return false;
      }
      break;
    }
  }
  return true;
}

void generateApple()
{
  bool found = 0;
  // make sure that the apple doesn't end up on a board coordinate or on top of the player
  while (!found)
  {
    apple.xLine = random(1, ROWS - 1);
    apple.yLine = random(1, COLS - 1);
    if (!playerContainsCoordinates(apple.xLine, apple.yLine) && !boardContainsCoordinates(apple.xLine, apple.yLine))
    {
      found = 1;
    }
  }
  display.drawPixel(apple.xLine, apple.yLine, myRED);
}

bool playerContainsCoordinates(int xLine, int yLine)
{
  for (int i = 0; i < playerLength; i++)
  {
    if (player[i].xLine == xLine && player[i].yLine == yLine)
    {
      return true;
    }
  }
  return false;
}

bool boardContainsCoordinates(int xLine, int yLine)
{
  return board[xLine][yLine] == 1;
}

void drawPlayer()
{
  for (int i = 0; i < playerLength; i++)
  {
    display.drawPixel(player[i].xLine, player[i].yLine, playerColor);
  }
}

void drawBoard()
{
  uint16_t cc_blu = display.color565(0, 0, 128), myBLK = display.color565(0, 0, 0);
  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLS; j++)
    {
      if (i == 0 && j == 0)
      {
        display.drawPixel(i, j, playerColor);
      }
      else if (board[i][j] == 1)
      {
        display.drawPixel(i, j, cc_blu);
      }
      else if (i == apple.xLine && j == apple.yLine)
      {
        display.drawPixel(i, j, myRED);
      }
      else
      {
        display.drawPixel(i, j, myBLK);
      }
    }
  }
}

void advancePlayer()
{
  uint16_t myBLK = display.color565(0, 0, 0);
  if (EEPROM.read(55) == UP)
  {
    playerHead.yLine -= 1;
  }
  else if (EEPROM.read(55) == DOWN)
  {
    playerHead.yLine += 1;
  }
  else if (EEPROM.read(55) == LEFT)
  {
    playerHead.xLine -= 1;
  }
  else if (EEPROM.read(55) == RIGHT)
  {
    playerHead.xLine += 1;
  }
  // see if this point already exists in the player's matrix
  for (int i = 0; i < playerLength; i++)
  {
    if (player[i].xLine == playerHead.xLine && player[i].yLine == playerHead.yLine)
    {
      // gameOver();
    }
  }
  if (!detectAppleEaten())
  {
    display.drawPixel(player[playerLength - 1].xLine, player[playerLength - 1].yLine, myBLK);
  }
  display.drawPixel(playerHead.xLine, playerHead.yLine, playerColor);
  for (int i = playerLength - 1; i > 0; i--)
  {
    player[i] = player[i - 1];
  }
  player[0].xLine = playerHead.xLine;
  player[0].yLine = playerHead.yLine;
}

void changePlayerColor()
{
  uint16_t myWHT = display.color565(255, 255, 255), myYLW = display.color565(255, 255, 0), myMAG = display.color565(255, 0, 255);

  if (EEPROM.read(56) != PLAYING)
    EEPROM.write(34, 1);

  if (playerColor == myGRN)
  {
    playerColor = myWHT;

    char actPLAY[10] = {0};
    strcpy_P(actPLAY, actPLAY5);
    EEPROM.put(362, actPLAY);
  }
  else if (playerColor == myWHT)
  {
    playerColor = myYLW;

    char actPLAY[10] = {0};
    strcpy_P(actPLAY, actPLAY6);
    EEPROM.put(362, actPLAY);
  }
  else if (playerColor == myYLW)
  {
    playerColor = myCYN;

    char actPLAY[10] = {0};
    strcpy_P(actPLAY, actPLAY7);
    EEPROM.put(362, actPLAY);
  }
  else if (playerColor == myCYN)
  {
    playerColor = myMAG;

    char actPLAY[10] = {0};
    strcpy_P(actPLAY, actPLAY8);
    EEPROM.put(362, actPLAY);
  }
  else
  {
    playerColor = myGRN;

    char actPLAY[10] = {0};
    strcpy_P(actPLAY, actPLAY9);
    EEPROM.put(362, actPLAY);
  }

  for (int i = 0; i < playerLength - 1; i++)
  {
    display.drawPixel(player[i].xLine, player[i].yLine, playerColor);
  }

  EEPROM.write(60, 28);
  if (EEPROM.read(56) != PLAYING)
    EEPROM.write(34, 0);
}

void detectCollision()
{
  if (board[playerHead.xLine][playerHead.yLine] == 1)
  {
    gameOver();
  }
}

boolean detectAppleEaten()
{
  if (playerHead.xLine == apple.xLine && playerHead.yLine == apple.yLine)
  {
    EEPROM.write(45, 1), play_gap = 20;
    EEPROM.write(60, 28);

    char actPLAY[10] = {0};
    strcpy_P(actPLAY, actPLAY10);
    EEPROM.put(362, actPLAY);

    numApplesEaten++;
    playerLength += 1;
    player[playerLength - 1].xLine = playerHead.xLine;
    player[playerLength - 1].yLine = playerHead.yLine;
    display.drawPixel(playerHead.xLine, playerHead.yLine, playerColor);
    if (numApplesEaten % 4 == 0 && gameRate > 40)
    {
      gameRate -= 20;
    }
    generateApple();

    char sentTxtOFF[20] = {0};
    strcpy_P(sentTxtOFF, varOFFA), ws.textAll(sentTxtOFF);
    return true;
  }
  return false;
}

void gameOver()
{
  uint16_t myBLU = display.color565(0, 0, 255), myBLK = display.color565(0, 0, 0);

  EEPROM.write(45, 1), play_gap = 100;
  EEPROM.write(56, GAME_OVER);
  char sentTxtOFF[20] = {0};
  strcpy_P(sentTxtOFF, varOFFO), ws.textAll(sentTxtOFF);
  display.fillRect(0, 0, 64, 16, myBLK);

  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLS; j++)
    {
      display.drawPixel(i, j, myBLU);
    }
  }
  startGame();
}
// ----------------- GAME END --------------------------

void pinSetup()
{
  pinMode(vibMotor, FUNCTION_3);
  pinMode(vibMotor, OUTPUT);
  analogWrite(vibMotor, 0);

  pinMode(buzzPin, OUTPUT);
  analogWrite(buzzPin, 0);
}

void pixSetUp()
{
  // Define your display layout here, e.g. 1/64 step
  display.begin(16);

  display.setFastUpdate(true);
  display.setRotation(0); // we don't wrap text so it scrolls nicely
  display_update_enable(true);
  display.setTextSize(1);
}

void eepromSetup()
{
  uint16_t myBLK = display.color565(0, 0, 0), myWHT = display.color565(255, 255, 255), myMAG = display.color565(255, 0, 255), cc_ord = display.color565(184, 16, 0);
  char sentTxtON[20] = {0};

  // initialize EEPROM with predefined size
  EEPROM.begin(EEPROM_SIZE);

  display.fillRect(1, 1, 62, 30, myBLK);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(cc_ord);
  display.setCursor(2, 8);
  strcpy_P(sentTxtON, var160);
  display.print(sentTxtON);
  display.setCursor(2, 15);
  strcpy_P(sentTxtON, var161);
  display.print(sentTxtON);
  display.setTextColor(myWHT);
  display.setCursor(2, 22);
  strcpy_P(sentTxtON, var168);
  display.print(sentTxtON);
  display.setTextColor(myMAG);
  display.print(EEPROM.read(0));
  delayBuzz(100, 900);

  display.fillRect(1, 1, 62, 30, myBLK);
  display.setTextColor(cc_ord);
  display.setCursor(2, 8);
  strcpy_P(sentTxtON, var162);
  display.print(sentTxtON);
  display.setCursor(2, 15);
  strcpy_P(sentTxtON, var163);
  display.print(sentTxtON);
  display.setCursor(2, 22);
  display.setTextColor(myMAG);
  display.print(EEPROM_SIZE);
  delayBuzz(100, 900);
}

void eepromClear()
{
  uint16_t myBLK = display.color565(0, 0, 0), myWHT = display.color565(255, 255, 255), myMAG = display.color565(255, 0, 255), cc_ord = display.color565(184, 16, 0);
  char sentTxtON[20] = {0};

  // code to erase EEPROM
  if (EEPROM.read(0) == 0)
  {
    for (int i = 0; i < EEPROM_SIZE; i++)
      EEPROM.write(i, 0);
    EEPROM.write(28, 1);

    display.fillRect(1, 1, 62, 30, myBLK);
    display.setFont(&Font4x5Fixed);
    display.setTextColor(cc_ord);
    display.setCursor(2, 8);
    strcpy_P(sentTxtON, var160);
    display.print(sentTxtON);
    display.setCursor(2, 15);
    strcpy_P(sentTxtON, var164);
    display.print(sentTxtON);
    display.setTextColor(myWHT);
    display.setCursor(2, 22);
    strcpy_P(sentTxtON, var168);
    display.print(sentTxtON);
    display.setTextColor(myMAG);
    display.print(EEPROM.read(0));
  }
  else if (EEPROM.read(0) == 1)
  {
    for (int i = 11; i < 100; i++)
      if (i != 28 && i != 37)
        EEPROM.write(i, 0);
    for (int i = 130; i < EEPROM_SIZE; i++)
      if (i != 390 && i != 391 && i != 393 && i != 394 && i != 395 && i != 396)
        EEPROM.write(i, 0);

    display.fillRect(1, 1, 62, 30, myBLK);
    display.setFont(&Font4x5Fixed);
    display.setTextColor(cc_ord);
    display.setCursor(2, 8);
    strcpy_P(sentTxtON, var165);
    display.print(sentTxtON);
    display.setCursor(2, 15);
    strcpy_P(sentTxtON, var166);
    display.print(sentTxtON);
    display.setCursor(2, 22);
    strcpy_P(sentTxtON, var167);
    display.print(sentTxtON);
    display.setTextColor(myWHT);
    display.setCursor(2, 29);
    strcpy_P(sentTxtON, var177);
    display.print(sentTxtON);
    display.setTextColor(myMAG);
    display.print(EEPROM.read(64));
  }
  delayBuzz(100, 1900);

  EEPROM.commit();

  EEPROM.write(23, 1);

  display.fillRect(1, 1, 62, 30, myBLK);
  display.setTextColor(myWHT);
  display.setCursor(2, 7);
  strcpy_P(sentTxtON, var178);
  display.print(sentTxtON);
  display.setTextColor(myMAG);

  display.setTextColor(myWHT);
  display.setCursor(2, 14);
  strcpy_P(sentTxtON, var179);
  display.print(sentTxtON);
  display.setTextColor(myMAG);
  display.print(EEPROM.get(1, minsALL));

  display.setTextColor(myWHT);
  display.setCursor(2, 21);
  strcpy_P(sentTxtON, var180);
  display.print(sentTxtON);
  display.setTextColor(myMAG);
  display.print(EEPROM.read(5));

  display.setTextColor(myWHT);
  display.setCursor(2, 28);
  strcpy_P(sentTxtON, var181);
  display.print(sentTxtON);
  display.setTextColor(myMAG);
  display.print(EEPROM.read(6));

  delayBuzz(100, 1900);

  display.fillRect(1, 1, 62, 30, myBLK);
  display.setTextColor(myWHT);
  display.setCursor(2, 7);
  strcpy_P(sentTxtON, var182);
  display.print(sentTxtON);
  display.setTextColor(cc_ord);
  display.print(EEPROM.read(7));

  display.setTextColor(myWHT);
  display.setCursor(2, 14);
  strcpy_P(sentTxtON, var183);
  display.print(sentTxtON);
  display.setTextColor(cc_ord);
  display.print(EEPROM.read(8));

  display.setTextColor(myWHT);
  display.setCursor(2, 21);
  strcpy_P(sentTxtON, var184);
  display.print(sentTxtON);
  display.setTextColor(cc_ord);
  display.print(EEPROM.read(9));

  display.setTextColor(myWHT);
  display.setCursor(2, 28);
  strcpy_P(sentTxtON, var185);
  display.print(sentTxtON);
  display.setTextColor(cc_ord);
  display.print(EEPROM.read(10));

  delayBuzz(100, 1900);
  display.setFont();
}

void eepromWriteValues()
{
  EEPROM.put(1, minsALL);
}

void startPixUche()
{
  char sentTxtON[20] = {0};
  uint16_t myWHT = display.color565(255, 255, 255), myMAG = display.color565(255, 0, 255), myBLK = display.color565(0, 0, 0);

  display.fillRect(1, 1, 62, 30, myBLK);
  display.setTextColor(myWHT);
  display.setCursor(3, 4);
  strcpy_P(sentTxtON, var073);
  display.print(sentTxtON);
  display.setTextColor(myMAG);
  display.setCursor(3, 19);
  strcpy_P(sentTxtON, var074);
  display.print(sentTxtON);
  delayBuzz(500, 1500);
}

void startSPrint()
{
  uint16_t myBLK = display.color565(0, 0, 0);

  for (uint8_t t = 5; t > 0; t--)
  {
    display.fillRect(1, 1, 62, 30, myBLK);
    display.setTextSize(3);
    display.setTextColor(myCYN);
    display.setCursor(24, 5);
    display.print(t);

    delayBuzz(200, 800);
  }
  display.setTextSize(1);
}

void pixStart0()
{
  char sentTxtON[20] = {0};
  uint16_t myBLK = display.color565(0, 0, 0);
  display.fillRect(1, 1, 62, 30, myBLK);
  display.setTextColor(myCYN);
  display.setCursor(2, 8);
  strcpy_P(sentTxtON, var075);
  display.print(sentTxtON);
  display.setCursor(2, 18);
  strcpy_P(sentTxtON, var076);
  display.print(sentTxtON);
  delayBuzz(800, 1200);

  display.fillRect(1, 1, 62, 30, myBLK);
  display.setCursor(2, 8);
  strcpy_P(sentTxtON, var077);
  display.print(sentTxtON);
  display.setCursor(2, 18);
  strcpy_P(sentTxtON, var078);
  display.print(sentTxtON);
  delayBuzz(100, 900);
}

void startOTA()
{
  uint16_t myYLW = display.color565(255, 255, 0), myBLK = display.color565(0, 0, 0);
  display.setFont();
  display.setTextSize(1);

  // Add support for OTA ************************
  ArduinoOTA.setHostname("PIXELCLOCK");
  ArduinoOTA.onStart([]()
                     {
        dimPixel1();
    EEPROM.write(0, 1);
    EEPROM.write(129, EEPROM.read(129) + 1);
    EEPROM.commit();
    ws.enable(false);
    ws.closeAll();
    EEPROM.write(46, 0), play_gap = 0;
    display.setFont();
    display.setTextSize(1);

    char sentTxtON[20] = {0};
    uint16_t cc_pre = display.color565(64, 0, 32), myBLU = display.color565(0, 0, 255), myYLW = display.color565(255, 255, 0), myWHT = display.color565(255, 255, 255), myMAG = display.color565(255, 0, 255), myBLK = display.color565(0, 0, 0);

    String type;
    if (ArduinoOTA.getCommand() == U_FLASH) // U_FLASH
      type = "Sketch";
    else // U_SPIFFS
      type = "Filesystem";

    display.clearDisplay();
    beautCol1();
    display.setTextColor(myCYN);
    display.setCursor(2, 8);
    strcpy_P(sentTxtON, var079);
    display.print(sentTxtON);
    display.setCursor(2, 18);
    strcpy_P(sentTxtON, var076);
    display.print(sentTxtON);
    display.setFont();
    delayBuzz(800, 200);

    display.setFont(&Font4x5Fixed);
    display.fillRect(1, 1, 62, 30, myBLK);
    display.setCursor(2, 8);
    strcpy_P(sentTxtON, var080);
    display.print(sentTxtON);
    display.setTextColor(cc_pre);
    display.setCursor(2, 18);
    display.print(type);
    display.setTextColor(myWHT);
    display.setCursor(2, 28);
    strcpy_P(sentTxtON, var186);
    display.print(sentTxtON);
    display.setTextColor(myMAG);
    display.print(EEPROM.read(129));
    display.setFont();
    delayBuzz(100, 1900);
    display.fillRect(1, 1, 62, 30, myBLK); });
  display.setTextSize(1);

  ArduinoOTA.onProgress([](unsigned int progress, unsigned int total)
                        {
    char sentTxtON[20] = {0};
    uint16_t cc_pre = display.color565(64, 0, 32), myBLK = display.color565(0, 0, 0);

    display.setTextColor(myGRN);
    display.setCursor(2, 2);
    strcpy_P(sentTxtON, var081);
    display.print(sentTxtON);
    display.setFont(&Font4x5Fixed);
    display.setTextColor(myCYN);
    display.setCursor(2, 17);
    strcpy_P(sentTxtON, var082);
    display.print(sentTxtON);
    display.setFont();
    display.setTextColor(cc_pre);
    display.setCursor(2, 22);
    display.fillRect(1, 22, 62, 9, myBLK);
    display.print((progress / (total / 100)));
    strcpy_P(sentTxtON, var002);
    display.print(sentTxtON);
    delayBuzz(10, 10);
    if (ArduinoOTA.getCommand() == U_FLASH)
    {
      // if ((progress / (total / 100)) >= 100)
      //   delay(1000), ESP.restart();
    }
    else
    {
      delay(10000);
      if ((progress / (total / 100)) >= 40)
        ESP.restart();
    } });

  ArduinoOTA.onEnd([]()
                   {
    char sentTxtON[20] = {0};
    uint16_t myMAG = display.color565(255, 0, 255), myBLK = display.color565(0, 0, 0);

    display.fillRect(1, 1, 62, 30, myBLK);
    display.setTextColor(myMAG);
    display.setCursor(2, 8);
    strcpy_P(sentTxtON, var079);
    display.print(sentTxtON);
    display.setCursor(2, 18);
    strcpy_P(sentTxtON, var083);
    display.print(sentTxtON);
    delayBuzz(500, 500); });

  ArduinoOTA.onError([](ota_error_t error)
                     {
    char sentTxtON[20] = {0};
    uint16_t myYLW = display.color565(255, 255, 0), myBLK = display.color565(0, 0, 0);
    (void)error;
    if (error == OTA_AUTH_ERROR)
    {
      display.fillRect(1, 1, 62, 30, myBLK);
      display.setTextColor(myYLW);
      display.setCursor(2, 8);
      strcpy_P(sentTxtON, var084);
      display.print(sentTxtON);
      display.setCursor(2, 18);
      strcpy_P(sentTxtON, var085);
      display.print(sentTxtON);
    }
    else if (error == OTA_BEGIN_ERROR)
    {
      display.fillRect(1, 1, 62, 30, myBLK);
      display.setTextColor(myYLW);
      display.setCursor(2, 8);
      strcpy_P(sentTxtON, var086);
      display.print(sentTxtON);
      display.setCursor(2, 18);
      strcpy_P(sentTxtON, var085);
      display.print(sentTxtON);
    }
    else if (error == OTA_CONNECT_ERROR)
    {
      display.fillRect(1, 1, 62, 30, myBLK);
      display.setTextColor(myYLW);
      display.setCursor(2, 8);
      strcpy_P(sentTxtON, var087);
      display.print(sentTxtON);
      display.setCursor(2, 18);
      strcpy_P(sentTxtON, var085);
      display.print(sentTxtON);
    }
    else if (error == OTA_RECEIVE_ERROR)
    {
      display.fillRect(1, 1, 62, 30, myBLK);
      display.setTextColor(myYLW);
      display.setCursor(2, 8);
      strcpy_P(sentTxtON, var088);
      display.print(sentTxtON);
      display.setCursor(2, 18);
      strcpy_P(sentTxtON, var085);
      display.print(sentTxtON);
    }
    else if (error == OTA_END_ERROR)
    {
      display.fillRect(1, 1, 62, 30, myBLK);
      display.setTextColor(myYLW);
      display.setCursor(2, 8);
      strcpy_P(sentTxtON, var089);
      display.print(sentTxtON);
      display.setCursor(2, 18);
      strcpy_P(sentTxtON, var085);
      display.print(sentTxtON);
    }
    else
    {
      display.fillRect(1, 1, 62, 30, myBLK);
      display.setTextColor(myYLW);
      display.setCursor(2, 8);
      strcpy_P(sentTxtON, var090);
      display.print(sentTxtON);
    }
    delayBuzz(100, 900);
    ESP.restart(); });

  // setup the OTA server
  ArduinoOTA.begin();

  char sentTxtON[20] = {0};
  display.fillRect(1, 1, 62, 30, myBLK);
  display.setTextColor(myYLW);
  display.setCursor(2, 8);
  strcpy_P(sentTxtON, var091);
  display.print(sentTxtON);
  display.setCursor(2, 18);
  strcpy_P(sentTxtON, var113);
  display.print(sentTxtON);
  delayBuzz(100, 900);
  // ************************************************
}

void sensorDispl()
{
  char sentTxtON[20] = {0};
  uint16_t myBLK = display.color565(0, 0, 0), myYLW = display.color565(255, 255, 0), cc_pre = display.color565(64, 0, 32);

  display.fillRect(1, 1, 62, 30, myBLK);
  display.setTextColor(cc_pre);
  display.setCursor(2, 8);
  strcpy_P(sentTxtON, var094);
  display.print(sentTxtON);
  display.setTextColor(myYLW);
  display.setCursor(2, 19);
  display.print(analogRead(A0));
  delayBuzz(100, 2900);
}

void fiftyNine100()
{
  char sentTxtON[20] = {0};
  uint16_t cc_dgr = display.color565(30, 30, 30), cc_pre = display.color565(64, 0, 32), cc_yld = display.color565(16, 32, 8), myBLK = display.color565(0, 0, 0);

  if (EEPROM.read(59) >= 100)
    EEPROM.write(59, EEPROM.read(59) + 1);

  if (EEPROM.read(59) == 101)
  {
    if (EEPROM.read(28) == 1)
      beautColBLK1(), beautCol4();
  }
  else if (EEPROM.read(59) == 102)
  {
    clear_RectBLK01();

    display.setFont(&Font4x5Fixed);
    display.setTextColor(cc_dgr);
    if (EEPROM.read(28) == 1)
      display.setCursor(2, 14);
    else if (EEPROM.read(28) == 2)
      display.setCursor(4, 15);
    strcpy_P(sentTxtON, var099);
    display.print(sentTxtON);
    if (EEPROM.read(28) == 1)
      display.setCursor(2, 22);
    else if (EEPROM.read(28) == 2)
      display.setCursor(4, 21);
    strcpy_P(sentTxtON, var100);
    display.print(sentTxtON);
    display.setFont();
  }
  else if (EEPROM.read(59) == 103)
  {
    clear_RectBLK01();
    EEPROM.write(59, 0);
    kickStartClock();
  }
}

void espNOWSetup()
{
  // Init ESP-NOW
  if (esp_now_init() != 0)
    return;

  // Set ESP-NOW Role
  esp_now_set_self_role(ESP_NOW_ROLE_COMBO);

  // get the status of Trasnmitted packet
  esp_now_register_send_cb(OnDataSent);

  // get recv packer info
  esp_now_register_recv_cb(OnDataRecv);
}

void startWiFiAP() // wifi AP
{
  char sentTxtON[20] = {0};
  uint16_t cc_gry = display.color565(128, 128, 128), cc_yld = display.color565(64, 64, 8), myBLK = display.color565(0, 0, 0);

  IPAddress apip(10, 0, 39, 1);
  IPAddress gateway(10, 0, 39, 0);
  IPAddress subnet(255, 255, 255, 0);

  uint8_t channelAP = 10;
  bool ssid_hidden = 0;
  uint8_t max_connection = 4;

  // Configuring Access Point Network
  if (EEPROM.read(28) == 0)
  {
    display.fillRect(1, 1, 62, 30, myBLK);
    display.setFont(&Font4x5Fixed);
    display.setTextColor(cc_gry);
    display.setCursor(12, 8);
    strcpy_P(sentTxtON, var101);
    display.print(sentTxtON);
    display.setCursor(8, 15);
    strcpy_P(sentTxtON, var102);
    display.print(sentTxtON);
    display.setFont();
    display.setTextColor(myCYN);
    display.setCursor(20, 20);
    strcpy_P(sentTxtON, var103);
    display.print(sentTxtON);
    delayBuzz(100, 900);
  }

  WiFi.softAPConfig(apip, gateway, subnet);
  WiFi.softAP("PixlRout", "uGRA3900", channelAP, ssid_hidden, max_connection);

  if (EEPROM.read(28) == 0)
  {
    display.fillRect(1, 1, 62, 30, myBLK);
    display.setFont(&Font4x5Fixed);
    display.setTextColor(cc_yld);
    display.setCursor(10, 8);
    strcpy_P(sentTxtON, var104);
    display.print(sentTxtON);
    display.setCursor(12, 15);
    strcpy_P(sentTxtON, var105);
    display.print(sentTxtON);
    display.setFont();
    display.setTextColor(myCYN);
    display.setCursor(20, 20);
    strcpy_P(sentTxtON, var103);
    display.print(sentTxtON);
    delayBuzz(200, 1800);
    display.fillRect(1, 1, 62, 30, myBLK);
  }
}

void startWiFiSTA() // Wifi Router
{
  char inputWZ1[20] = {0}, inputWZ2[20] = {0};
  char sentTxtON[20] = {0};
  uint16_t cc_yld = display.color565(64, 64, 8), myBLU = display.color565(0, 0, 255), myBLK = display.color565(0, 0, 0);

  WiFi.scanDelete();

  display.fillRect(1, 1, 62, 30, myBLK);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(cc_yld);
  if (EEPROM.read(28) == 1)
    display.setCursor(2, 14);
  else if (EEPROM.read(28) == 2)
    display.setCursor(4, 15), EEPROM.write(59, 99);
  strcpy_P(sentTxtON, var053);
  display.print(sentTxtON);
  if (EEPROM.read(28) == 1)
    display.setCursor(2, 22);
  else if (EEPROM.read(28) == 2)
    display.setCursor(4, 21);
  strcpy_P(sentTxtON, var054);
  display.print(sentTxtON);
  display.setFont();
  delayBuzz(100, 900);

  EEPROM.write(59, 0);
  EEPROM.write(60, 0);
  EEPROM.write(70, 0);
  while (strcmp(inputWZ1, "") == 0 && strcmp(inputWZ2, "") == 0)
  {
    WiFi.scanNetworks();
    uint8_t n = WiFi.scanComplete();

    if (n > 0)
    {
      for (int i = 0; i < n; i++)
      {
        if (WiFi.SSID(i) == "CONNECTME")
          strcpy(inputWZ1, "CONNECTME");
        if (WiFi.SSID(i) == "VMxxxxxxxx")
          strcpy(inputWZ2, "VMxxxxxxxx");
      }
      WiFi.scanDelete();

      if (strcmp(inputWZ1, "CONNECTME") == 0 && strcmp(inputWZ2, "VMxxxxxxxx") == 0)
      {
        strcpy(inputWZ2, "CONNECTME"), strcpy(inputWZ1, "PSWxxxxxx");
        EEPROM.write(43, 1);

        display.fillRect(1, 1, 62, 30, myBLK);
        display.setTextColor(myBLU);
        display.setCursor(2, 8);
        display.print(inputWZ2);
        display.setCursor(2, 18);
        strcpy_P(sentTxtON, var055);
        display.print(sentTxtON);
        delayBuzz(100, 900);
        break;
      }
      else if (strcmp(inputWZ1, "CONNECTME") != 0 && strcmp(inputWZ2, "VMxxxxxxxx") == 0)
      {
        strcpy(inputWZ2, "VMxxxxxxxx"), strcpy(inputWZ1, "PSWxxxxxxxx");
        EEPROM.write(43, 1);

        display.fillRect(1, 1, 62, 30, myBLK);
        display.setTextColor(myBLU);
        display.setCursor(2, 8);
        display.print(inputWZ2);
        display.setCursor(2, 18);
        strcpy_P(sentTxtON, var055);
        display.print(sentTxtON);
        delayBuzz(100, 900);
        break;
      }
      else if (strcmp(inputWZ1, "CONNECTME") == 0 && strcmp(inputWZ2, "VMxxxxxxxx") != 0)
      {
        strcpy(inputWZ2, "CONNECTME"), strcpy(inputWZ1, "PSWxxxxxx");
        EEPROM.write(43, 1);

        display.fillRect(1, 1, 62, 30, myBLK);
        display.setTextColor(myBLU);
        display.setCursor(2, 8);
        display.print(inputWZ2);
        display.setCursor(2, 18);
        strcpy_P(sentTxtON, var055);
        display.print(sentTxtON);
        delayBuzz(100, 900);
        break;
      }
    }
    if (EEPROM.read(70) == 200)
    {
      break;
    }
    display.fillRect(59, 26, 2, 2, myRED);
    delay(500);
    display.fillRect(59, 26, 2, 2, myBLK);
    delay(500);
    n = 0;
    EEPROM.write(70, EEPROM.read(70) + 1);
  }

  if (EEPROM.read(70) < 200)
  { // Connect to WiFi network
    WiFi.begin(inputWZ2, inputWZ1);
    while (WiFi.status() != WL_CONNECTED)
    {
      display.fillRect(1, 1, 62, 30, myBLK);
      display.setTextColor(myRED);
      display.setCursor(2, 2);
      strcpy_P(sentTxtON, var059);
      display.print(sentTxtON);
      display.setCursor(2, 12);
      display.print(inputWZ2);
      display.setCursor(2, 23);
      strcpy_P(sentTxtON, var106);
      display.print(sentTxtON);
      display.print(EEPROM.read(59));
      display.setTextColor(cc_yld);
      strcpy_P(sentTxtON, var000);
      display.print(sentTxtON);
      display.print(EEPROM.read(60));
      EEPROM.write(59, EEPROM.read(59) + 1);
      if (EEPROM.read(59) > 200)
      {
        EEPROM.write(60, EEPROM.read(60) + 1);
        EEPROM.write(59, 0);
        if (EEPROM.read(60) > 2)
        {
          break;
        }
      }
      delay(1000);
    }
    EEPROM.write(70, 201);
  }
  else
    startWiFiAP();
  EEPROM.write(70, 0);

  if (WiFi.status() == WL_CONNECTED) // check WiFi connection status
  {
    display.fillRect(1, 1, 62, 30, myBLK);
    display.setTextColor(myBLU);
    display.setCursor(2, 8);
    strcpy_P(sentTxtON, var031);
    display.print(sentTxtON);
    display.setCursor(2, 18);
    display.print(inputWZ2);
    delayBuzz(500, 1500);
  }
  else if (WiFi.status() != WL_CONNECTED)
  {
    display.fillRect(1, 1, 62, 30, myBLK);
    display.setTextColor(myRED);
    display.setCursor(2, 8);
    strcpy_P(sentTxtON, var056);
    display.print(sentTxtON);
    delayBuzz(500, 1500);
  }
}

void initWebSocket()
{
  char sentTxtON[20] = {0};
  uint16_t myBLK = display.color565(0, 0, 0);

  ws.onEvent(onEvent);
  server.addHandler(&ws);

  display.fillRect(1, 1, 62, 30, myBLK);
  display.setTextColor(myCYN);
  display.setCursor(2, 8);
  strcpy_P(sentTxtON, var107);
  display.print(sentTxtON);
  display.setCursor(2, 18);
  strcpy_P(sentTxtON, var105);
  display.print(sentTxtON);
  delayBuzz(100, 900);
}

void startServerAsynB()
{
  // Route for root / web page
  server.on("/ucheskillz.com", HTTP_GET, [](AsyncWebServerRequest *request)
            {
    if (!request->authenticate("admin", "PSWxxxxx"))
      return request->requestAuthentication();
    request->send_P(200, "text/html", mianWebPage_html, processor); });

  // Send a GET request to <ESP_IP>/get?input1=<inputMessage>
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request)
            {
    if (EEPROM.read(63) != 30 && EEPROM.read(63) != 31 && EEPROM.read(63) != 32 && EEPROM.read(63) != 57 && EEPROM.read(63) != 27 && EEPROM.read(63) != 0&& EEPROM.read(63) != 1)
    {
      if (request->hasParam("inputD1"))
      {
        request->send_P(200, "text/html", indexOffline_html, processor);
      }
      else if (request->hasParam("inputD2"))
      {
        request->send_P(200, "text/html", index0Offline_html, processor);
      }
      else if (request->hasParam("inputD3"))
      {
        request->send_P(200, "text/html", index1Offline_html, processor);
      }
      else if (request->hasParam("inputD4"))
      {
        request->send_P(200, "text/html", index2Offline_html, processor);
      }
      else
      {
        request->send(200, "text/html", errorPage_html);
      }
    }
    else
    {
      request->send(200, "text/html", errorPage_html);
    } });

  // // Route to load style.css file
  server.on("/styleOffline.css", HTTP_GET, [](AsyncWebServerRequest *request)
            { request->send_P(200, "text/css", styleOffline_css); });

  // Route to load script.js file
  server.on("/scriptOffline.js", HTTP_GET, [](AsyncWebServerRequest *request)
            { request->send_P(200, "text/js", scriptOffline_js); });

  char sentTxtON[20] = {0};
  uint16_t myBLK = display.color565(0, 0, 0);
  display.fillRect(1, 1, 62, 30, myBLK);
  display.setTextColor(myCYN);
  display.setCursor(2, 8);
  strcpy_P(sentTxtON, var175);
  display.print(sentTxtON);
  display.setCursor(2, 18);
  strcpy_P(sentTxtON, var105);
  display.print(sentTxtON);
  delayBuzz(100, 900);
}

void startServerAsynC()
{
  server.on("/readSNR", HTTP_GET, [](AsyncWebServerRequest *request)
            { 
  char sentTxtON[20] = {0};
        itoa(analogRead(A0), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });

  server.on("/readSTR", HTTP_GET, [](AsyncWebServerRequest *request)
            { 
  if (EEPROM.read(60) <= 180)
  {
    char sentTxtON[20] = {0};
    char sendRoomTH[10];
    strcpy(sendRoomTH, "");
    itoa(EEPROM.read(53), sentTxtON, 10);
    strcat(sendRoomTH, sentTxtON);
    itoa(EEPROM.read(54), sentTxtON, 10);
    strcat(sendRoomTH, sentTxtON);
    request->send(200, "text/plain", sendRoomTH);
  } });

  // Route to load eeprom22 value
  server.on("/read022", HTTP_GET, [](AsyncWebServerRequest *request)
            { 
  char sentTxtON[20] = {0};
        itoa(EEPROM.read(22), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  // Route to load eeprom39 value
  server.on("/read039", HTTP_GET, [](AsyncWebServerRequest *request)
            { 
  char sentTxtON[20] = {0};
        itoa(EEPROM.read(39), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/readIS1", HTTP_GET, [](AsyncWebServerRequest *request)
            {
    char inputS1[24] = {0};
    EEPROM.get(336, inputS1);
    request->send(200, "text/plain", inputS1); });
  server.on("/readIS2", HTTP_GET, [](AsyncWebServerRequest *request)
            {
    char inputS2[10] = {0};
    EEPROM.get(183, inputS2);
    request->send(200, "text/plain", inputS2); });
  server.on("/readSDT", HTTP_GET, [](AsyncWebServerRequest *request)
            {
    char sendData[20] = {0};
    EEPROM.get(401, sendData);
    request->send(200, "text/plain", sendData); });
  server.on("/readRDT", HTTP_GET, [](AsyncWebServerRequest *request)
            {
    char reciData[20] = {0};
    EEPROM.get(421, reciData);
    request->send(200, "text/plain", reciData); });

  server.on("/sse100", HTTP_GET, [](AsyncWebServerRequest *request)
            { 
  char sentTxtON[20] = {0};
        itoa(EEPROM.read(51), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse101", HTTP_GET, [](AsyncWebServerRequest *request)
            { 
  char sentTxtON[20] = {0};
        itoa(EEPROM.read(57), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse102", HTTP_GET, [](AsyncWebServerRequest *request)
            { 
  char sentTxtON[20] = {0};
        itoa(EEPROM.read(60), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse103", HTTP_GET, [](AsyncWebServerRequest *request)
            { 
  char sentTxtON[20] = {0};
        itoa(EEPROM.read(63), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse104", HTTP_GET, [](AsyncWebServerRequest *request)
            { 
  char sentTxtON[20] = {0};
        itoa(EEPROM.read(80), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse105", HTTP_GET, [](AsyncWebServerRequest *request)
            { 
  char sentTxtON[20] = {0};
        itoa(EEPROM.read(105), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse106", HTTP_GET, [](AsyncWebServerRequest *request)
            { 
  char sentTxtON[20] = {0};
        itoa(EEPROM.read(106), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse107", HTTP_GET, [](AsyncWebServerRequest *request)
            {  
  char sentTxtON[20] = {0};
        itoa(EEPROM.read(1067), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse108", HTTP_GET, [](AsyncWebServerRequest *request)
            {  
  char sentTxtON[20] = {0};
        itoa(EEPROM.read(108), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse109", HTTP_GET, [](AsyncWebServerRequest *request)
            { 
  char sentTxtON[20] = {0}; 
        itoa(EEPROM.read(109), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse110", HTTP_GET, [](AsyncWebServerRequest *request)
            {  
  char sentTxtON[20] = {0};
        itoa(EEPROM.read(110), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse111", HTTP_GET, [](AsyncWebServerRequest *request)
            { 
  char sentTxtON[20] = {0}; 
        itoa(EEPROM.read(111), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse112", HTTP_GET, [](AsyncWebServerRequest *request)
            { 
  char sentTxtON[20] = {0}; 
        itoa(EEPROM.read(112), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse113", HTTP_GET, [](AsyncWebServerRequest *request)
            {  
  char sentTxtON[20] = {0};
        itoa(EEPROM.read(113), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse114", HTTP_GET, [](AsyncWebServerRequest *request)
            {  
  char sentTxtON[20] = {0};
        itoa(EEPROM.read(114), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse115", HTTP_GET, [](AsyncWebServerRequest *request)
            {  
  char sentTxtON[20] = {0};
        itoa(EEPROM.read(115), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse116", HTTP_GET, [](AsyncWebServerRequest *request)
            { 
  char sentTxtON[20] = {0}; 
        itoa(EEPROM.read(116), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse117", HTTP_GET, [](AsyncWebServerRequest *request)
            { 
  char sentTxtON[20] = {0}; 
        itoa(EEPROM.read(117), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse118", HTTP_GET, [](AsyncWebServerRequest *request)
            {  
  char sentTxtON[20] = {0};
        itoa(EEPROM.read(118), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse119", HTTP_GET, [](AsyncWebServerRequest *request)
            { 
  char sentTxtON[20] = {0}; 
        itoa(EEPROM.read(119), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse120", HTTP_GET, [](AsyncWebServerRequest *request)
            { 
  char sentTxtON[20] = {0}; 
        itoa(EEPROM.read(120), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse121", HTTP_GET, [](AsyncWebServerRequest *request)
            { 
  char sentTxtON[20] = {0}; 
        itoa(EEPROM.read(121), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse122", HTTP_GET, [](AsyncWebServerRequest *request)
            { 
  char sentTxtON[20] = {0}; 
        itoa(EEPROM.read(122), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse123", HTTP_GET, [](AsyncWebServerRequest *request)
            {  
  char sentTxtON[20] = {0};
        itoa(EEPROM.read(123), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse124", HTTP_GET, [](AsyncWebServerRequest *request)
            {  
  char sentTxtON[20] = {0};
        itoa(EEPROM.read(124), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse125", HTTP_GET, [](AsyncWebServerRequest *request)
            { 
  char sentTxtON[20] = {0}; 
        itoa(EEPROM.read(125), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse126", HTTP_GET, [](AsyncWebServerRequest *request)
            {  
  char sentTxtON[20] = {0};
        itoa(EEPROM.read(126), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse127", HTTP_GET, [](AsyncWebServerRequest *request)
            { 
  char sentTxtON[20] = {0}; 
        itoa(EEPROM.read(127), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse128", HTTP_GET, [](AsyncWebServerRequest *request)
            {  
  char sentTxtON[20] = {0};
        itoa(EEPROM.read(128), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse390", HTTP_GET, [](AsyncWebServerRequest *request)
            { 
  char sentTxtON[20] = {0}; 
        itoa(EEPROM.read(390), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse391", HTTP_GET, [](AsyncWebServerRequest *request)
            {  
  char sentTxtON[20] = {0};
        itoa(EEPROM.read(391), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });
  server.on("/sse401", HTTP_GET, [](AsyncWebServerRequest *request)
            { 
  char sentTxtON[20] = {0}; 
        itoa(EEPROM.read(401), sentTxtON, 10);
        request->send(200, "text/plain", sentTxtON); });

  AsyncElegantOTA.begin(&server, "admin", "PSWxxxxx"); // Start ElegantOTA

  // server.onNotFound(notFound);
  server.onNotFound([](AsyncWebServerRequest *request)
                    { request->send(404, "text/plain", "Webpage not found"); });

  server.begin(); // start the HTTP server

  char sentTxtON[20] = {0};
  uint16_t myBLK = display.color565(0, 0, 0);
  display.fillRect(1, 1, 62, 30, myBLK);
  display.setTextColor(myCYN);
  display.setCursor(2, 8);
  strcpy_P(sentTxtON, var108);
  display.print(sentTxtON);
  display.setCursor(2, 18);
  strcpy_P(sentTxtON, var105);
  display.print(sentTxtON);
  delayBuzz(100, 900);
}

void dhtSetup()
{
  char sentTxtON[20] = {0};
  uint16_t myYLW = display.color565(255, 255, 0), myBLK = display.color565(0, 0, 0);

  pinMode(DHTPin, FUNCTION_3);
  pinMode(DHTPin, INPUT);

  dht.begin();

  display.fillRect(1, 1, 62, 30, myBLK);
  display.setTextColor(myYLW);
  display.setCursor(2, 8);
  strcpy_P(sentTxtON, var110);
  display.print(sentTxtON);
  display.setCursor(2, 18);
  strcpy_P(sentTxtON, var113);
  display.print(sentTxtON);
  delayBuzz(100, 900);
}

void pixStart3()
{
  char sentTxtON[20] = {0};
  uint16_t myBLU = display.color565(0, 0, 255), myYLW = display.color565(255, 255, 0);

  display.clearDisplay();
  beautCol1();
  display.setTextColor(myCYN);
  display.setCursor(2, 8);
  strcpy_P(sentTxtON, var114);
  display.print(sentTxtON);
  display.setCursor(2, 18);
  strcpy_P(sentTxtON, var075);
  display.print(sentTxtON);
}

void pixStart4()
{
  char sentTxtON[20] = {0};
  uint16_t myBLU = display.color565(0, 0, 255), myYLW = display.color565(255, 255, 0);

  display.clearDisplay();
  beautCol1();
  display.setTextColor(myCYN);
  display.setCursor(2, 8);
  strcpy_P(sentTxtON, var063);
  display.print(sentTxtON);
  display.setCursor(2, 18);
  strcpy_P(sentTxtON, var115);
  display.print(sentTxtON);
}

void pixStart7()
{
  char sentTxtON[20] = {0};
  uint16_t myBLU = display.color565(0, 0, 255), myYLW = display.color565(255, 255, 0);

  display.clearDisplay();
  beautCol1();
  display.setTextColor(myCYN);
  display.setCursor(2, 8);
  strcpy_P(sentTxtON, var063);
  display.print(sentTxtON);
  display.setCursor(2, 18);
  strcpy_P(sentTxtON, var116);
  display.print(sentTxtON);
}

void pixStart5()
{
  char sentTxtON[20] = {0};
  uint16_t myBLU = display.color565(0, 0, 255), myYLW = display.color565(255, 255, 0);

  display.clearDisplay();
  beautCol1();
  display.setTextColor(myCYN);
  display.setCursor(2, 8);
  strcpy_P(sentTxtON, var117);
  display.print(sentTxtON);
  display.setCursor(2, 18);
  strcpy_P(sentTxtON, var118);
  display.print(sentTxtON);
}

void pixStart6()
{
  char sentTxtON[20] = {0};
  uint16_t myBLU = display.color565(0, 0, 255), myYLW = display.color565(255, 255, 0);

  display.clearDisplay();
  beautCol1();
  display.setTextColor(myCYN);
  display.setCursor(2, 8);
  strcpy_P(sentTxtON, var119);
  display.print(sentTxtON);
  display.setCursor(2, 18);
  strcpy_P(sentTxtON, var120);
  display.print(sentTxtON);
}

void pixStart8()
{
  char sentTxtON[20] = {0};
  uint16_t myBLU = display.color565(0, 0, 255), myYLW = display.color565(255, 255, 0);

  display.clearDisplay();
  beautCol1();
  display.setTextColor(myCYN);
  display.setCursor(2, 8);
  strcpy_P(sentTxtON, var121);
  display.print(sentTxtON);
  display.setCursor(2, 18);
  strcpy_P(sentTxtON, var122);
  display.print(sentTxtON);
}

void magicLoop()
{
  unsigned long srLE_past = 0 ;
  EEPROM.get(384, srLE_past);

  unsigned long srLE_now = millis();
  if ((unsigned long)srLE_now - srLE_past >= bwCnt_gap)
  {
    srLE_past = srLE_now;
    EEPROM.put(384, srLE_past);

    if (EEPROM.read(60) == 5)
    {
      char sentTxtON[20] = {0};
      uint16_t myBLU = display.color565(0, 0, 255), myWHT = display.color565(255, 255, 255), myYLW = display.color565(255, 255, 0), myMAG = display.color565(255, 0, 255), cc_sal = display.color565(250, 128, 114), cc_tom = display.color565(255, 99, 17), myBLK = display.color565(0, 0, 0);

      EEPROM.write(59, EEPROM.read(59) + 1);
      EEPROM.write(70, EEPROM.read(70) + 1);

      if (EEPROM.read(59) == 1)
      {
        display.setFont();
        display.clearDisplay();
        beautCol1();
        display.setTextColor(myGRN);
        display.setCursor(14, 4);
        strcpy_P(sentTxtON, var057);
        display.print(sentTxtON);
        display.setTextColor(myMAG);
        display.setCursor(8, 14);
        strcpy_P(sentTxtON, var123);
        display.print(sentTxtON);
        EEPROM.write(46, 1), play_gap = 150;
        bwCnt_gap = 1000;
      }
      else if (EEPROM.read(59) == 2)
      {
        display.fillRect(1, 1, 62, 30, myBLK);
        display.setTextColor(myWHT);
        display.setCursor(22, 2);
        strcpy_P(sentTxtON, var124);
        display.print(sentTxtON);
        display.setTextColor(myYLW);
        display.setCursor(11, 12);
        strcpy_P(sentTxtON, var125);
        display.print(sentTxtON);
        display.setCursor(5, 22);
        strcpy_P(sentTxtON, var126);
        display.print(sentTxtON);
        EEPROM.write(46, 1), play_gap = 130;
      }
      else if (EEPROM.read(59) == 3)
      {
        display.fillRect(1, 1, 62, 30, myBLK);
        display.setTextColor(myRED);
        display.setCursor(14, 8);
        strcpy_P(sentTxtON, var127);
        display.print(sentTxtON);
        display.setCursor(17, 18);
        strcpy_P(sentTxtON, var113);
        display.print(sentTxtON);
        EEPROM.write(46, 1), play_gap = 170;
      }
      else if (EEPROM.read(59) == 4)
        wtCheck();
      else if (EEPROM.read(59) == 5)
      {
        display.fillRect(1, 1, 62, 30, myBLK);
        EEPROM.write(46, 1), play_gap = 200;
        display.setTextSize(2);
        display.setTextColor(cc_sal);
        display.setCursor(9, 4);
        strcpy_P(sentTxtON, var249);
        display.print(sentTxtON);
        display.setTextSize(1);
        display.setTextColor(myGRN);
        display.setCursor(18, 21);
        strcpy_P(sentTxtON, var250);
        display.print(sentTxtON);
      }
      else if (EEPROM.read(59) == 6)
      {
        display.setTextSize(1);
        wtCheck2();
        EEPROM.write(59, 10), bwCnt_gap = 1000;
      }
      else if (EEPROM.read(59) == 12)
        wtCheck1();
      else if (EEPROM.read(59) == 7)
      {
        display.fillRect(1, 1, 62, 30, myBLK);
        bwCnt_gap = 300;
      }
      else if (EEPROM.read(59) == 8)
      {
        EEPROM.write(46, 1), play_gap = 120;
        display.setTextSize(2);
        display.setTextColor(myGRN);
        display.setCursor(10, 10);
        strcpy_P(sentTxtON, var128);
        display.print(sentTxtON);
        EEPROM.write(59, 3), bwCnt_gap = 1000;
      }
    }

    if (EEPROM.read(30) == 1)
    {
      char sentTxtON[20] = {0};
      uint16_t myYLW = display.color565(255, 255, 0), myWHT = display.color565(255, 255, 255), myMAG = display.color565(255, 0, 255), cc_aqm = display.color565(127, 255, 212), myBLK = display.color565(0, 0, 0);

      EEPROM.write(70, EEPROM.read(70) + 1);

      display.setFont(&Font4x5Fixed);
      if (EEPROM.read(70) == 5)
      {
        display.fillRect(1, 23, 62, 8, myBLK);
        display.setTextColor(myYLW);
        display.setCursor(2, 28);
        strcpy_P(sentTxtON, var151);
        display.print(sentTxtON);
        display.setTextColor(cc_aqm);
        display.print(EEPROM.read(60));
        bwCnt_gap = 1000;
      }
      else if (EEPROM.read(70) == 10)
      {
        display.fillRect(1, 23, 62, 8, myBLK);
        display.setTextColor(myWHT);
        display.setCursor(2, 28);
        strcpy_P(sentTxtON, var014);
        display.print(sentTxtON);
        display.setTextColor(myMAG);
        display.print(mySendData.aS);
      }
      else if (EEPROM.read(70) == 15)
      {
        display.fillRect(1, 23, 62, 8, myBLK);
        display.setTextColor(myWHT);
        display.setCursor(2, 28);
        strcpy_P(sentTxtON, var157);
        display.print(sentTxtON);
        display.setTextColor(myMAG);
        display.print(strlen(mySendData.aS));
      }
      else if (EEPROM.read(70) == 20)
      {
        display.fillRect(1, 23, 62, 8, myBLK);
        display.setTextColor(myWHT);
        display.setCursor(2, 28);
        strcpy_P(sentTxtON, var013);
        display.print(sentTxtON);
        display.setTextColor(myMAG);
        char inputS1[24] = {0};
        EEPROM.get(336, inputS1);
        display.print(inputS1);
      }
      else if (EEPROM.read(70) == 25)
      {
        display.fillRect(1, 23, 62, 8, myBLK);
        display.setTextColor(myWHT);
        display.setCursor(2, 28);
        strcpy_P(sentTxtON, var150);
        display.print(sentTxtON);
        display.setTextColor(myMAG);
        char inputS2[10] = {0};
        EEPROM.get(183, inputS2);
        display.print(inputS2);
        EEPROM.write(70, 0);
      }
    }

    if (numApplesEaten == 9)
      mainCLK();

    if (EEPROM.read(51) == 1)
      buzzr_vibe();

    if (EEPROM.read(28) == 1)
    {
      if (EEPROM.read(51) == 2)
        draw_dateOtherV();

      if (EEPROM.read(71) == 49)
        spG_U();
      else if (EEPROM.read(71) == 50)
        spG_UI();
      else if (EEPROM.read(71) == 51)
        spG_UJ();

      if (EEPROM.read(71) == 52)
        spG_V();
      else if (EEPROM.read(71) == 53)
        spG_VI();
      else if (EEPROM.read(71) == 54)
        spG_VJ();
    }
  }
}

void mainCLK()
{
  EEPROM.write(70, EEPROM.read(70) + 1);
  EEPROM.write(59, EEPROM.read(59) + 1);

  int8_t tempM = 0, getTempM = 0;
  getTempM = tempM = EEPROM.read(53);
  EEPROM.put1(38, tempM);
  EEPROM.put1(392, getTempM);

  unsigned short presM = 0, getPresM = 0;
  getPresM = presM = 1000;
  EEPROM.put2(360, presM);
  EEPROM.put2(388, getPresM);

  uint8_t humiM = 0, getHumM = 0;
  getHumM = humiM = EEPROM.read(54);
  EEPROM.put1(42, humiM);
  EEPROM.put1(47, getHumM);

  char wifi_staIPwt[18] = {0};
  strcpy_P(wifi_staIPwt, wifi_staIPwt1);
  EEPROM.put(165, wifi_staIPwt);

  if (EEPROM.read(70) < 20)
  {
    if (EEPROM.read(59) == 2)
    {
      EEPROM.write(60, 189);
      EEPROM.write(22, 8);
      EEPROM.write(24, 1);
    }

    display.setFont(&Font4x5Fixed);
    if (EEPROM.read(59) == 5)
      dispTHPY1();
    else if (EEPROM.read(59) == 7)
      dispTHPY2();
    else if (EEPROM.read(59) == 9)
      dispTHPY3();
    else if (EEPROM.read(59) >= 12)
    {
      unsigned short setaYY = 0;
      EEPROM.get2(65, setaYY);
      if (setaYY >= 2022)
      {
        display.clearDisplay();
        numApplesEaten = 0;

        if (EEPROM.read(28) == 1)
          mainFunction1();
        else if (EEPROM.read(28) == 2)
          mainFunction2();
        else if (EEPROM.read(28) == 3)
          mainFunction3();
      }
      else
      {
        EEPROM.write(59, 0);
        char inputS2[10] = {0};
        EEPROM.put(183, inputS2);
      }
    }
  }
  else if (EEPROM.read(70) >= 20)
  {
    finalBrwS();
    EEPROM.write(30, 1);
    EEPROM.write(70, 0);
    EEPROM.write(59, 0);
    numApplesEaten = 0;
  }
}

void wtCheck2()
{
  display.clearDisplay();

  sp7_Zero1();
  spG_00();

  uint16_t cc_sal = display.color565(250, 128, 114), cc_dka = display.color565(189, 183, 107);
  char sentTxtON[20] = {0};

  clear_RectBLK01();
  beautCol3();
  display.setFont(&Font4x5Fixed);
  display.setTextColor(cc_dka);
  display.setCursor(2, 14);
  strcpy_P(sentTxtON, var196);
  display.print(sentTxtON);
  display.setTextColor(cc_sal);
  display.setCursor(2, 22);
  strcpy_P(sentTxtON, var197);
  display.print(sentTxtON);
  display.setFont();
}

void wtCheck1()
{
  if (EEPROM.read(28) == 2 || EEPROM.read(28) == 3)
  {
    display.clearDisplay();
    sp7_Zero1();
  }
  numApplesEaten = 0;
  EEPROM.write(70, 0);
  EEPROM.write(60, 0);

  if (EEPROM.read(28) == 1)
    mainFunction1();
  else if (EEPROM.read(28) == 2)
    mainFunction2();
  else if (EEPROM.read(28) == 3)
    mainFunction3();

  EEPROM.write(16, 1);
  EEPROM.write(57, 1);
}

void wtCheck()
{
  unsigned short setaYY = 0;
  EEPROM.get2(65, setaYY);

  int8_t getTempM = 0;
  EEPROM.get1(392, getTempM);

  if (EEPROM.read(70) >= 200) // noWeather noTime
  {
    display.setTextSize(1);
    EEPROM.write(71, 0);
    EEPROM.write(59, 0);
    EEPROM.write(60, 0);
    numApplesEaten = 9;
  }
  else if (setaYY < 2022) // noWeather noTime
    getIntTime(), EEPROM.write(59, 6);
  else if (getTempM == -127) // noWeather noTime
    getWeather(), EEPROM.write(59, 6);
  else if (getTempM != -127 && setaYY >= 2022) // Weather Time
    EEPROM.write(59, 4);
}

void dispTHPY1()
{
  char sentTxtON[20] = {0};
  uint16_t myWHT = display.color565(255, 255, 255), myMAG = display.color565(255, 0, 255), myBLK = display.color565(0, 0, 0);

  display.fillRect(1, 1, 62, 30, myBLK);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(myWHT);
  display.setCursor(2, 7);
  strcpy_P(sentTxtON, var129);
  display.print(sentTxtON);
  display.setTextColor(myMAG);
  int8_t getTempM = 0;
  EEPROM.get1(392, getTempM);
  display.print(getTempM);

  display.setTextColor(myWHT);
  display.setCursor(2, 14);
  strcpy_P(sentTxtON, var130);
  display.print(sentTxtON);
  display.setTextColor(myMAG);
  unsigned short getPresM = 0;
  EEPROM.get2(388, getPresM);
  display.print(getPresM);

  display.setTextColor(myWHT);
  display.setCursor(2, 21);
  strcpy_P(sentTxtON, var131);
  display.print(sentTxtON);
  display.setTextColor(myMAG);
  uint8_t getHumM = 0;
  EEPROM.get1(47, getHumM);
  display.print(getHumM);

  display.setTextColor(myWHT);
  display.setCursor(2, 28);
  strcpy_P(sentTxtON, var132);
  display.print(sentTxtON);
  display.setTextColor(myMAG);
  unsigned short setaYY = 0;
  EEPROM.get2(65, setaYY);
  display.print(setaYY);
}

void dispTHPY2()
{
  char sentTxtON[20] = {0};
  uint16_t myWHT = display.color565(255, 255, 255), myMAG = display.color565(255, 0, 255), myBLK = display.color565(0, 0, 0);

  display.fillRect(1, 1, 62, 30, myBLK);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(myWHT);
  display.setCursor(2, 7);
  strcpy_P(sentTxtON, var144);
  display.print(sentTxtON);
  display.setTextColor(myMAG);
  display.print(iseconds);

  display.setTextColor(myWHT);
  display.setCursor(2, 14);
  strcpy_P(sentTxtON, var145);
  display.print(sentTxtON);
  display.setTextColor(myMAG);
  display.print(minutes);

  display.setTextColor(myWHT);
  display.setCursor(2, 21);
  strcpy_P(sentTxtON, var146);
  display.print(sentTxtON);
  display.setTextColor(myMAG);
  display.print(hours);

  display.setTextColor(myWHT);
  display.setCursor(2, 28);
  strcpy_P(sentTxtON, var150);
  display.print(sentTxtON);
  display.setTextColor(myMAG);
}

void dispTHPY3()
{
  char sentTxtON[20] = {0};
  uint16_t myWHT = display.color565(255, 255, 255), myMAG = display.color565(255, 0, 255), myBLK = display.color565(0, 0, 0);

  display.fillRect(1, 1, 62, 30, myBLK);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(myWHT);
  display.setCursor(2, 7);
  strcpy_P(sentTxtON, var147);
  display.print(sentTxtON);
  display.setTextColor(myMAG);
  display.print(mdays);

  display.setTextColor(myWHT);
  display.setCursor(2, 14);
  strcpy_P(sentTxtON, var148);
  display.print(sentTxtON);
  display.setTextColor(myMAG);
  display.print(mdate);

  display.setTextColor(myWHT);
  display.setCursor(2, 21);
  strcpy_P(sentTxtON, var149);
  display.print(sentTxtON);
  display.setTextColor(myMAG);
  display.print(mmonth);

  display.setTextColor(myWHT);
  display.setCursor(2, 28);
  strcpy_P(sentTxtON, var141);
  display.print(sentTxtON);
  display.setTextColor(myMAG);
  strcpy_P(sentTxtON, var195);
  display.print(sentTxtON);
}

void finalBrwS()
{
  char sentTxtON[20] = {0};
  uint16_t myWHT = display.color565(255, 255, 255), myYLW = display.color565(255, 255, 0), cc_aqm = display.color565(127, 255, 212), myBLK = display.color565(0, 0, 0);

  EEPROM.write(60, 13);

  display.setFont();
  display.fillRect(1, 1, 62, 30, myBLK);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(myWHT);
  display.setCursor(2, 6);
  strcpy_P(sentTxtON, var133);
  display.print(sentTxtON);
  display.setCursor(2, 13);
  strcpy_P(sentTxtON, var030);
  display.print(sentTxtON);
  display.setCursor(2, 20);
  strcpy_P(sentTxtON, var134);
  display.print(sentTxtON);
  display.setTextColor(myYLW);
  display.setCursor(2, 28);
  strcpy_P(sentTxtON, var151);
  display.print(sentTxtON);
  display.setTextColor(cc_aqm);
  display.print(EEPROM.read(60));
}

void miniLoopStart()
{
  char sentTxtON[20] = {0};
  uint16_t cc_yld = display.color565(64, 64, 8), myGLD = display.color565(235, 205, 0), myBLK = display.color565(0, 0, 0);
  EEPROM.write(29, 1);
  unsigned short setbYY = 60 * 60;
  EEPROM.put2(40, setbYY);
  strcpy_P(sentTxtON, varDR9), ws.textAll(sentTxtON);
  while (EEPROM.read(29) < 3)
  {
    ArduinoOTA.handle();

    if (EEPROM.read(29) == 2)
    {
      delay(1000);
      eepromClear();
      EEPROM.write(50, 1);
      EEPROM.write(64, 1);
      analogWrite(buzzPin, 0);
      strcpy_P(sentTxtON, varOFF11), ws.textAll(sentTxtON);
      break;
    }

    EEPROM.put2(40, EEPROM.get2(40, setbYY) - 1);
    if (setbYY == 0)
    {
      EEPROM.write(29, 2);
    }

    display.fillRect(1, 1, 62, 30, myBLK);
    display.setFont(&Font4x5Fixed);
    display.setTextColor(myRED);
    display.setCursor(4, 8);
    strcpy_P(sentTxtON, var198);
    display.print(sentTxtON);
    display.setTextColor(myGLD);
    display.setCursor(4, 17);
    strcpy_P(sentTxtON, var137);
    display.print(sentTxtON);
    display.setTextColor(cc_yld);
    display.setCursor(4, 26);
    strcpy_P(sentTxtON, var199);
    display.print(sentTxtON);
    EEPROM.get2(40, setbYY);
    display.print(setbYY);

    analogWrite(buzzPin, 5), display.fillRect(59, 26, 2, 2, myRED);
    delay(500);
    analogWrite(buzzPin, 0), display.fillRect(59, 26, 2, 2, myBLK);
    delay(500);
  }
}

void timeServer()
{
  char sentTxtON[20] = {0};
  uint16_t cc_gry = display.color565(128, 128, 128), cc_yld = display.color565(64, 64, 8), myBLK = display.color565(0, 0, 0);
  display.fillRect(1, 1, 62, 30, myBLK);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(cc_gry);
  display.setCursor(12, 8);
  strcpy_P(sentTxtON, var101);
  display.print(sentTxtON);
  display.setCursor(8, 15);
  strcpy_P(sentTxtON, var200);
  display.print(sentTxtON);
  display.setFont();
  display.setTextColor(myCYN);
  display.setCursor(20, 20);
  strcpy_P(sentTxtON, var201);
  display.print(sentTxtON);
  delayBuzz(100, 900);

  // long timezone = -1; //GMT
  long timezone = 0; // GMT+1
  byte daysavetime = 1;

  char hostS1[20] = {0}, hostS2[20] = {0}, hostS3[20] = {0};
  strcpy_P(hostS1, hostT1), strcpy_P(hostS2, hostT2), strcpy_P(hostS3, hostT3);
  configTime(3600 * timezone, daysavetime * 3600, hostS1, hostS2, hostS3);

  struct tm tmstruct;
  tmstruct.tm_year = 0;
  delay(1000);
  getLocalTime(&tmstruct, 5000);

  EEPROM.write(59, 0);
  EEPROM.write(60, 0);
  while (((tmstruct.tm_year) + 1900) < 2022)
  {
    getLocalTime(&tmstruct, 5000);
    if (((tmstruct.tm_year) + 1900) >= 2022)
    {
      break;
    }
    if (EEPROM.read(60) >= 10)
    {
      EEPROM.write(60, 0);
      char hostS1[20] = {0}, hostS2[20] = {0}, hostS3[20] = {0};
      strcpy_P(hostS1, hostT1), strcpy_P(hostS2, hostT2), strcpy_P(hostS3, hostT3);
      configTime(3600 * timezone, daysavetime * 3600, hostS1, hostS2, hostS3);
    }
    if (EEPROM.read(59) >= 120)
    {
      break;
    }
    delay(1000);
    EEPROM.write(59, EEPROM.read(59) + 1);
    EEPROM.write(60, EEPROM.read(60) + 1);
  }

  display.fillRect(1, 1, 62, 30, myBLK);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(cc_yld);
  display.setCursor(10, 8);
  strcpy_P(sentTxtON, var202);
  display.print(sentTxtON);
  display.setCursor(12, 15);

  if (((tmstruct.tm_year) + 1900) >= 2022)
  {
    EEPROM.write(61, 1);
    strcpy_P(sentTxtON, var105);
    display.print(sentTxtON);
  }
  else if (EEPROM.read(59) >= 120)
  {
    EEPROM.write(61, 2);
    strcpy_P(sentTxtON, var203);
    display.print(sentTxtON);
  }
  else
  {
    EEPROM.write(61, 3);
    strcpy_P(sentTxtON, var203);
    display.print(sentTxtON);
  }
  display.setFont();
  display.setTextColor(myCYN);
  display.setCursor(20, 20);
  strcpy_P(sentTxtON, var201);
  display.print(sentTxtON);

  delayBuzz(200, 1800);
  EEPROM.write(59, 0);
  EEPROM.write(60, 0);
}

bool getLocalTime(struct tm *info, uint32_t ms)
{
  uint32_t start = millis();
  time_t now = 0;
  while ((millis() - start) <= ms)
  {
    time(&now);
    localtime_r(&now, info);
    if (info->tm_year > (2016 - 1900))
    {
      return true;
    }
    delay(10);
  }
  return false;
}

void finalSetUp()
{
  char sentTxtON[20] = {0};
  uint16_t myBLU = display.color565(0, 0, 255), myYLW = display.color565(255, 255, 0), myMAG = display.color565(255, 0, 255), myWHT = display.color565(255, 255, 255), myBLK = display.color565(0, 0, 0);

  display.clearDisplay();
  display.setFont(&Font4x5Fixed);
  beautCol2();
  display.setTextColor(myYLW);
  display.setCursor(5, 5);
  strcpy_P(sentTxtON, var135);
  display.print(sentTxtON);
  display.setFont();
  display.setTextSize(2);
  display.setTextColor(myWHT);
  display.setCursor(8, 8);
  strcpy_P(sentTxtON, var136);
  display.print(sentTxtON);
  display.setTextSize(1);
  display.setFont(&Font4x5Fixed);
  display.setTextColor(myCYN);
  display.setCursor(12, 29);
  strcpy_P(sentTxtON, var137);
  display.print(sentTxtON);
  delayBuzz(1000, 1000);

  char wifi_staIPwt[18] = {0};
  strcpy_P(wifi_staIPwt, wifi_staIPwt3);
  EEPROM.put(165, wifi_staIPwt);

  display.fillRect(1, 1, 62, 30, myBLK);
  display.setTextColor(myWHT);
  display.setCursor(2, 7);
  strcpy_P(sentTxtON, var138);
  display.print(sentTxtON);
  display.setTextColor(myMAG);
  display.print(WiFi.gatewayIP());

  display.setTextColor(myWHT);
  display.setCursor(2, 14);
  strcpy_P(sentTxtON, var139);
  display.print(sentTxtON);
  display.setTextColor(myMAG);
  char wifi_staIPm[18] = {0};
  strcpy_P(wifi_staIPm, wifi_staIPm3);
  display.print(wifi_staIPm);

  display.setTextColor(myWHT);
  display.setCursor(2, 21);
  strcpy_P(sentTxtON, var140);
  display.print(sentTxtON);
  display.setTextColor(myMAG);
  char wifi_staIPx[18] = {0};
  strcpy_P(wifi_staIPx, wifi_staIPx3);
  display.print(wifi_staIPx);

  display.setTextColor(myWHT);
  display.setCursor(2, 28);
  strcpy_P(sentTxtON, var194);
  display.print(sentTxtON);
  display.setTextColor(myMAG);
  char wifi_staIPh[18] = {0};
  strcpy_P(wifi_staIPh, wifi_staIPh3);
  display.print(wifi_staIPh);

  delayBuzz(100, 1900);

  if (WiFi.gatewayIP().toString() == "10.0.0.1" || WiFi.gatewayIP().toString() == "192.168.0.1")
  {
    timeServer();

    int8_t getTempM = -127;
    EEPROM.put1(392, getTempM);

    getRoomTH();
    getIntTime();
    getWeather();
    delay(1000);

    display.setTextWrap(false);
    dispTHPY1();
    delayBuzz(100, 900);
    dispTHPY2();
    delayBuzz(100, 900);
    dispTHPY3();
    delayBuzz(100, 900);
    EEPROM.write(60, 5);
  }
  else
  {
    startWiFiAP();
    finalBrwS();
    EEPROM.write(30, 1);
  }
}

void beautCol1()
{
  uint16_t myBLU = display.color565(0, 0, 255), myYLW = display.color565(255, 255, 0);
  display.drawLine(0, 0, 63, 0, myYLW);
  display.drawLine(0, 31, 63, 31, myYLW);
  display.drawLine(0, 1, 0, 30, myBLU);
  display.drawLine(63, 1, 63, 30, myBLU);
}

void beautCol2()
{
  uint16_t myBLU = display.color565(0, 0, 255), myYLW = display.color565(255, 255, 0);
  display.drawLine(0, 0, 63, 0, myBLU);
  display.drawLine(0, 31, 63, 31, myBLU);
  display.drawLine(0, 1, 0, 30, myYLW);
  display.drawLine(63, 1, 63, 30, myYLW);
}

void beautCol3()
{
  uint16_t cc_blu = display.color565(0, 0, 128), cc_ylw = display.color565(16, 16, 0);
  display.drawLine(0, 9, 63, 9, cc_ylw);
  display.drawLine(0, 24, 63, 24, cc_ylw);
  display.drawLine(0, 10, 0, 23, cc_blu);
  display.drawLine(63, 10, 63, 23, cc_blu);
}

void beautCol4()
{
  uint16_t cc_blu = display.color565(0, 0, 128), cc_ylw = display.color565(16, 16, 0);
  display.drawLine(0, 9, 63, 9, cc_blu);
  display.drawLine(0, 24, 63, 24, cc_blu);
  display.drawLine(0, 10, 0, 23, cc_ylw);
  display.drawLine(63, 10, 63, 23, cc_ylw);
}

void beautColBLK1()
{
  uint16_t myBLK = display.color565(0, 0, 0);
  display.drawLine(0, 0, 63, 0, myBLK);
  display.drawLine(0, 31, 63, 31, myBLK);
  display.drawLine(0, 1, 0, 30, myBLK);
  display.drawLine(63, 1, 63, 30, myBLK);
}

void beautColBLK2()
{
  uint16_t myBLK = display.color565(0, 0, 0);
  display.drawLine(0, 9, 63, 9, myBLK);
  display.drawLine(0, 24, 63, 24, myBLK);
  display.drawLine(0, 10, 0, 23, myBLK);
  display.drawLine(63, 10, 63, 23, myBLK);
}

void clear_RectBLK01()
{
  uint16_t myBLK = display.color565(0, 0, 0);
  if (EEPROM.read(28) == 1)
    display.fillRect(1, 10, 62, 14, myBLK);
  else if (EEPROM.read(28) == 2)
    display.fillRect(4, 11, 59, 11, myBLK);
}

void syncT_syncW()
{
  uint16_t myYLW = display.color565(255, 255, 0), myBLK = display.color565(0, 0, 0);
  if (EEPROM.read(28) == 2)
  {
    if (EEPROM.read(31) == 4)
    {
      display.drawPixel(60, 13, myYLW);
      display.drawPixel(60, 16, myBLK);
      display.drawPixel(60, 19, myBLK);
    }
    if (EEPROM.read(31) == 5)
    {
      display.drawPixel(60, 13, myBLK);
      display.drawPixel(60, 16, myGRN);
      display.drawPixel(60, 19, myBLK);
    }
    if (EEPROM.read(31) == 6)
    {
      display.drawPixel(60, 13, myBLK);
      display.drawPixel(60, 16, myBLK);
      display.drawPixel(60, 19, myRED);
    }
  }
  else if (EEPROM.read(28) == 3)
  {
    if (EEPROM.read(31) == 4)
    {
      display.drawPixel(34, 26, myYLW);
      display.drawPixel(34, 28, myBLK);
      display.drawPixel(34, 30, myBLK);
    }
    if (EEPROM.read(31) == 4)
    {
      display.drawPixel(34, 26, myBLK);
      display.drawPixel(34, 28, myGRN);
      display.drawPixel(34, 30, myBLK);
    }
    if (EEPROM.read(31) == 6)
    {
      display.drawPixel(34, 26, myBLK);
      display.drawPixel(34, 28, myBLK);
      display.drawPixel(34, 30, myRED);
    }
  }
}

void clear_RectBLK02()
{
  uint16_t myBLK = display.color565(0, 0, 0);
  display.fillRect(1, 1, 62, 30, myBLK);
}

// ---------------- MAIN SYSTEM SUT UP -----------------
void setup()
{
  pinSetup(); // Setup pin control

  pixSetUp();

  dimPixel1();

  beautCol1();

  sensorDispl();

  startPixUche();

  startSPrint(); // Setup serial print

  pixStart0(); // Setup pixel display

  dhtSetup(); // Setup DHT control

  eepromSetup(); // Initialize EEPROM with predefined size

  eepromClear();

  WiFi.mode(WIFI_AP_STA);
  WiFi.hostname("PIXELCLOCK");

  // clear all configs
  WiFi.softAPdisconnect(true);
  WiFi.disconnect(true);
  delay(1000);

  espNOWSetup();

  startWiFiSTA();
  EEPROM.write(59, 0), EEPROM.write(60, 0);

  initWebSocket(); // Start a WebSocket server

  startServerAsynB();

  startServerAsynC();

  startOTA(); // Setup OTA (Over The Air) transmission

  miniLoopStart();

  finalSetUp();
}
// ---------------- SETUP END -------------------

// ------------- MAIN SYSTEM PROGRAM ----------------
void loop()
{
  // Add support for OTA***************************************
  ArduinoOTA.handle();
  // ***************************************

  magicLoop(); // do some magical stuffs

  if (EEPROM.read(16) == 1)
  {
    routerConnect();

    scroll_text();
    sleepButton();

    trueWifi1ABC();
    trueWifi2ABC();
    trueWifi3ABC();
    trueWifi4ABC();
    playLoop();
  }
}
// ---------------- PROGRAM END -------------------

// Callback when data is sent
void OnDataSent(uint8_t *mac_addr, uint8_t sendStatus)
{
  if (EEPROM.read(51) != 1)
  {
    if (sendStatus == 0)
    {
      if (EEPROM.read(22) == 3)
        EEPROM.write(60, 141);

      if (EEPROM.read(20) == 1 || EEPROM.read(20) == 2 || EEPROM.read(22) == 8)
        EEPROM.write(51, 7);
    }
    else if (sendStatus != 0)
    {
      if (EEPROM.read(20) == 1 || EEPROM.read(20) == 2 || EEPROM.read(22) == 8)
        EEPROM.write(51, 19);

      if (EEPROM.read(22) == 3)
        EEPROM.write(60, 141);
    }
  }
}

// Callback function that will be executed when data is received
void OnDataRecv(uint8_t *mac_addr, uint8_t *incomingData, uint8_t len)
{
  uint8_t typeR = incomingData[0];

  memcpy(&pairingDataI, incomingData, sizeof(pairingDataI));
  memcpy(&myMacAddr, mac_addr, sizeof(myMacAddr));

  switch (typeR)
  {
  case PAIRING:
  {
    memcpy(&pairingData, incomingData, sizeof(pairingData));

    if (pairingData.id >= 10)
    {
      // do not replay to server itself
      if (pairingData.msgType == PAIRING)
      {
        // Register peer
        esp_now_add_peer(mac_addr, ESP_NOW_ROLE_COMBO, pairingData.channel, NULL, 0);

        pairingData.msgType = PAIRING;

        pairingData.id = BOARD_PX; // This is bosrd 1

        // Server is in AP_STA mode: peers need to send data to server soft AP MAC address
        WiFi.softAPmacAddress(pairingData.macAddr);
        // WiFi.macAddress(pairingData.macAddr);
        int chan = WiFi.channel();
        pairingData.channel = chan;

        esp_now_send(mac_addr, (uint8_t *)&pairingData, sizeof(pairingData));
      }
    }

    if (pairingData.id == BOARD_HS)
    { // the message comes from BOARD_HS
      esp_now_del_peer(pairingData.macAddr);

      esp_now_add_peer(mac_addr, ESP_NOW_ROLE_COMBO, pairingData.channel, NULL, 0); // add the server to the peer list

      mySendData.msgType = DATA;
      mySendData.id = BOARD_PX;
      if (EEPROM.read(20) == 1 || EEPROM.read(20) == 2)
        mySendData.sendcounter = 255;

      esp_now_send(mac_addr, (uint8_t *)&mySendData, sizeof(mySendData));

      typeR = WAITING;

      EEPROM.write(60, 187); // set the pairing status
    }
  }
  break;

  case WAITING:
    break;

  case DATA:
  {
    typedef struct struct_ReciData
    {
      uint8_t msgType;
      uint8_t id;
      uint8_t recicounter;
      char aR[247];
    } struct_ReciData;
    struct_ReciData myReciData;
    memset(&myReciData, '\0', sizeof myReciData);

    memcpy(&myReciData, incomingData, sizeof(myReciData));

    if (myReciData.id != 0)
    {
      char inputS1[24] = {0}, inputS2[10] = {0};

      if (myReciData.id == BOARD_HS)
      {
        if ((myReciData.recicounter <= 100))
        {
          EEPROM.write(51, 5);
          EEPROM.write(52, 0);
          EEPROM.write(60, 202);
          memset(&myReciData, '\0', sizeof myReciData);
        }
        else if (myReciData.recicounter == 255)
        {
          if (EEPROM.read(20) == 1 || EEPROM.read(20) == 2)
            EEPROM.write(57, 3), EEPROM.write(24, 0);
          memset(&myReciData, '\0', sizeof myReciData);
        }
      }

      else if (myReciData.id == BOARD_MS)
      {
        if (myReciData.recicounter == 103)
        {
          memset(inputS1, '\0', sizeof inputS1);
          strncpy(inputS1, myReciData.aR, sizeof inputS1);
          EEPROM.put(336, inputS1);

          getBrwsTimeDate();

          EEPROM.write(22, 9);
          memset(&myReciData, '\0', sizeof myReciData);
        }
      }

      else if (myReciData.id == BOARD_WM)
      {
        if (myReciData.recicounter == 250)
        {
          EEPROM.write(60, 148);
          EEPROM.write(22, 14);
        }
      }
    }
  }
  }
}
