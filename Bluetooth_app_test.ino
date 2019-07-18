String message;
  int count = 0;
  int received = 180;
  
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

pinMode(13,OUTPUT);

digitalWrite(13,HIGH);
}
void loop() {
  // put your main code here, to run repeatedly:
   while(Serial.available()) {
     //received = Serial.read();
    message+=char(Serial.read());
    count++;
    if(count == 3){
      Serial.println(message);
      count = 0;
      message = "";  
    }    
    }
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
}
