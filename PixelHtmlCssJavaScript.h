
const char errorPage_html[] PROGMEM = R"rawliteral(
  <!DOCTYPE HTML>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="author" content="Uchefuna Ezike">
  <meta name="viewport" content="width=device-width, initial-scale=1.0,maximum-scale=1.0, user-scalable=no">
  <title>Pixel Clock</title>
  <link rel="icon" href="data:,">
</head>
<body>
  <div >
    <h1>UcheSkillz Eleckronics</h1>
    <h2><i>Error Page</i></h2>
  </div>
  <div >
  Webpage not found
  </div>
  <br>
  <div >
  <a href="/ucheskillz.com">Return to Home Page</a>
  </div>
</body>
</html>
)rawliteral";

const char mianWebPage_html[] PROGMEM = R"rawliteral(
  <!DOCTYPE HTML>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="author" content="Uchefuna Ezike">
  <meta name="viewport" content="width=device-width, initial-scale=1.0,maximum-scale=1.0, user-scalable=no">
  <title>Pixel Clock</title>
  <link rel="icon" href="data:,">
  <style>
  body {
    margin: 1;
    padding: 0;
      width: 96%;
  border: 2px black solid;
    background-color: #292a2cee;
  }

  html {
    font-family: Arial, Helvetica, sans-serif;
  }

    .headerM {
      text-align: center;
      background-color: #5a5d69ee;
      border: 1px solid #ffc0cb;
      border-radius: 8px 8px 0px 0px;
      padding-left: 2px;
      padding-right: 2px;
    
    -webkit-user-select: none;
    -webkit-touch-callout: none;
    -moz-user-select: none;
    -ms-user-select: none;
    user-select: none;
    }

    .parentM {
      display: grid;
      border: 1px solid #ffc0cb;
      padding: 15px 5px 0px 5px;
    
    -webkit-user-select: none;
    -webkit-touch-callout: none;
    -moz-user-select: none;
    -ms-user-select: none;
    user-select: none;
    }

    h1 {
      margin-top: 10px;
      margin-bottom: 10px;
      font-size: 50px;
      text-align: center;
      color: #1b0303;
    }

    h2 {
      border-radius: 8px;
      text-align: center;
      color: #c4e218dc;
      font-size: 24px;
    }

    .sensor_labelsM {
      background-color: #ffffff;
      border-radius: 2px;
      text-align: center;
      margin-top: 10px;
      margin-bottom: 5px;
      padding-top: 2px;
    }

  .sensor_values {
      color: #e62a11e1;
    font-weight: bold;
    font-size: 22px;
  }

  .mac_labels {
    position: relative;
    background-color: #ffffff;
    border-radius: 5px;
  margin-top: 15px;
  margin-bottom: 5px;
    padding: 5px 0px 5px 10px;
  }

  .mac_box {
    font-style: italic;
    font-weight: bold;
  font-size: 22px;
    padding: 5px;
    color: #1261f3cb;
  }

.ota_labels {
  background-color: #e0d0d0cb;
  border-radius: 5px;
  margin-top: 10px;
  text-align: center;
}

.ota_box {
  font-style: italic;
  font-weight: bold;
  font-size: 26px;
  padding: 5px;
  color: #d41d79cb;
}

.device_labels {
  background-color: #ffffff;
  border-radius: 5px;
  text-align: center;
  margin-top: 5px;
      margin-bottom: 15px;
  padding-top: 2px;
}

.device_values {
  font-weight: bold;
  font-size: 26px;
}

    .childM {
      align-self: end;
      background-color: #add8e6;
      text-align: center;
      vertical-align: middle;
      border: 1px solid #f14d0d;
      margin-top: 80px;
      margin-bottom: 5px;
      padding-top: 3px;
      padding-bottom: 5px;
    }

    .leftStretchM {
      float: left;
      font-size: 40px;
      border-radius: 8px;
      background-color: #a9a9a9;
      border: 1px solid #ffc0cb;
      padding-bottom: 5px;
      margin-top: 15px;
      margin-bottom: 5px;
      width: 48vh;
    }

  .leftStretch {
    float: left;
    border-radius: 8px;
    background-color: #a9a9a9;
    border: 1px solid #ffc0cb;
    padding-bottom: 5px;
    margin-top: 5px;
    margin-bottom: 5px;
    width: 48vh;
  }

  .IO_box8 {
    float: right;
    font-weight: bold;
    margin-top: 22px;
    margin-right: 12px;
      color: #b631df;
    /* padding: 0px 35px 0px 0px; */
  }

    .topleftM {
      position: relative;
      top: 1px;
      left: 4px;
      font-size: 13px solid;
    }

  .topleft {
    position: relative;
    top: 1px;
  left: 16px;
    font-size: 13px solid;
  }

  .IO_box3M {
    float: right;
    color: #000000;
    font-weight: bold;
    padding: 0px 35px 0px 0px;
  }

  .button {
      background-color: #d63c89;
    color: #ffffff;
    text-align: center;
    margin: 2px 10px 10px 15px;
    box-shadow: 0px 9px 9px 2px #000000;
    outline: none;
    cursor: pointer;
  }

  .button:active {
    box-shadow: 0 5px #008000;
    transform: translateY(4px);
    outline: none;
    border: none;
  }

  .button5 {
    border-radius: 8px;
    font-size: 27px;
    outline: none;
    border: none;
  }

  .clock {
    font-size: 18px;
    margin: 7px 8px 0px 0px;
  }

  .date {
    font-size: 18px;
    margin: 7px 5px 0px 0px;
    font-weight: bold;
    }

  .indicton2 {
    color: #008000;
  }

  </style>
</head>
<body>
  <div class="headerM">
    <h1>UcheSkillz Eleckronics</h1>
    <h2><i>Home Page</i></h2>
    <div class="sensor_labelsM">
      Sensor Value:
      <span id="sensor" class="sensor_values">%SENSOR%</span>
    </div>
  </div>
  <div class="parentM">
    <div class="device_labels">
      <span id="devred" class="device_values">%DEVSTATUS%</span>
    </div>
    <div class="leftStretchM">
      <form class="topleftM" action="/">
        <button class='button button5' name="inputD1" type="submit">Tap to open browser 1</button>
      </form>
    </div>
    <div class="leftStretchM">
      <form class="topleftM" action="/">
        <button class='button button5' name="inputD2" type="submit">Tap to open browser 2</button>
      </form>
    </div>
    <div class="leftStretchM">
      <form class="topleftM" action="/">
        <button class='button button5' name="inputD3" type="submit">Tap to open browser 3</button>
      </form>
    </div>
    <div class="leftStretchM">
      <form class="topleftM" action="/">
        <button class='button button5' name="inputD4" type="submit">Tap to open browser 4</button>
      </form>
    </div>

    <div class="magin_divider"> </div>

    <div class="leftStretch">
      <div class="topleft">
        Start System<span id="state1S" class="IO_box3M">%STATE1S%</span><br>
      </div>
      <button class='button button5' id="toggle1S">Push</button><span id="s390" class="IO_box8">%S390%</span>
    </div>

    <div class="magin_divider"> </div>

    <div class="ota_labels">
      OTA COUNT:
      <span class="ota_box">%BASICOTA%</span>
    </div>
    <div class="mac_labels">
      Pix MAC Address:
      <span class="mac_box" >%OLDMAC%</span>
    </div>

    <div class="magin_divider"> </div>

    <div class="sensor_labelsM">
      eeprom22 Value:
      <span id="eprm022" class="sensor_values">%EPRM022%</span>
    </div>
    <div class="sensor_labelsM">
      eeprom39 Value:
      <span id="eprm039" class="sensor_values">%EPRM039%</span>
    </div>
    <div class="sensor_labelsM">
      inputS1 Value:
      <span id="inputs1" class="sensor_values">%INPUTS1%</span>
    </div>
    <div class="sensor_labelsM">
      inputS2 Value:
      <span id="inputs2" class="sensor_values">%INPUTS2%</span>
    </div>
    <div class="sensor_labelsM">
      Data Sent:
      <span id="sendata" class="sensor_values">%SENDATA%</span>
    </div>
    <div class="sensor_labelsM">
      Data Reci:
      <span id="recdata" class="sensor_values">%RECDATA%</span>
    </div>

    <div class="magin_divider"> </div>
    <div class="magin_divider"> </div>

    <div class="sensor_labelsM" id="tap2zero">
      iteration Value:
      <span id="iterat" class="sensor_values"></span>
    </div>
    <div class="sensor_labelsM">
      iterationM Value:
      <span id="iteratM" class="sensor_values"></span>
    </div>

    <div class="childM">
      <div>
        <strong id="myClock" class="clock"></strong>
      </div>
      <div>
        <span id="myDate" class="date"></span>
      </div>
    </div>
  </div>

    <script src="scriptOffline.js"></script>
  <script>
        window.addEventListener('load', onLoad);

    function onLoad(event) {
      initButtonM();
    }

    function initButtonM() {
      document.getElementById('toggle1S').addEventListener('click', function (event) {
        if (confirm("Pls Confirm to continue!")) {
          websocket.send("SSY");
        }
      });


      function readTextFileM(fileM, outputidM) {
        var rawFileM = new XMLHttpRequest();
        rawFileM.open("GET", fileM, true);
        rawFileM.send();

        rawFileM.onreadystatechange = function () {
          if (rawFileM.readyState === 4 && (rawFileM.status === 200 || rawFileM.status == 0)) {
            document.getElementById(outputidM).innerHTML = rawFileM.responseText;
          }
        }
      }

      let timerM = setTimeout(function myTimerM() {
          readTextFileM("/sse390", "s390");
        timerM = setTimeout(myTimerM, 1000);
      }, 1000)
    }
  </script>
