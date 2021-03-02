#include<SPI.h>
#include<WiFi.h>
char ssid[] = {“wifiname”};
 
void setup()
{
Serial.begin(9600);
if(WiFi.status()==WL_NO_SHIELD)
{
Serial.print(“wifi shield not present”);
}
 
while(WiFi.status()!=WL_CONNECTED)
{
WiFi.begin(ssid);
delay(10000);
}
Serial.println(“Wifi connected”);
}
 
 
void loop()
{
IPaddress ip = WiFi.localIP()
Serial.println(ip);
 
 
byte mac[6];
WiFi.macAddress(mac)
Serial.print(mac[5], HEX);
Serial.print(“:”);
Serial.print(mac[4], HEX);
Serial.print(“:”);
Serial.print(mac[3], HEX);
Serial.print(“:”);
Serial.print(mac[2], HEX);
Serial.print(“:”);
Serial.print(mac[1], HEX);
Serial.print(“:”);
Serial.println(mac[0], HEX);
 
IPaddress subnet = WiFi.subnetMask();
Serial.println(subnet);
 
IPaddress gateway= WiFi.gatewayIP();
Serial.println(gateway);
 
Serial.println(WiFi.SSID());
 
long strength = WiFi.RSSI();
Serial.println(strength);
 
 
 
byte routerip[6];
WiFi.BSSID(routerip)
Serial.print(routerip[5], HEX);
Serial.print(“:”);
Serial.print(routerip[4], HEX);
Serial.print(“:”);
Serial.print(routerip[3], HEX);
Serial.print(“:”);
Serial.print(routerip[2], HEX);
Serial.print(“:”);
Serial.print(routerip[1], HEX);
Serial.print(“:”);
Serial.println(routerip[0], HEX);
 
 
byte encryption = WiFi.encryptionType();
Serial.println(encryption, HEX);
}
