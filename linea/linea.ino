
long ix=0;
long iy=0;
long counter=0;
float xa=60;
float ya=30;
float m;
float b;
float k;
float c;

float xsa=0;
float ysa=0;
long deltay=0;
float convx=16;// pasos por mm en x
float convy=13;//pasos por mm en y
float xac=0;
float yac=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
linea(60,10);

}

void linea(float xf,float yf){
float anchox=xf-xa;
float anchoy=yf-ya;

if(anchox!=0){
m=anchoy/anchox;
b=-m*xf+yf;
k=m*convy/convx;
c=b*convy;
float xsf=xf*convx;

if(anchox<0){
counter=-1;
}
else{
counter=1;
}
float xi=xa*convx;
for(long xs=xi;abs(xs-xi)<abs(anchox*convx);xs=xs+counter){
float ys=k*xs+c;
ix=xs-xsa;
iy=ys-ysa;
//mover sterppers
/*Serial.print("xa: ");
Serial.print(xa, DEC);
Serial.print(" ya: ");
Serial.println(ya, DEC);
Serial.print("ix: ");
Serial.print(ix, DEC);
Serial.print(" iy: ");
Serial.println(iy, DEC); lo hice para probar pero aquí es dónde debe ir los stepper*/ 
xsa=xsa+ix;
ysa=ysa+iy;
xa=xsa/convx;
ya=ysa/convy;
delay(100);}
}
else{
deltay=anchoy*convy;
//mover stepper y
/*Serial.print(" deltay: ");
Serial.println(anchoy, DEC);lo mismo del anterior*/
ya=ya+anchoy;
delay(1000);
}
}