</body>
</html>
)rawliteral";

const char styleOffline_css[] PROGMEM = R"rawliteral(
  body {
    margin: 1;
    padding: 0;
  border: 2px black solid;
    width: fit-content;
    background-color: #292a2cee;
  }

  html {
    font-family: Arial, Helvetica, sans-serif;
  }

  .header {
  background-color: #6e2bc5ee;
    border: 1px solid #ffc0cb;
    border-radius: 8px 8px 0px 0px;
    padding: 0px 5px 15px 5px;
    
    -webkit-user-select: none;
    -webkit-touch-callout: none;
    -moz-user-select: none;
    -ms-user-select: none;
    user-select: none;
  }

  .parent {
    display: grid;
    border: 1px solid #ffc0cb;
  background-color: #454908;
    padding: 15px 5px 0px 5px;
    
    -webkit-user-select: none;
    -webkit-touch-callout: none;
    -moz-user-select: none;
    -ms-user-select: none;
    user-select: none;
  }

    .h1g {
  margin-left: 1px;
  margin-right: 1px;
  width: 48vh;
      margin-top: 20px;
      margin-bottom: 10px;
      background-color: #a7ca28;
      border-radius: 8px;
      font-size: 36px;
      color: #220606;
    }

  h1 {
  background-color: #143642;
  border-radius: 8px;
  font-size: 40px;
  padding-top: 8px;
  padding-bottom: 5px;
  text-align: center;
  color: #ffffff;
  }

  h2 {
    background-color: #a9a9a9;
    border-radius: 8px;
    text-align: center;
    color: #b1271dbb;
    font-size: 24px;
    padding-top: 3px;
  }

  .google_labels {
    background-color: #ffffff;
    border-radius: 8px;
    text-align: center;
    padding-top: 2px;
  }

  .google_values {
    font-weight: bold;
  font-size: 22px;
  }

  .sensor_labels {
    background-color: #ffffff;
    border-radius: 8px;
    text-align: center;
    margin-top: 10px;
    padding-top: 2px;
  }

  .sensor_values {
    color: #f32112bb;
    font-weight: bold;
    font-size: 22px;
  }

  .wifi_labels {
    position: relative;
    background-color: #ffffff;
    border-radius: 8px;
    font-size: 15px;
    margin: 10px 0px 0px 0px;
    padding: 5px 10px 5px 10px;
  }

  .IO_box1 {
    font-style: italic;
    font-weight: bold;
    margin: 5px;
  }

  .IO_box2 {
    float: right;
    text-align: right;
    font-style: italic;
  }

  .parent1 {
    border: 1px solid #ffc0cb;
    background-color: #1693a3;
    padding: 0px 5px 10px 5px;

    -webkit-user-select: none;
    -webkit-touch-callout: none;
    -moz-user-select: none;
    -ms-user-select: none;
    user-select: none;
  }

  .mac_labels {
    position: relative;
    background-color: #ffffff;
    border-radius: 5px;
  margin-top: 15px;
  margin-bottom: 5px;
    padding: 5px 0px 5px 10px;
  }

  .mac_box {
    font-style: italic;
    font-weight: bold;
  font-size: 22px;
    padding: 5px;
    color: #1261f3cb;
  }

.ota_labels {
  background-color: #e0d0d0cb;
  border-radius: 5px;
  margin-top: 10px;
  text-align: center;
}

.ota_box {
  font-style: italic;
  font-weight: bold;
  font-size: 26px;
  padding: 5px;
  color: #d41d79cb;
}

  .wrapper {
    position: relative;
  }

  .topleft {
    position: relative;
    top: 1px;
  left: 16px;
    font-size: 13px solid;
  }

  .left {
    float: left;
    border-radius: 8px;
    background-color: #a9a9a9;
    border: 1px solid #ffc0cb;
    padding-bottom: 5px;
    width: 23.7vh;
  }

  .right {
    float: right;
    border-radius: 8px;
    background-color: #a9a9a9;
    border: 1px solid #ffc0cb;
    padding-bottom: 5px;
    width: 23.7vh;
  }

  .leftStretchC {
    float: left;
    border-radius: 8px;
    background-color: #a9a9a9;
    border: 1px solid #ffc0cb;
    padding-bottom: 5px;
    margin-top: 5px;
    margin-bottom: 20px;
    width: 48vh;
  }

  .triangle_up {
    width: 4px;
    height: 4px;
    margin-left: 150px;
    border-radius: 20px;
    border-left: 30px solid transparent;
    border-right: 30px solid transparent;
    border-bottom: 60px solid #008000;
    cursor: pointer;
  }

  .triangle_up:active {
    transform: translateY(4px);
    outline: none;
  }

  .triangle_left {
    width: 4px;
    height: 4px;
    float: left;
    border-radius: 20px;
      margin-left: 80px;
    border-top: 30px solid transparent;
    border-right: 60px solid #f70d0d;
    border-bottom: 30px solid transparent;
    cursor: pointer;
  }

  .triangle_left:active {
    transform: translateX(4px);
    outline: none;
  }

  .triangle_right {
    width: 4px;
    height: 4px;
    float: right;
    border-radius: 20px;
    margin-right: 150px;
    border-top: 30px solid transparent;
    border-left: 60px solid #f70d0d;
    border-bottom: 30px solid transparent;
    cursor: pointer;
  }

  .triangle_right:active {
    transform: translateX(4px);
    outline: none;
  }

  .triangle_down {
    width: 4px;
    height: 4px;
    border-radius: 20px;
    margin-left: 150px;
    margin-top: 60px;
    border-left: 30px solid transparent;
    border-right: 30px solid transparent;
    border-top: 60px solid #008000;
    cursor: pointer;
  }

  .triangle_down:active {
    transform: translateY(4px);
    outline: none;
  }

  .upTop {
      border-radius: 8px;
      margin-top: 5px;
      background-color: #a9a9a9;
      border: 1px solid #ffc0cb;
      padding-top: 10px;
      padding-left: 10px;
      padding-right: 10px;
      padding-bottom: 5px;
  }

    .upDown {
      margin-top: 30px;
      padding: 10px;
    }

  .leftStretch {
    float: left;
    border-radius: 8px;
    background-color: #a9a9a9;
    border: 1px solid #ffc0cb;
    padding-bottom: 5px;
    margin-top: 5px;
    margin-bottom: 5px;
    width: 48vh;
  }

  .input_box {
    border-radius: 8px;
    text-align: center;
    font-size: 24px;
    margin-top: 10px;
  }

  .leftStretchT {
    float: left;
    border-radius: 8px 8px 0px 0px;
    background-color: #a9a9a9;
    border: 1px solid #ffc0cb;
    margin-top: 10px;
    padding: 5px 0px 10px 0px;
    width: 48vh;
  }

  .leftStretchD {
    float: left;
    background-color: #a9a9a9;
    border: 1px solid #ffc0cb;
    padding: 5px 0px 10px 0px;
    width: 48vh;
  }

  .leftStretchST {
    float: left;
    border-radius: 0px 0px 8px 8px;
    background-color: #a9a9a9;
    border: 1px solid #ffc0cb;
    margin-bottom: 20px;
    padding: 5px 0px 10px 0px;
    width: 48vh;
  }

  .writeDT {
    color: #ff0000;
    font-weight: bold;
  }

  .writeDY {
    font-style: italic;
    margin: 0px 20px 0px 0px;
  }

  .IO_box3 {
    float: right;
    color: #000000;
    font-weight: bold;
    padding: 0px 35px 0px 0px;
  }

  .IO_box4 {
    float: left;
    position: relative;
  }

  .IO_box5 {
    position: relative;
    float: center;
    left: 5px;
    width: 20px;
    margin: 2px 10px 5px 5px;
    padding: 13px 5px 0px 0px;
    font-size: 18px;
  }

  .IO_box6 {
    top: 1px;
    font-weight: bold;
    margin: 10px 2px 10px 0px;
  }

  .IO_box7 {
    font-weight: bold;
    margin: 10px 2px 10px 0px;
  }

  .IO_box8 {
    float: right;
    font-weight: bold;
    margin-top: 22px;
    margin-right: 12px;
      color: #b631df;
  }

    .IO_box9L {
      margin-left: 20px;
      color: #040005;
    }

    .IO_box9U {
      margin-left: 58px;
      color: #040005;
    }

    .IO_box9R {
      margin-left: 50px;
      color: #040005;
    }

    .IO_box9D {
      margin: 34px;
      color: #040005;
    }

    .IO_box10 {
      font-weight: bold;
      margin: 28px;
      color: #b631df;
    }

  .indicton {
    color: #ffff00;
  }

  .indictoff {
    color: #808080;
  }

  .indicton1 {
    color: #ffa500;
  }

  .indicton2 {
    color: #008000;
  }

  .indicton3 {
    color: #031b81;
  }

  .indicton4 {
    color: #da0d0d;
  }

