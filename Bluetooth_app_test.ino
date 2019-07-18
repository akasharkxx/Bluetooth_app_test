String message;
String message1;
  int count = 0;
  int count1 = 0;
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
    if(count <= 3 && count1 == 0){
    message+=char(Serial.read());
    count++;count1 = 0;
    if(count == 3){
      Serial.print("First : ");
      Serial.println(message);
      count = 0;
      message = "";  
    }}
    if(count1 <= 3 && count == 0){
    message1+=char(Serial.read());
    count1++;count = 0;
    if(count1 == 3){
      Serial.print("Second : ");
      Serial.println(message1);
      count1 = 0;
      message1 = "";  
      //Serial.print("OK");
    }
    }
    }
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
}
