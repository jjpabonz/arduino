   // for incoming serial data

void setup() {
         Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
}

void loop() {
byte x=0;
long y=0;
int z=1;
         // send data only when you receive data:
         while(Serial.available() > 0) {
                 // read the incoming byte:
                 
                 x = Serial.read();
                    if(x!=45){
                      y=(y*10)+z*(x-48);
                      
 
                  }  
                    else{
                      z=-1;
                      
  
                  }

         }        // say what you got:
                 
                 Serial.print("I received: ");
                 Serial.println(y, DEC);
         delay(1000);
}