.online_labels {
  background-color: #d4c56c;
  border-radius: 5px;
  text-align: center;
  margin-top: 50px;
  padding-top: 2px;
}

  .online,
  .offline {
    display: inline-block;
    padding: 0.5rem;
    border-radius: 5px;
    margin: 1rem;
  }

  .online {
    border: 3px solid green;
    color: green;
  }

  .offline {
    border: 3px solid red;
    color: red;
  }

  .button {
    background-color: #008000;
    color: #ffffff;
    text-align: center;
    margin: 2px 10px 10px 15px;
    box-shadow: 0px 9px 9px 2px #000000;
    outline: none;
    cursor: pointer;
  }

  .button:active {
    box-shadow: 0 5px #008000;
    transform: translateY(4px);
    outline: none;
    border: none;
  }

  .button5 {
    border-radius: 8px;
    font-size: 27px;
    outline: none;
    border: none;
  }

  .child {
    align-self: end;
  border-radius: 4px;
    background-color: #add8e6;
    text-align: center;
    vertical-align: middle;
    border: 1px solid #f14d0d;
    margin-top: 40px;
    margin-bottom: 5px;
    padding-top: 3px;
    padding-bottom: 5px;
  }

  .clock {
    font-size: 18px;
    margin: 7px 8px 0px 0px;
  }

  .date {
    font-size: 18px;
    margin: 7px 5px 0px 0px;
    font-weight: bold;
    }

.magin_divider {
  margin-bottom: 20px;
}

.magin_divider1 {
  margin-bottom: 15px;
}

.magin_divider2 {
  margin-bottom: 8px;
}
)rawliteral";

