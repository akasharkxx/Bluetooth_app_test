String message;
  int count = 0;
  int received = 180;
  char temp;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
Serial.println("Ready to receive");
pinMode(13,OUTPUT);

digitalWrite(13,HIGH);
}
void loop() {
  // put your main code here, to run repeatedly:
   while(Serial.available()) {
     //received = Serial.read();
    //if(count <= 3){
    temp=char(Serial.read());
    if(temp == '@' || count >= 0){
      if(!(temp == '@' || temp == '#') && (temp >= '0' && temp <= '9')){
        message+=temp;
      }
      count++;
    }else{
      count = 0;  
    }
    if(temp == '#'){
      Serial.print("First : ");
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
