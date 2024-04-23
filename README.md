# Temperature monitoring Project

This project is a showcase of a system for keeping track of the environmental temperature. It is based on the ESP8266 board and uses the DHT11 temperature sensor and two LEDS that light up if a certain treshold for the temperature or humidity is passed. The Arduino IDE is used to write the code and connect to the development board.

## Design and Schematics

### Schema, designed with Circuit.io
![Board Schema](/Images/Board_Schema.png)

### Image of the complete System
![Board Image](/Images/Board_Image.png)

## Prerequisites:
- Arduino IDE: https://www.arduino.cc/en/software
- Components:
  - Wemos ESP8266 Development Board with CH340G: https://www.optimusdigital.ro/en/esp8266-boards/3312-wemos-micro-placa-de-dezvoltare-wifi-cu-esp8266-i-ch340g.html
  - HQ BreadBoard with 830 points: https://www.optimusdigital.ro/en/breadboards/8-breadboard-hq-830-points.html?search_query=breadboard&results=413
  - DHT11 / DHT22 temperature and hunidity sensor: https://www.optimusdigital.ro/en/temperature-sensors/584-senzor-de-temperatura-dht11.html?search_query=dht11&results=20
  - 1 Red 5mm LED - for temperature warnings
  - 1 Yellow 5mm LED - for humidity warnings
  - 2 resistors of 100 ohms 
  - 1 resistor of 10 kilo ohms
  - 1 Micro USB to USB cable
  - 10 jumper wires(male to male) of different lengths and colors: https://www.optimusdigital.ro/en/wires-with-connectors/12-breadboard-jumper-wire-set.html
    
 These components can be found in the Plusivo Super Starter Kit: https://www.optimusdigital.ro/ro/kituri-optimus-digital/7356-kit-wireless-super-starter-cu-esp8266.html

## Libraries:

## Setup and Build:
### Hardware:
  - Connection for the Development Board:
     - Connect the ESP8266 Board to the Breadboard from positions B to I
     - Connect the micro USB cable to the development board
     - Place a wire from the GND pin of the Development Board to the GND Bus on the Breadboard
     - Place a wire from the 3v3 pin of the Development Board to the Positive Bus on the Breadboard
    
  - Connection for DHT11 Sensor:
     - Connect the DHT11 sensor to the Breadboard
     - Place a wire from the GND pin (right-most pin) of the sensor to the GND Bus on the Breadboard
     - Place a wire from the Data pin (second pin) of the sensor to the D1 port of the development board
     - Place the 10 Kilo ohm resistor from the Data pin (second pin) of the sensor to a wire which is connected to the Positive Bus of the Breadboard
     - Place a wire from the (first pin) of the sensor to the Positive Bus of the Breadboard
       
  - Connection for the Yellow LED:
     - Connect the LED to the Breadboard
     - Place a 100 ohm resistor from the catode(shorter pin) of the LED to a wire which is connected to the GND Bus of the Breadboard
     - Place a wire from the anode(shorter pin) of the LED to the D5 port of the development board
       
  - Connection for the Red LED:
     - Connect the LED to the Breadboard
     - Place a 100 ohm resistor from the catode(shorter pin) of the LED to a wire which is connected to the GND Bus of the Breadboard
     - Place a wire from the anode(shorter pin) of the LED to the D2 port of the development board
  
### Software:    
  - Install the Arduino IDE
  - Open the Arduino IDE
  - Go to FILE > PREFERENCES
  - Copy the following link to the Additional Boards Manager URLs tab:  http://arduino.esp8266.com/stable/package_esp8266com_index.json
  - Open  TOOLS > BOARDS > BOARDS MANAGER
  - Download and install ESP8266
  - Restart the Arduino IDE.
  - Open the TOOLS > BOARD tab and select NodeMCU 1.0 (ESP12-E Module)
  - The configuration settings are as follows:
     - Flash Size: 4 M (1 M SPIFFS) / ;
     - Debug Port; Disabled
     - Debug level: None
     - IwIP: v2 Lower Memory
     - CPU Frequency: 80 MHz;
     - Upload Size: 921600
     - Erase flash: Only Sketch

## Running
  - Connect the Development Board to your computer with the USB cable
  - Make sure the correct USB Port is selected from TOOLS > PORT > (the exact port depends on your computer)
  - Have the code prepared in a new sketch
  - Compile the Code
  - Run the Code and check the Serial connection
  - On the Serial Connection you have chosen the readings should appear
  - Based on the readings, the warnings will be generated if the values are above a certain treshold, and the coresponding LED will light up (Red for Temperature and Yellow for Humidity)