const char scriptOffline_js[] PROGMEM = R"rawliteral(
  var gateway = `ws://${window.location.hostname}/ws`;
  var websocket;
      let i = 0;
  let  iR = 0;
  let i0 = 0;
  let i1 = 0;
  let i2 = 0;

  window.addEventListener('load', onLoad);

  function onLoad(event) {
    initWebSocket();
  }

  function initWebSocket() {
    websocket = new WebSocket(gateway);
    websocket.onopen = onOpen;
    websocket.onclose = onClose;
    websocket.onmessage = onMessage; // <-- add this line
  }
  function onOpen(event) {
    var s = document.getElementById('statusO');
  var modalzr = document.getElementById("tap2zero");

  var button01 = document.getElementById("toggleR");
  var button02 = document.getElementById("toggleG");
  var button03 = document.getElementById("toggleH");
  var button04 = document.getElementById("toggleS");
  var button05 = document.getElementById("toggle0");
  var button06 = document.getElementById("toggle17");
  var button07 = document.getElementById("toggle18");
  var button31 = document.getElementById("toggle20");

  var button08 = document.getElementById("toggle1");
  var button09 = document.getElementById("toggle2");
  var button10 = document.getElementById("toggle3");
  var button11 = document.getElementById("toggle4");
  var button12 = document.getElementById("toggle5");
  var button13 = document.getElementById("toggle6");
  var button14 = document.getElementById("toggle19");
  var button15 = document.getElementById("toggleT");
  var button16 = document.getElementById("toggleQ");
  var button17 = document.getElementById("toggleU");
  var button18 = document.getElementById("toggleV");
  var button19 = document.getElementById("toggleY");
  var button20 = document.getElementById("toggleP");
  
  var button21 = document.getElementById("toggle7");
  var button22 = document.getElementById("toggle8");
  var button23 = document.getElementById("toggle9");
  
  var button24 = document.getElementById("toggle10");
  var button25 = document.getElementById("toggle11");
  var button26 = document.getElementById("toggle12");
  var button27 = document.getElementById("toggle13");
  var button28 = document.getElementById("toggle14");
  var button29 = document.getElementById("toggle15");
  var button30 = document.getElementById("toggle16");

    let tday = new Array("Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday");
    let tmonth = new Array("January", "Febrary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December");

    function updateTime() {
      var d = new Date();
      var nday = d.getDay(), nmonth = d.getMonth(), ndate = d.getDate(), nyear = d.getFullYear();
      var nhour = d.getHours(), nmin = d.getMinutes(), nsec = d.getSeconds();
      if (nhour <= 9) nhour = "0" + nhour;
      if (nmin <= 9) nmin = "0" + nmin;
      if (nsec <= 9) nsec = "0" + nsec;

      document.getElementById('myDate').innerHTML = "" + tday[nday] + ", " + ndate + " " + tmonth[nmonth] + " " + nyear + "";

      document.getElementById('myClock').style.color = 'red';
      document.getElementById('myClock').innerHTML = "" + nhour + ":" + nmin + ":" + nsec + "";
    }

    let timer = setTimeout(function myTimer() {
      updateTime();
      s.className = navigator.onLine ? 'online' : 'offline';
      s.innerHTML = navigator.onLine ? 'online' : 'offline';

      if (i == 0) {
        readTextFile("/readSNR", "sensor");
      }
      else if (i == 1) {
        readTextFile("/read022", "eprm022");
      }
      else if (i == 2) {
        readTextFile("/read039", "eprm039");
      }
      else if (i == 3) {
        readTextFile("/readIS1", "inputs1");
      }
      else if (i == 4) {
        readTextFile("/readIS2", "inputs2");
      }
    else if (i == 5) {
      readTextFile("/readSDT", "sendata");
    }
    else if (i == 6) {
      readTextFile("/readRDT", "recdata");
    }
      timer = setTimeout(myTimer, 1000);
    }, 1000);

    function readTextFile(file, outputid) {
      var rawFile = new XMLHttpRequest();
      rawFile.open("GET", file, true);
      rawFile.send();

      document.getElementById("iterat").innerHTML = i;

      rawFile.onreadystatechange = function () {
        if (rawFile.readyState === 4 && (rawFile.status === 200 || rawFile.status == 0)) {
          document.getElementById(outputid).innerHTML = rawFile.responseText;

          i++;
          if (i > 6)
            i = 0;
        }
      }
    }

    // let timerT = setTimeout(function myTimerT() {
    //   updateTime();
    //   timerT = setTimeout(myTimerT, 1000);
    // }, 1000);

  window.onclick = function (event) { 
    if (event.target == modalzr) {
      if (i > 6) {
        i = 0;
      }
    }

    if (event.target == button01) {
      if (confirm("Pls Confirm to continue!")) {
        websocket.send("RST");
      }
    }
    else if (event.target == button02) {
      if (confirm("Pls Confirm to continue!")) {
        websocket.send("CLK");
      }
    }
    else if (event.target == button03) {
      if (confirm("Pls Confirm to continue!")) {
        websocket.send("GAM");
      }
    }
    else if (event.target == button04) {
      if (confirm("Pls Confirm to continue!")) {
        websocket.send("SLP");
      }
    }
    else if (event.target == button05) {
      if (confirm("Pls Confirm to continue!")) {
        websocket.send("ZER");
      }
    }
    else if (event.target == button06) {
      if (confirm("Pls Confirm to continue!")) {
        websocket.send("SEE");
      }
    }
    else if (event.target == button31) {
      if (confirm("Pls Confirm to continue!")) {
        websocket.send("SEP");
      }
    }
    else if (event.target == button07) {
      if (confirm("Pls Confirm to continue!")) {
        websocket.send("EXT");
      }
    }
    
    else if (event.target == button08) {
      if (confirm("Pls Confirm to continue!")) {
        websocket.send("BT1");
      }
    }
    else if (event.target == button09) {
      if (confirm("Pls Confirm to continue!")) {
        websocket.send("BT2");
      }
    }
    else if (event.target == button10) {
      if (confirm("Pls Confirm to continue!")) {
        websocket.send("BT3");
      }
    }
    else if (event.target == button11) {
      if (confirm("Pls Confirm to continue!")) {
        websocket.send("BT4");
      }
    }
    else if (event.target == button12) {
      if (confirm("Pls Confirm to continue!")) {
        websocket.send("BT5");
      }
    }
    else if (event.target == button13) {
      if (confirm("Pls Confirm to continue!")) {
        websocket.send("BT6");
      }
    }
    else if (event.target == button14) {
      if (confirm("Pls Confirm to continue!")) {
        websocket.send("BTW");
      }
    }
    else if (event.target == button15) {
      if (confirm("Pls Confirm to continue!")) {
        websocket.send("BTT");
      }
    }
    else if (event.target == button16) {
      if (confirm("Pls Confirm to continue!")) {
        websocket.send("BTQ");
      }
    }
    else if (event.target == button17) {
      if (confirm("Pls Confirm to continue!")) {
        websocket.send("BTU");
      }
    }
    else if (event.target == button18) {
      if (confirm("Pls Confirm to continue!")) {
        websocket.send("BTV");
      }
    }
    else if (event.target == button19) {
      if (confirm("Pls Confirm to continue!")) {
        websocket.send("BTY");
      }
    }
    else if (event.target == button20) {
      if (confirm("Pls Confirm to continue!")) {
        websocket.send("BTP");
      }
    }

    else if (event.target == button21) {
      if (confirm("Pls Confirm to continue!")) {
        websocket.send("BTr");
      }
    }
    else if (event.target == button22) {
        var hh, mm, ss, dd, dt, mo, yy, td;

        hh = $('#time_hh').val();
        mm = $('#time_mm').val();
        ss = $('#time_ss').val();
        dd = $('#date_dd').val();
        dt = $('#date_dt').val();
        mo = $('#date_mo').val();
        yy = $('#date_yy').val();

        if (hh <= 9) hh = "0" + hh;
        if (mm <= 9) mm = "0" + mm;
        if (ss <= 9) ss = "0" + ss;
        if (dt <= 9) dt = "0" + dt;
        if (mo <= 9) mo = "0" + mo;

        td = "Z" + "a" + ss.toString() + "," + mm.toString() + "," + hh.toString() + "," + dd.toString() + "," + dt.toString() + "," + mo.toString() + "," + yy.toString();

      if (confirm("Pls Confirm to continue for Hand Set Times")) {
          websocket.send(td);
        // websocket.send("BT8");
      }
    }
    else if (event.target == button23) {
        var bhh, bmm, bss, bdd, bdt, bmo, byy, bd, btd;

        bd = new Date();
        bhh = bd.getHours(), bmm = bd.getMinutes(), bss = bd.getSeconds();
        bdd = bd.getDay(), bdt = bd.getDate(), bmo = bd.getMonth(), byy = bd.getFullYear();

        if (bhh <= 9) bhh = "0" + bhh;
        if (bmm <= 9) bmm = "0" + bmm;
        if (bss <= 9) bss = "0" + bss;
        if (bdt <= 9) bdt = "0" + bdt;
        if (bmo <= 9) bmo = "0" + bmo;

        btd = "Z" + "b" + bss.toString() + "," + bmm.toString() + "," + bhh.toString() + "," + bdd.toString() + "," + bdt.toString() + "," + bmo.toString() + "," + byy.toString();

      if (confirm("Pls Confirm to continue for Browser Time")) {
          websocket.send(btd);
        // websocket.send("BT9");
      }
    }
    
    else if (event.target == button24) {
        websocket.send("BTH");
        navigator.vibrate(250);
    }
    else if (event.target == button25) {
        websocket.send("BTI");
        navigator.vibrate(250);
    }
    else if (event.target == button26) {
        websocket.send("BTJ");
        navigator.vibrate(250);
    }
    else if (event.target == button27) {
        websocket.send("BTK");
        navigator.vibrate(250);
    }
    else if (event.target == button28) {
        websocket.send("BTL");
        navigator.vibrate(250);
    }
    else if (event.target == button29) {
        websocket.send("BTM");
        navigator.vibrate(250);
    }
    else if (event.target == button30) {
        websocket.send("BTN");
        navigator.vibrate(250);
    }
  }
  }
  function onClose(event) {
    i = 0;
    iR = 0;
    i0 = 0;
    i1 = 0;
    i2 = 0;
  }
  function onMessage(event) {
    if (event.data == "clientgW") {
      document.getElementById('clientG').innerHTML = 'Client waiting to connect to Google.';
      document.getElementById('clientG').style.color = 'grey';
    }
    else if (event.data == "clientgON") {
      document.getElementById('clientG').innerHTML = 'Client connected to Google.';
      document.getElementById('clientG').style.color = 'blue';
    }
    else if (event.data == "clientgOFF") {
      document.getElementById('clientG').innerHTML = 'Client disconnected from Google.';
      document.getElementById('clientG').style.color = 'black';
    }
    else if (event.data == "clientgOFF1") {
      document.getElementById('clientG').innerHTML = 'Connection to google failed!';
      document.getElementById('clientG').style.color = 'red';
    }

    if (event.data == "clientcON") {
      document.getElementById('clientR').innerHTML = 'Client connected to Server.';
      document.getElementById('clientR').style.color = 'orange';
    }
    else if (event.data == "clientcOFF") {
      document.getElementById('clientR').innerHTML = 'Client disconnects from Server.';
      document.getElementById('clientR').style.color = 'black';
    }

    if (event.data == "ledctm") {
      document.getElementById('wifiR').innerHTML = 'CONNECTME';
      document.getElementById('wifiR').style.color = 'green';
    }
    else if (event.data == "ledctv") {
      document.getElementById('wifiR').innerHTML = 'VMXXXXXXX';
      document.getElementById('wifiR').style.color = 'green';
    }
    else if (event.data == "ledctp") {
      document.getElementById('wifiR').innerHTML = 'PIXELCLOCK';
      document.getElementById('wifiR').style.color = 'green';
    }
    else if (event.data == "ledwfn") {
      document.getElementById('wifiR').innerHTML = 'NO WIFI';
      document.getElementById('wifiR').style.color = 'black';
    }

    if (event.data == "devready") {
      document.getElementById('devred').innerHTML = 'PIXELCLOCK good to GO';
      document.getElementById('devred').style.color = 'green';
    }
    else if (event.data == "devready1") {
      document.getElementById('devred').innerHTML = 'Configuring time server';
      document.getElementById('devred').style.color = 'purple';
    }
    else if (event.data == "devready2") {
      document.getElementById('devred').innerHTML = 'Time server configured';
      document.getElementById('devred').style.color = 'blue';
    }
    else if (event.data == "devready3") {
      document.getElementById('devred').innerHTML = 'Time server ont configured';
      document.getElementById('devred').style.color = 'red';
    }

    if (event.data == "butRon") {
      document.getElementById('stateR').innerHTML = 'ON';
      document.getElementById('stateR').style.color = 'yellow';
    }
    else if (event.data == "butRoff") {
      document.getElementById('stateR').innerHTML = 'OFF';
      document.getElementById('stateR').style.color = 'black';
    }

    if (event.data == "but11on") {
      document.getElementById('state1S').innerHTML = 'ON';
      document.getElementById('state1S').style.color = 'red';
    }
    else if (event.data == "but11off") {
      document.getElementById('state1S').innerHTML = 'OFF';
      document.getElementById('state1S').style.color = 'black';
    }

    if (event.data == "butGon") {
      document.getElementById('stateG').innerHTML = 'ON';
      document.getElementById('stateG').style.color = 'yellow';
    }
    else if (event.data == "butGoff") {
      document.getElementById('stateG').innerHTML = 'OFF';
      document.getElementById('stateG').style.color = 'black';
    }

    if (event.data == "butHon") {
      document.getElementById('stateH').innerHTML = 'ON';
      document.getElementById('stateH').style.color = 'yellow';
    }
    else if (event.data == "butHoff") {
      document.getElementById('stateH').innerHTML = 'OFF';
      document.getElementById('stateH').style.color = 'black';
    }

    if (event.data == "butSon") {
      document.getElementById('stateS').innerHTML = 'ON';
      document.getElementById('stateS').style.color = 'yellow';
    }
    else if (event.data == "butSoff") {
      document.getElementById('stateS').innerHTML = 'OFF';
      document.getElementById('stateS').style.color = 'black';
    }

    if (event.data == "but0on") {
      document.getElementById('state0').innerHTML = 'ON';
      document.getElementById('state0').style.color = 'yellow';
    }
    else if (event.data == "but0off") {
      document.getElementById('state0').innerHTML = 'OFF';
      document.getElementById('state0').style.color = 'black';
    }

    if (event.data == "butTon") {
      document.getElementById('stateT').innerHTML = 'ON';
      document.getElementById('stateT').style.color = 'yellow';
    }
    else if (event.data == "butToff") {
      document.getElementById('stateT').innerHTML = 'OFF';
      document.getElementById('stateT').style.color = 'black';
    }

    if (event.data == "butQon") {
      document.getElementById('stateQ').innerHTML = 'ON';
      document.getElementById('stateQ').style.color = 'yellow';
    }
    else if (event.data == "butQoff") {
      document.getElementById('stateQ').innerHTML = 'OFF';
      document.getElementById('stateQ').style.color = 'black';
    }

    if (event.data == "butUon") {
      document.getElementById('stateU').innerHTML = 'ON';
      document.getElementById('stateU').style.color = 'yellow';
    }
    else if (event.data == "butUoff") {
      document.getElementById('stateU').innerHTML = 'OFF';
      document.getElementById('stateU').style.color = 'black';
    }

    if (event.data == "butVon") {
      document.getElementById('stateV').innerHTML = 'ON';
      document.getElementById('stateV').style.color = 'yellow';
    }
    else if (event.data == "butVoff") {
      document.getElementById('stateV').innerHTML = 'OFF';
      document.getElementById('stateV').style.color = 'black';
    }

    if (event.data == "butYon") {
      document.getElementById('stateY').innerHTML = 'ON';
      document.getElementById('stateY').style.color = 'yellow';
    }
    else if (event.data == "butYoff") {
      document.getElementById('stateY').innerHTML = 'OFF';
      document.getElementById('stateY').style.color = 'black';
    }

    if (event.data == "butPon") {
      document.getElementById('stateP').innerHTML = 'ON';
      document.getElementById('stateP').style.color = 'yellow';
    }
    else if (event.data == "butPoff") {
      document.getElementById('stateP').innerHTML = 'OFF';
      document.getElementById('stateP').style.color = 'black';
    }

    if (event.data == "but0on") {
      document.getElementById('state0').innerHTML = 'ON';
      document.getElementById('state0').style.color = 'yellow';
    }
    else if (event.data == "but0off") {
      document.getElementById('state0').innerHTML = 'OFF';
      document.getElementById('state0').style.color = 'black';
    }

    if (event.data == "but1on") {
      document.getElementById('state1').innerHTML = 'ON';
      document.getElementById('state1').style.color = 'yellow';
    }
    else if (event.data == "but1off") {
      document.getElementById('state1').innerHTML = 'OFF';
      document.getElementById('state1').style.color = 'black';
    }

    if (event.data == "but2on") {
      document.getElementById('state2').innerHTML = 'ON';
      document.getElementById('state2').style.color = 'yellow';
    }
    else if (event.data == "but2off") {
      document.getElementById('state2').innerHTML = 'OFF';
      document.getElementById('state2').style.color = 'black';
    }

    if (event.data == "but3on") {
      document.getElementById('state3').innerHTML = 'ON';
      document.getElementById('state3').style.color = 'yellow';
    }
    else if (event.data == "but3off") {
      document.getElementById('state3').innerHTML = 'OFF';
      document.getElementById('state3').style.color = 'black';
    }

    if (event.data == "but4on") {
      document.getElementById('state4').innerHTML = 'ON';
      document.getElementById('state4').style.color = 'yellow';
    }
    else if (event.data == "but4off") {
      document.getElementById('state4').innerHTML = 'OFF';
      document.getElementById('state4').style.color = 'black';
    }

    if (event.data == "but5on") {
      document.getElementById('state5').innerHTML = 'ON';
      document.getElementById('state5').style.color = 'yellow';
    }
    else if (event.data == "but5off") {
      document.getElementById('state5').innerHTML = 'OFF';
      document.getElementById('state5').style.color = 'black';
    }

    if (event.data == "but6on") {
      document.getElementById('state6').innerHTML = 'ON';
      document.getElementById('state6').style.color = 'yellow';
    }
    else if (event.data == "but6off") {
      document.getElementById('state6').innerHTML = 'OFF';
      document.getElementById('state6').style.color = 'black';
    }

    if (event.data == "but7on") {
      document.getElementById('state7').innerHTML = 'ON';
      document.getElementById('state7').style.color = 'yellow';
    }
    else if (event.data == "but7off") {
      document.getElementById('state7').innerHTML = 'OFF';
      document.getElementById('state7').style.color = 'black';
    }

    if (event.data == "but8on") {
      document.getElementById('state8').innerHTML = 'ON';
      document.getElementById('state8').style.color = 'yellow';
    }
    else if (event.data == "but8off") {
      document.getElementById('state8').innerHTML = 'OFF';
      document.getElementById('state8').style.color = 'black';
    }

    if (event.data == "but9on") {
      document.getElementById('state9').innerHTML = 'ON';
      document.getElementById('state9').style.color = 'yellow';
    }
    else if (event.data == "but9off") {
      document.getElementById('state9').innerHTML = 'OFF';
      document.getElementById('state9').style.color = 'black';
    }

    if (event.data == "but10on") {
      document.getElementById('state10').innerHTML = 'ON';
      document.getElementById('state10').style.color = 'yellow';
    }
    else if (event.data == "but10off") {
      document.getElementById('state10').innerHTML = 'OFF';
      document.getElementById('state10').style.color = 'black';
    }

    if (event.data == "but11on") {
      document.getElementById('state11').innerHTML = 'ON';
      document.getElementById('state11').style.color = 'yellow';
    }
    else if (event.data == "but11off") {
      document.getElementById('state11').innerHTML = 'OFF';
      document.getElementById('state11').style.color = 'black';
    }

    if (event.data == "but12on") {
      document.getElementById('state12').innerHTML = 'ON';
      document.getElementById('state12').style.color = 'yellow';
    }
    else if (event.data == "but12off") {
      document.getElementById('state12').innerHTML = 'OFF';
      document.getElementById('state12').style.color = 'black';
    }

    if (event.data == "but13on") {
      document.getElementById('state13').innerHTML = 'ON';
      document.getElementById('state13').style.color = 'yellow';
    }
    else if (event.data == "but13off") {
      document.getElementById('state13').innerHTML = 'OFF';
      document.getElementById('state13').style.color = 'black';
    }

    if (event.data == "but15on") {
      document.getElementById('state15').innerHTML = 'ON';
      document.getElementById('state15').style.color = 'yellow';
    }
    else if (event.data == "but15off") {
      document.getElementById('state15').innerHTML = 'OFF';
      document.getElementById('state15').style.color = 'black';
    }

    if (event.data == "but14on") {
      document.getElementById('state14').innerHTML = 'ON';
      document.getElementById('state14').style.color = 'yellow';
    }
    else if (event.data == "but14off") {
      document.getElementById('state14').innerHTML = 'OFF';
      document.getElementById('state14').style.color = 'black';
    }

    if (event.data == "butRon" || event.data == "butGon" || event.data == "butHon" || event.data == "butSon" ||  event.data == "but0on" || event.data == "butTon" || event.data == "butQon" || event.data == "butUon" || event.data == "butVon" || event.data == "butYon" || event.data == "butPon" || event.data == "but0on" || event.data == "but1on" || event.data == "but2on" || event.data == "but3on" || event.data == "but4on" || event.data == "but5on" || event.data == "but6on" ||  event.data == "but7on" || event.data == "but8on" || event.data == "but9on" ||event.data == "but10on" ||event.data == "but11on" ||event.data == "but12on" ||event.data == "but13on" ||event.data == "but15on" ||event.data == "brwtimeauto"||event.data == "devready4") {
      navigator.vibrate(250);
    }
    if (event.data == "butRoff")
      {navigator.vibrate(100);}

    if (event.data == "appleEaten") {
      navigator.vibrate(50);
    }

    if (event.data == "gameover") {
      navigator.vibrate(500);
    }

    if (event.data == "brwtimeauto") {
      var bhh, bmm, bss, bdd, bdt, bmo, byy, bd, btd;

      bd = new Date();
      bhh = bd.getHours(), bmm = bd.getMinutes(), bss = bd.getSeconds();
      bdd = bd.getDay(), bdt = bd.getDate(), bmo = bd.getMonth(), byy = bd.getFullYear();

      if (bhh <= 9) bhh = "0" + bhh;
      if (bmm <= 9) bmm = "0" + bmm;
      if (bss <= 9) bss = "0" + bss;
      if (bdt <= 9) bdt = "0" + bdt;
      if (bmo <= 9) bmo = "0" + bmo;

      btd = "Z" + "w" + bss.toString() + "," + bmm.toString() + "," + bhh.toString() + "," + bdd.toString() + "," + bdt.toString() + "," + bmo.toString() + "," + byy.toString();

      websocket.send(btd);
    }

    if (event.data == "devready4") {
          websocket.send("SSY");
    }
  }
)rawliteral";

