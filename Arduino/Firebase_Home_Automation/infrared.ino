#include <Servo.h>
Servo myservo;
int pinA=2;
int pinB=3;
int cputar = 90;
int rot = 90;
int Speed = 1;
void setup() {
  pinMode(pinA,INPUT);
  myservo.attach(3);
  Serial.begin(9600);
}

void loop() {
 digitalWrite(pinA,HIGH);
 int nilai = digitalRead(pinA);
 if(nilai==0){
  putar(100,10);
  }else{
    putar(1,10);
    }
 Serial.println(nilai);

}


void putar(int derajat, int kecepatan){
  if(derajat>cputar){cputar++;}else{cputar--;}
  myservo.write(cputar);
  delay(kecepatan);
  }
