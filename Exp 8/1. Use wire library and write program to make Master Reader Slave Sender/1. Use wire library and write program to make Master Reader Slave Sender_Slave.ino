#include<Wire.h>
#define ADDR 1
//Slave
void setup(){
 Wire.begin(ADDR);
 Wire.onRequest(requestEvent);
}
void loop() {
  delay(500);
}
void requestEvent() {
  Wire.write("slave "); 
}