const char indexOffline_html[] PROGMEM = R"rawliteral(
<!DOCTYPE HTML>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="author" content="Uchefuna Ezike">
  <meta name="viewport" content="width=device-width, initial-scale=1.0,maximum-scale=1.0, user-scalable=no">
  <title>Pixel Clock</title>
  <link rel="icon" href="data:,">
  <link rel="stylesheet" type="text/css" href="styleOffline.css">
</head>
<body>
  <div class="header">
    <h1>UcheSkillz Eleckronics</h1>
    <h2><i>PIXEL CLOCK/GAMES</i></h2>
    <div class="google_labels">
      <span class="google_values" id="clientG">%CLIENTG%</span>
    </div>
    <div class="sensor_labels">
      Sensor Value:
      <span id="sensor" class="sensor_values">%SENSOR%</span>
    </div>
    <div class="wifi_labels">
      WiFi:
      <span class="IO_box1" id="wifiR">%WIFIR%</span>
      <span class="IO_box2" id="clientR">%CLIENTR%</span>
    </div>
  </div>

  <div class="parent">

    <div class="wrapper">
      <div class="left">
        <div class="topleft">
          Restart<span id="stateR" class="IO_box3">%STATER%</span><br>
        </div>
        <div>
          <button class='button button5' id="toggleR">Push</button>
          <span id="s100" class="IO_box8">%S100%</span>
        </div>
      </div>

      <div class="right">
        <div class="topleft">
          Clock <span id="stateG" class="IO_box3">%STATEG%</span><br>
        </div>
        <div>
          <button class='button button5' id="toggleG">Push</button>
          <span id="s119" class="IO_box8">%S119%</span>
        </div>
      </div>

      <div class="left">
        <div class="topleft">
          Games<span id="stateH" class="IO_box3">%STATEH%</span><br>
        </div>
        <div>
          <button class='button button5' id="toggleH">Push</button>
          <span id="s120" class="IO_box8">%S120%</span>
        </div>
      </div>

      <div class="right">
        <div class="topleft">
          SLEEP<span id="stateS" class="IO_box3">%STATES%</span><br>
        </div>
        <div>
          <button class='button button5' id="toggleS">Push</button>
          <span id="s103" class="IO_box8">%S103%</span>
        </div>
      </div>

      <div class="left">
        <div class="topleft">
          EEPROM<span id="state13" class="IO_box3">%STATE13%</span><br>
        </div>
        <div>
          <button class='button button5' id="toggle17">Push</button>
          <span id="s391" class="IO_box8">%S391%</span>
        </div>
      </div>

      <div class="right">
        <div class="topleft">
          COPYC<span id="state15" class="IO_box3">%STATE15%</span><br>
        </div>
        <div>
          <button class='button button5' id="toggle20">Push</button>
          <span id="s105" class="IO_box8">%S105%</span>
        </div>
      </div>

      <div class="left">
        <div class="topleft">
          ZERO<span id="state0" class="IO_box3">%STATE0%</span><br>
        </div>
        <div>
          <button class='button button5' id="toggle0">Push</button>
          <span id="s101" class="IO_box8">%S101%</span>
        </div>
      </div>


      <div class="right">
        <div class="topleft">
          ResetEE<span id="state14" class="IO_box3">%STATE14%</span><br>
        </div>
        <div>
          <button class='button button5' id="toggle18">Push</button>
          <span id="s401" class="IO_box8">%S401%</span>
        </div>
      </div>
    </div>

    <!-- Time/Date -->
    <div class="child">
      <div>
        <strong id="myClock" class="clock"></strong>
      </div>
      <div>
        <span id="myDate" class="date"></span>
      </div>
    </div>
  </div>

  <div class="parent1">
    <div class="ota_labels">
      OTA COUNT:
      <span class="ota_box">%BASICOTA%</span>
    </div>
    <div class="mac_labels">
      Pix MAC Address:
      <span class="mac_box" >%OLDMAC%</span>
    </div>

    <div class="magin_divider"> </div>

    <div class="sensor_labels">
      eeprom22 Value:
      <span id="eprm022" class="sensor_values">%EPRM022%</span>
    </div>
    <div class="sensor_labels">
      eeprom39 Value:
      <span id="eprm039" class="sensor_values">%EPRM039%</span>
    </div>
    <div class="sensor_labels">
      inputS1 Value:
      <span id="inputs1" class="sensor_values">%INPUTS1%</span>
    </div>
    <div class="sensor_labels">
      inputS2 Value:
      <span id="inputs2" class="sensor_values">%INPUTS2%</span>
    </div>
    <div class="sensor_labels">
      Data Sent:
      <span id="sendata" class="sensor_values">%SENDATA%</span>
    </div>
    <div class="sensor_labels">
      Data Reci:
      <span id="recdata" class="sensor_values">%RECDATA%</span>
    </div>
    <div class="magin_divider"> </div>
    <div class="magin_divider"> </div>
    <div class="sensor_labels" id="tap2zero">
      iteration Value:
      <span id="iterat" class="sensor_values"></span>
    </div>
    <div class="sensor_labels">
      iterationR Value:
      <span id="iteratR" class="sensor_values"></span>
    </div>
    <div class="online_labels">
      Online Status:
      <span id="statusO">%STATUS%</span>
    </div>
      <div>
      <form action="/ucheskillz.com">
        <input class="h1g" type="submit" value="Return to Homepage">
      </form> 
    </div>
  </div>

    <script src="scriptOffline.js"></script>
  <script>
    
        window.addEventListener('load', onLoad);

        function onLoad(event) {
            initButtonR();
        }

  function initButtonR() {
      function readTextFileR(fileR, outputidR) {
        var rawFileR = new XMLHttpRequest();
        rawFileR.open("GET", fileR, true);
        rawFileR.send();

        document.getElementById("iteratR").innerHTML = iR;

        rawFileR.onreadystatechange = function () {
          if (rawFileR.readyState === 4 && (rawFileR.status === 200 || rawFileR.status == 0)) {
            document.getElementById(outputidR).innerHTML = rawFileR.responseText;

            iR++;
            if (iR > 6)
              iR = 0;
          }
        }
      }

      let timerR = setTimeout(function myTimerR() {
        if (iR == 0) {
          readTextFileR("/sse100", "s100");
        }
        else if (iR == 1) {
          readTextFileR("/sse119", "s119");
        }
        else if (iR == 2) {
          readTextFileR("/sse120", "s120");
        }
        else if (iR == 3) {
          readTextFileR("/sse103", "s103");
        }
        else if (iR == 4) {
          readTextFileR("/sse101", "s101");
        }
        else if (iR == 5) {
          readTextFileR("/sse391", "s391");
        }
        else if (iR == 6) {
          readTextFileR("/sse105", "s105");
        }
        timerR = setTimeout(myTimerR, 1000);
      }, 1000)
  }
  </script>
