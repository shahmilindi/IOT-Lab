//Client 
#include<Ethernet.h>
#include<SPI.h>
 
byte mac[] = {0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED};
byte ip[]= {10, 0, 0, 177};
byte dns[] ={64, 233, 187, 99};
 
EthernetClient client; //object
 
void setup()
{
Ethernet.begin(mac,ip);
Serial.begin(9600);
 
if(client.connect(serveraddr, 80))
{
    Serial.println(“successful”);
}
else
{
    Serial.println(“fail”);
}
 
}
void loop()
{
if(client.available())
{
char c = client.read();
Serial.println(c);
}
else
{
if(!client.connected())
{
Serial.println(“stopping”)
client.stop();
}
}
 
}



//server
#include<Ethernet.h>
#include<SPI.h>
 
EthernetServer server(80);
byte mac[] = {0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED};
IPaddress ip(192,168,23,8);
 
void setup()
{
Serial.begin(9600);
Ethernet.begin(mac,ip);
server.begin();
Serial.println(Ethernet.localIP());
}
byte sensorreading = 0;
void loop()
{
EthernetClient client = server.available();
 
 
 
 
 
if(client)
{
  while(client.connected())
{
client.write(x);
}
client.stop();
Serial.println(“disconnect client”);
}
 
}
