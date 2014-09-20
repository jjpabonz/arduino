void setup() {
  // put your setup code here, to run once:
pinMode(8,OUTPUT);//negro
pinMode(9,OUTPUT);//verde
pinMode(10,OUTPUT);//rojo
pinMode(11,OUTPUT);//azul
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
byte time;
if (Serial.available()){
  time=Serial.read();
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);     
     delay(time);  
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);     
     delay(time);
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);     
     delay(time);     
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);     
     delay(time);
}
}