</body>
</html>
)rawliteral";

const char index0Offline_html[] PROGMEM = R"rawliteral(
<!DOCTYPE HTML>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="author" content="Uchefuna Ezike">
  <meta name="viewport" content="width=device-width, initial-scale=1.0,maximum-scale=1.0, user-scalable=no">
  <title>Pixel Clock</title>
  <link rel="icon" href="data:,">
  <link rel="stylesheet" type="text/css" href="styleOffline.css">
</head>
<body>
  <div class="header">
    <h1>UcheSkillz Eleckronics</h1>
    <h2><i>PIXEL CLOCK</i></h2>
    <div class="google_labels">
      <span class="google_values" id="clientG">%CLIENTG%</span>
    </div>
    <div class="sensor_labels">
      Sensor Value:
      <span id="sensor" class="sensor_values">%SENSOR%</span>
    </div>
    <div class="wifi_labels">
      WiFi:
      <span class="IO_box1" id="wifiR">%WIFIR%</span>
      <span class="IO_box2" id="clientR">%CLIENTR%</span>
    </div>
  </div>

  <div class="parent">

    <!-- Push Buttons -->
    <div class="wrapper">
      <div class="left">
        <div class="topleft">
          AP/STA OTA<span id="state1" class="IO_box3">%STATE1%</span><br>
        </div>
        <div>
        <button class='button button5' id="toggle1">Push</button>
          <span id="s104" class="IO_box8">%S104%</span>
        </div>
      </div>

      <div class="right">
        <div class="topleft">
          Internet Time<span id="state2" class="IO_box3">%STATE2%</span><br>
        </div>
        <div>
        <button class='button button5' id="toggle2">Push</button>
          <!-- <span id="s105" class="IO_box8">%S105%</span>-->
        </div>
      </div>

      <div class="left">
        <div class="topleft">
          Time Sync<span id="state3" class="IO_box3">%STATE3%</span><br>
        </div>
        <div>
        <button class='button button5' id="toggle3">Push</button>
          <span id="s106" class="IO_box8">%S106%</span>
        </div>
      </div>

      <div class="right">
        <div class="topleft">
          Weather Sync<span id="state4" class="IO_box3">%STATE4%</span><br>
        </div>
        <div>
        <button class='button button5' id="toggle4">Push</button>
          <span id="s107" class="IO_box8">%S107%</span>
        </div>
      </div>

      <div class="left">
        <div class="topleft">
          Talk SensorM<span id="state5" class="IO_box3">%STATE5%</span><br>
        </div>
        <div>
        <button class='button button5' id="toggle5">Push</button>
          <span id="s108" class="IO_box8">%S108%</span>
        </div>
      </div>

      <div class="right">
        <div class="topleft">
          Talk SensorX<span id="state6" class="IO_box3">%STATE6%</span><br>
        </div>
        <div>
        <button class='button button5' id="toggle6">Push</button>
          <span id="s109" class="IO_box8">%S109%</span>
        </div>
      </div>

      <div class="leftStretch">
        <div class="topleft">
          Talk SensorH<span id="state10" class="IO_box3">%STATE10%</span><br>
        </div>
        <div>
        <button class='button button5' id="toggle19">Push</button>
          <span id="s110" class="IO_box8">%S110%</span>
        </div>
      </div>

      <div class="left">
        <div class="topleft">
          Time Game<span id="stateT" class="IO_box3">%STATET%</span><br>
        </div>
        <div>
        <button class='button button5' id="toggleT">Push</button>
          <span id="s121" class="IO_box8">%S121%</span>
        </div>
      </div>

      <div class="right">
        <div class="topleft">
          Check DATE<span id="stateQ" class="IO_box3">%STATEQ%</span><br>
        </div>
        <div>
        <button class='button button5' id="toggleQ">Push</button>
          <span id="s111" class="IO_box8">%S111%</span>
        </div>
      </div>

      <div class="left">
        <div class="topleft">
          Check TALKS<span id="stateU" class="IO_box3">%STATEU%</span><br>
        </div>
        <div>
        <button class='button button5' id="toggleU">Push</button>
          <span id="s112" class="IO_box8">%S112%</span>
        </div>
      </div>

      <div class="right">
        <div class="topleft">
          Check NOW<span id="stateV" class="IO_box3">%STATEV%</span><br>
        </div>
        <div>
        <button class='button button5' id="toggleV">Push</button>
          <span id="s113" class="IO_box8">%S113%</span>
        </div>
      </div>

      <div class="left">
        <div class="topleft">
          LOVEBUZZ<span id="stateY" class="IO_box3">%STATEY%</span><br>
        </div>
        <div>
        <button class='button button5' id="toggleY">Push</button>
          <span id="s115" class="IO_box8">%S115%</span>
        </div>
      </div>

      <div class="right">
        <div class="topleft">
          Check SCROLL<span id="stateP" class="IO_box3">%STATEP%</span><br>
        </div>
        <div>
        <button class='button button5' id="toggleP">Push</button>
          <span id="s114" class="IO_box8">%S114%</span>
        </div>
      </div>
    </div>

    <!-- Time/Date -->
    <div class="child">
      <div>
        <strong id="myClock" class="clock"></strong>
      </div>
      <div>
        <span id="myDate" class="date"></span>
      </div>
    </div>
  </div>

  <div class="parent1">
    <div class="ota_labels">
      OTA COUNT:
      <span class="ota_box">%BASICOTA%</span>
    </div>
    <div class="mac_labels">
      Pix MAC Address:
      <span class="mac_box" >%OLDMAC%</span>
    </div>

    <div class="magin_divider"> </div>

    <div class="sensor_labels">
      eeprom22 Value:
      <span id="eprm022" class="sensor_values">%EPRM022%</span>
    </div>
    <div class="sensor_labels">
      eeprom39 Value:
      <span id="eprm039" class="sensor_values">%EPRM039%</span>
    </div>
    <div class="sensor_labels">
      inputS1 Value:
      <span id="inputs1" class="sensor_values">%INPUTS1%</span>
    </div>
    <div class="sensor_labels">
      inputS2 Value:
      <span id="inputs2" class="sensor_values">%INPUTS2%</span>
    </div>
    <div class="sensor_labels">
      Data Sent:
      <span id="sendata" class="sensor_values">%SENDATA%</span>
    </div>
    <div class="sensor_labels">
      Data Reci:
      <span id="recdata" class="sensor_values">%RECDATA%</span>
    </div>
    <div class="magin_divider"> </div>
    <div class="magin_divider"> </div>
    <div class="sensor_labels" id="tap2zero">
      iteration Value:
      <span id="iterat" class="sensor_values"></span>
    </div>
    <div class="sensor_labels">
      iteration0 Value:
      <span id="iterat0" class="sensor_values"></span>
    </div>
    <div class="online_labels">
      Online Status:
      <span id="statusO">%STATUS%</span>
    </div>
      <div>
      <form action="/ucheskillz.com">
        <input class="h1g" type="submit" value="Return to Homepage">
      </form> 
    </div>
  </div>

    <script src="scriptOffline.js"></script>
  <script>

  window.addEventListener('load', onLoad);

  function onLoad(event) {
      initButton0();
  }

    function initButton0() {
      function readTextFile0(file0, outputid0) {
        var rawFile0 = new XMLHttpRequest();
        rawFile0.open("GET", file0, true);
        rawFile0.send();

        document.getElementById("iterat0").innerHTML = i0;

        rawFile0.onreadystatechange = function () {
          if (rawFile0.readyState === 4 && (rawFile0.status === 200 || rawFile0.status == 0)) {
            document.getElementById(outputid0).innerHTML = rawFile0.responseText;

            i0++;
            if (i0 > 12)
              i0 = 0;
          }
        }
      }

      let timer0 = setTimeout(function myTimer0() {
        if (i0 == 0) {
          readTextFile0("/sse104", "s104");
        }
        else if (i0 == 1) {
          // readTextFile0("/sse105", "s105");
        }
        else if (i0 == 2) {
          readTextFile0("/sse106", "s106");
        }
        else if (i0 == 3) {
          readTextFile0("/sse107", "s107");
        }
        else if (i0 == 4) {
          readTextFile0("/sse108", "s108");
        }
        else if (i0 == 5) {
          readTextFile0("/sse109", "s109");
        }
        else if (i0 == 6) {
          readTextFile0("/sse110", "s110");
        }
        else if (i0 == 7) {
          readTextFile0("/sse121", "s121");
        }
        else if (i0 == 8) {
          readTextFile0("/sse111", "s111");
        }
        else if (i0 == 9) {
          readTextFile0("/sse112", "s112");
        }
        else if (i0 == 10) {
          readTextFile0("/sse113", "s113");
        }
        else if (i0 == 11) {
          readTextFile0("/sse115", "s115");
        }
        else if (i0 == 12) {
          readTextFile0("/sse114", "s114");
        }
        timer0 = setTimeout(myTimer0, 1000);
      }, 1000);
    }
  </script>
