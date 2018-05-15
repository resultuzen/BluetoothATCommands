/*                                                              
       __                 _   _____ _   _               
      /__\ ___  ___ _   _| | /__   (_) (_)_______ _ __  
     / \/// _ \/ __| | | | |   / /\/ | | |_  / _ \ '_ \ 
    / _  \  __/\__ \ |_| | |  / /  | |_| |/ /  __/ | | |
    \/ \_/\___||___/\__,_|_|  \/    \__,_/___\___|_| |_|
    
                                                                                                                                  
       Bluetooth        Arduino 
      ___________      _________
         RX        ->      4
         TX        ->      2
*/

#include <SoftwareSerial.h>

#define RX 4
#define TX 2

SoftwareSerial HC_06(RX, TX);//For Bluetooth

String command = "";

void setup() 
{
  Serial.begin(9600); //For Serial Port Display
  Serial.println("Enter an AT command:");
  HC_06.begin(9600); //For Bluetooth
}

void loop() 
{
  if (HC_06.available()) 
  {
    while(HC_06.available()) 
    {
      command += (char)HC_06.read();
    }
    
    Serial.print(command);
    Serial.print("");
    command = "";
  }
  
  if (Serial.available())
  {
    HC_06.write(Serial.read());
  }
}
