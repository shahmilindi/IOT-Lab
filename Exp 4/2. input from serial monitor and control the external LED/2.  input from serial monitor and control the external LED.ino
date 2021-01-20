int n;  /* for user incomming character (1/0)*/
void setup() {
 Serial.begin(9600);
 pinMode(9,OUTPUT);
}

void loop() {
  /*getting serial input from serial monitor*/
 if (Serial.available()){
    n=Serial.parseInt(); /*parseInt() used to accept string (such ASCII)and convert it into an integer*/
    Serial.print(n);
  
  if (n==1)
  digitalWrite(9,HIGH);
  else if (n==0)
  digitalWrite(9,LOW);
  }
}