</body>
</html>
)rawliteral";

const char index1Offline_html[] PROGMEM = R"rawliteral(
<!DOCTYPE HTML>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="author" content="Uchefuna Ezike">
  <meta name="viewport" content="width=device-width, initial-scale=1.0,maximum-scale=1.0, user-scalable=no">
  <title>Pixel Clock</title>
  <link rel="icon" href="data:,">
  <link rel="stylesheet" type="text/css" href="styleOffline.css">
</head>
<body>
  <div class="header">
    <h1>UcheSkillz Eleckronics</h1>
    <h2><i>PIXEL CLOCK</i></h2>
    <div class="google_labels">
      <span class="google_values" id="clientG">%CLIENTG%</span>
    </div>
    <div class="sensor_labels">
      Sensor Value:
      <span id="sensor" class="sensor_values">%SENSOR%</span>
    </div>
    <div class="wifi_labels">
      WiFi:
      <span class="IO_box1" id="wifiR">%WIFIR%</span>
      <span class="IO_box2" id="clientR">%CLIENTR%</span>
    </div>
  </div>

  <div class="parent">

    <div class="wrapper">
      <div class="leftStretch">
        <div class="topleft">
          Reset Time<span id="state7" class="IO_box3">%STATE7%</span><br>
        </div>
        <div>
        <button class='button button5' id="toggle7">Push</button>
          <span id="s116" class="IO_box8">%S116%</span>
        </div>
      </div>

      <div class="leftStretchT">
        <div class="topleft">
          <span class="writeDT">Time</span>
          <div>
            <input type="text" id="time_hh" size="4" class="input_box" autofocus> <span class="writeDY">hh</span>
            <input type="text" id="time_mm" size="4" class="input_box" autofocus> <span class="writeDY">mm</span>
            <input type="text" id="time_ss" size="4" class="input_box" autofocus> <span class="writeDY">ss</span>
          </div>
        </div>
      </div>

      <div class="leftStretchD">
        <div class="topleft">
          <span class="writeDT">Date</span>
          <div>
            <input type="text" id="date_dd" size="4" class="input_box" autofocus> <span class="writeDY">dd</span>
            <input type="text" id="date_dt" size="4" class="input_box" autofocus> <span class="writeDY">dt</span>
            <input type="text" id="date_mo" size="4" class="input_box" autofocus> <span class="writeDY">mo</span>
            <input type="text" id="date_yy" size="4" class="input_box" autofocus> <span class="writeDY">yy</span>
          </div>
        </div>
      </div>

      <div class="leftStretchST">
        <div class="topleft">
          Set Time<span id="state8" class="IO_box3">%STATE8%</span><br>
        </div>
        <div>
        <button class='button button5' id="toggle8">Push</button>
          <span id="s117" class="IO_box8">%S117%</span>
        </div>
      </div>

      <div class="leftStretch">
        <div class="topleft">
          Browser Time<span id="state9" class="IO_box3">%STATE9%</span><br>
        </div>
        <div>
        <button class='button button5' id="toggle9">Push</button>
          <span id="s118" class="IO_box8">%S118%</span>
        </div>
      </div>
    </div>

    <!-- Time/Date -->
    <div class="child">
      <div>
        <strong id="myClock" class="clock"></strong>
      </div>
      <div>
        <span id="myDate" class="date"></span>
      </div>
    </div>
  </div>

  <div class="parent1">
    <div class="ota_labels">
      OTA COUNT:
      <span class="ota_box">%BASICOTA%</span>
    </div>
    <div class="mac_labels">
      Pix MAC Address:
      <span class="mac_box" >%OLDMAC%</span>
    </div>

    <div class="magin_divider"> </div>

    <div class="sensor_labels">
      eeprom22 Value:
      <span id="eprm022" class="sensor_values">%EPRM022%</span>
    </div>
    <div class="sensor_labels">
      eeprom39 Value:
      <span id="eprm039" class="sensor_values">%EPRM039%</span>
    </div>
    <div class="sensor_labels">
      inputS1 Value:
      <span id="inputs1" class="sensor_values">%INPUTS1%</span>
    </div>
    <div class="sensor_labels">
      inputS2 Value:
      <span id="inputs2" class="sensor_values">%INPUTS2%</span>
    </div>
    <div class="sensor_labels">
      Data Sent:
      <span id="sendata" class="sensor_values">%SENDATA%</span>
    </div>
    <div class="sensor_labels">
      Data Reci:
      <span id="recdata" class="sensor_values">%RECDATA%</span>
    </div>
    <div class="magin_divider"> </div>
    <div class="magin_divider"> </div>
    <div class="sensor_labels" id="tap2zero">
      iteration Value:
      <span id="iterat" class="sensor_values"></span>
    </div>
    <div class="sensor_labels">
      iteration1 Value:
      <span id="iterat1" class="sensor_values"></span>
    </div>
    <div class="online_labels">
      Online Status:
      <span id="statusO">%STATUS%</span>
    </div>
      <div>
      <form action="/ucheskillz.com">
        <input class="h1g" type="submit" value="Return to Homepage">
      </form> 
    </div>
  </div>

    <script src="scriptOffline.js"></script>
  <script>

  window.addEventListener('load', onLoad);

  function onLoad(event) {
        initButton1();
  }

    function initButton1() {
      function readTextFile1(file1, outputid1) {
        var rawFile1 = new XMLHttpRequest();
        rawFile1.open("GET", file1, true);
        rawFile1.send();

        document.getElementById("iterat1").innerHTML = i1;

        rawFile1.onreadystatechange = function () {
          if (rawFile1.readyState === 4 && (rawFile1.status === 200 || rawFile1.status == 0)) {
            document.getElementById(outputid1).innerHTML = rawFile1.responseText;

            i1++;
            if (i1 > 2)
              i1 = 0;
          }
        }
      }

      let timer1 = setTimeout(function myTimer1() {
        if (i1 == 0) {
          readTextFile1("/sse116", "s116");
        }
        else if (i1 == 1) {
          readTextFile1("/sse117", "s117");
        }
        else if (i1 == 2) {
          readTextFile1("/sse118", "s118");
        }
        timer1 = setTimeout(myTimer1, 1000);
      }, 1000);
    }
  </script>
