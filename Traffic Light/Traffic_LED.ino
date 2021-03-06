int ledred = 13; // pin digital on Arduino ESP8266 Wi-Fi  Wemos D1
int ledgreen = 12;
int ledsunlight = 11; // blue == sunlight on using  RGB color LED

void setup() {
  // put your setup code here, to run once:
  pinMode(ledred,OUTPUT);
  pinMode(ledgreen,OUTPUT);
  pinMode(ledsunlight,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
   //RED LED  Turn on Car stop
  digitalWrite(ledred,HIGH);
  digitalWrite(ledgreen,LOW);
  digitalWrite(ledsunlight,LOW);
  delay(25000); // 25 seconds = 25000 miliseconds
  
  //GREEN LED  Turn on Car can go
  digitalWrite(ledred,LOW);
  digitalWrite(ledgreen,HIGH);
  digitalWrite(ledsunlight,LOW);
  delay(25000); // 25 seconds = 25000 miliseconds

   //SUNLIGHT LED  Turn on Car can go slow
  digitalWrite(ledred,LOW);
  digitalWrite(ledgreen,LOW);
  digitalWrite(ledsunlight,HIGH);
  delay(10000); // 10 seconds = 10000 miliseconds

}
