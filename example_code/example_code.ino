/*
  @@@@@@@@@@@@@@@@@@@@@@                                                                                                                               
  @@@@@@@@@@@@@@@@@@@@@@             @@@.    @@@    @@@.     @@@@    @@@@        @@@@@@@@@        @@@@@@@@@@@@@.     .@@@@@@@@@@@@@        @@@@@@@@@  
  @@@@@%%@@@%%@@@%%@@@@@             @@@@    @@@    @@@@     @@@@    @@@@       @@@@@@@@@@        @@@@@@@@@@@@@@     @@@@@@@@@@@@@@        @@@@@@@@@  
  @@@@@  @@@  @@@  @@@@@             @@@@    @@@    @@@@     @@@@    @@@@       @@@@   @@@@        @@@@@   @@@@@       @@@@@   @@@@       @@@@   @@@@ 
  @@@@@            @@@@@             @@@@   @@@@    @@@@     @@@@@@@@@@@@       @@@@   @@@@        @@@@@   @@@@@       @@@@@   @@@@       @@@@   @@@@ 
  @@@@@   @    @   @@@@@             @@@@   @@@@    @@@@     @@@@@@@@@@@@       @@@@@@@@@@@        @@@@@   @@@@@       @@@@@   @@@@       @@@@@@@@@@@ 
  @@@@@            @@@@@             @@@@###@@@@@##@@@@@     @@@@    @@@@      @@@@@@@@@@@@       #@@@@@###@@@@@     ##@@@@@###@@@@       @@@@@@@@@@@
  @@@@@@@@@@@@@@@@@@@@@@             @@@@@@@@@@@@@@@@@@@     @@@@    @@@@      @@@@    @@@@@      @@@@@@@@@@@@@@     @@@@@@@@@@@@@@      @@@@     @@@@
  @@@@@@@@@@@@@@@@@@@@@@
  
  Whadda 3-channel high power MOSFET module example code

  This example code turns each MOSFET chanel on for 1 secs, turns it off and repats the cycle for the next channels.
  Connections:
    - INA -> D2
    - INB -> D3
    - INC -> D4
  
  For more information about the Whadda Electronic scale load sensor, consult the manual at the WPM357 product page on whadda.com
  
 */

void setup() {
  // Sets pins 2 to 4 as inputs
  for(int i=2;i<=4; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // For pins 2 to 4...
  for(int i=2;i<=4; i++) {
    digitalWrite(i, HIGH); // Enable MOSFET channel by setting pin HIGH
    delay(1000);           // Wait for 1 s (=1000 ms)
    digitalWrite(i, LOW);  // Disable MOSFET channel by setting pin LOW
  }
}
