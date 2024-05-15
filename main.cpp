#include <iostream>
#include "lora.h"

using namespace std;

int main()
{
	//Sender
cout << "Starting" << 433E6 << endl;
    if(!LoRa.begin(433E6))
    {
        cout << "Lora connection failed" << endl;
    }
    int i = 0;
  uint8_t buffer[32];
   sprintf((char*)buffer,"meow from orange pi");
    while(true){
    LoRa.beginPacket();
    LoRa.write(buffer, 32);
    LoRa.endPacket();
    delay(500); i++;
    }
/*
//RECEIVER
    cout << "Starting" << 433E6 << endl;
    if(!LoRa.begin(433E6))
    {
        cout << "Lora connection failed" << endl;
    }
    while(true){
    int packetSize = LoRa.parsePacket();
    if (packetSize != 0)
    {
        cout << "Received packet" << endl;
        while (LoRa.available())
            cout << char(LoRa.read());
        cout << endl << "with RSSI " << LoRa.packetRssi() << endl;
    }
    }*/
    return 0;
}
/*
Нужные функции
begin
beginPacket
print
endPacket
parsePacket
available
read
packetRssi
*/