</body>
</html>
)rawliteral";

const char index2Offline_html[] PROGMEM = R"rawliteral(
<!DOCTYPE HTML>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="author" content="Uchefuna Ezike">
  <meta name="viewport" content="width=device-width, initial-scale=1.0,maximum-scale=1.0, user-scalable=no">
  <title>Pixel Clock</title>
  <link rel="icon" href="data:,">
  <link rel="stylesheet" type="text/css" href="styleOffline.css">
</head>
<body>
  <body>
  <div class="header">
    <h1>UcheSkillz Eleckronics</h1>
    <h2><i>PIXEL GAMES</i></h2>
    <div class="google_labels">
      <span class="google_values" id="clientG">%CLIENTG%</span>
    </div>
    <div class="sensor_labels">
      Sensor Value:
      <span id="sensor" class="sensor_values">%SENSOR%</span>
    </div>
    <div class="wifi_labels">
      WiFi:
      <span class="IO_box1" id="wifiR">%WIFIR%</span>
      <span class="IO_box2" id="clientR">%CLIENTR%</span>
    </div>
  </div>

  <div class="parent">

    <div class="wrapper">
      <div class="left">
        <div class="topleft">
          PLAY/RESTART<span id="state10" class="IO_box3">%STATE10%</span><br>
        </div>
        <div>
        <button class='button button5' id="toggle10">Push</button>
          <span id="s123" class="IO_box8">%S123%</span>
        </div>
      </div>

      <div class="right">
        <div class="topleft">
          PAUSE<span id="state11" class="IO_box3">%STATE11%</span><br>
        </div>
        <div>
        <button class='button button5' id="toggle11">Push</button>
          <span id="s124" class="IO_box8">%S124%</span>
        </div>
      </div>

      <div class="leftStretchC">
        <div class="topleft">
          COLOR CHANGE<span id="state12" class="IO_box3">%STATE12%</span><br>
        </div>
        <div>
        <button class='button button5' id="toggle12">Push</button>
          <span id="s122" class="IO_box8">%S122%</span>
        </div>
      </div>
    </div>

    <div class="upTop">
      <div class="triangle_up" type="button" id="toggle13"></div>
      <div class="triangle_left" type="button" id="toggle14"></div>
      <div class="triangle_right" type="button" id="toggle15"></div>
      <div class="triangle_down" type="button" id="toggle16"></div>

      <div class="upDown">
        <div>
          <span class="IO_box9L"> LEFT</span>
          <span class="IO_box9U"> UP</span>
          <span class="IO_box9R"> RIGHT</span>
          <span class="IO_box9D"> DOWN</span>
        </div>
        <div>
          <span id="s125" class="IO_box10">%S125%</span>
          <span id="s126" class="IO_box10">%S126%</span>
          <span id="s127" class="IO_box10">%S127%</span>
          <span id="s128" class="IO_box10">%S128%</span>
        </div>
      </div>
    </div>

    <!-- Time/Date -->
    <div class="child">
      <div>
        <strong id="myClock" class="clock"></strong>
      </div>
      <div>
        <span id="myDate" class="date"></span>
      </div>
    </div>
  </div>

  <div class="parent1">
    <div class="ota_labels">
      OTA COUNT:
      <span class="ota_box">%BASICOTA%</span>
    </div>
    <div class="mac_labels">
      Pix MAC Address:
      <span class="mac_box" >%OLDMAC%</span>
    </div>

    <div class="magin_divider"> </div>

    <div class="sensor_labels">
      eeprom22 Value:
      <span id="eprm022" class="sensor_values">%EPRM022%</span>
    </div>
    <div class="sensor_labels">
      eeprom39 Value:
      <span id="eprm039" class="sensor_values">%EPRM039%</span>
    </div>
    <div class="sensor_labels">
      inputS1 Value:
      <span id="inputs1" class="sensor_values">%INPUTS1%</span>
    </div>
    <div class="sensor_labels">
      inputS2 Value:
      <span id="inputs2" class="sensor_values">%INPUTS2%</span>
    </div>
    <div class="sensor_labels">
      Data Sent:
      <span id="sendata" class="sensor_values">%SENDATA%</span>
    </div>
    <div class="sensor_labels">
      Data Reci:
      <span id="recdata" class="sensor_values">%RECDATA%</span>
    </div>
    <div class="magin_divider"> </div>
    <div class="magin_divider"> </div>
    <div class="sensor_labels" id="tap2zero">
      iteration Value:
      <span id="iterat" class="sensor_values"></span>
    </div>
    <div class="sensor_labels">
      iteration2 Value:
      <span id="iterat2" class="sensor_values"></span>
    </div>
    <div class="online_labels">
      Online Status:
      <span id="statusO">%STATUS%</span>
    </div>
      <div>
      <form action="/ucheskillz.com">
        <input class="h1g" type="submit" value="Return to Homepage">
      </form> 
    </div>
  </div>

    <script src="scriptOffline.js"></script>
  <script>

  window.addEventListener('load', onLoad);

  function onLoad(event) {
        initButton2();
  }

    function initButton2() {
         function readTextFile2(file2, outputid2) {
            var rawFile2 = new XMLHttpRequest();
            rawFile2.open("GET", file2, true);
            rawFile2.send();

            document.getElementById("iterat2").innerHTML = i2;

            rawFile2.onreadystatechange = function () {
               if (rawFile2.readyState === 4 && (rawFile2.status === 200 || rawFile2.status == 0)) {
                  document.getElementById(outputid2).innerHTML = rawFile2.responseText;

                  i2++;
                  if (i2 > 2)
                     i2 = 0;
               }
            }
         }

         let timer2 = setTimeout(function myTimer2() {
            if (i2 == 0) {
               readTextFile2("/sse123", "s123");
            }
            else if (i2 == 1) {
               readTextFile2("/sse124", "s124");
            }
            else if (i2 == 2) {
               readTextFile2("/sse122", "s122");
            }
            else if (i2 == 2) {
               readTextFile2("/sse125", "s125");
            }
            else if (i2 == 2) {
               readTextFile2("/sse126", "s126");
            }
            else if (i2 == 2) {
               readTextFile2("/sse127", "s127");
            }
            else if (i2 == 2) {
               readTextFile2("/sse128", "s128");
            }
            timer2 = setTimeout(myTimer2, 1000);
         }, 1000);
    }
  </script>
</body>
</html>
)rawliteral";
