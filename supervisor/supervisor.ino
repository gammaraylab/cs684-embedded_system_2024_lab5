#include <Adafruit_NeoPixel.h>
#include <SoftwareSerial.h>
#include "alphabot_drivers.h"
#include "lab5.h"

#define NUM_SENSORS 5
#define ECHO   2  
#define TRIG   3
#define LEFT_IR1 A5
#define LEFT_IR2 2
#define RIGHT_IR1 8
#define RIGHT_IR2 9
#define rxPin 4
#define txPin -1

Adafruit_NeoPixel RGB = Adafruit_NeoPixel(4, PIN, NEO_GRB + NEO_KHZ800);
void setRGB(int r,int g, int b);

SoftwareSerial Xbee(rxPin, txPin);
int sensorValues[NUM_SENSORS];
Lab5__main_out _res;
Lab5__main_mem self;
int speed,res=0,dir,startPos=0,v_l,v_r,distance;
unsigned long waitDelay=200,lastCheck=0;

// int getDistance()         // Measure the distance 
// {
//   digitalWrite(TRIG, LOW);   // set trig pin low 2μs
//   delayMicroseconds(2);
//   digitalWrite(TRIG, HIGH);  // set trig pin 10μs , at last 10us 
//   delayMicroseconds(10);
//   digitalWrite(TRIG, LOW);    // set trig pin low
//   float Fdistance = pulseIn(ECHO, HIGH);  // Read echo pin high level time(us)
//   Fdistance= Fdistance/58;       //Y m=（X s*344）/2
//   // X s=（ 2*Y m）/344 ==》X s=0.0058*Y m ==》cm = us /58       
//   return (int)Fdistance;
// }  

void setup()
{
  RGB.begin();
  setRGB(0, 0, 0);
  
  init_devices();
  pinMode(ECHO, INPUT);    
  pinMode(TRIG, OUTPUT);   
  pinMode(LEFT_IR1,INPUT);  
  pinMode(LEFT_IR2,INPUT);  
  pinMode(RIGHT_IR1,INPUT); 
  pinMode(RIGHT_IR2,INPUT); 

  Xbee.begin(9600);
  Serial.begin(9600);

  while(1){
    if(Xbee.available()){
      res=Xbee.read();
      if(res==0)
        setRGB(60,5,5);
      else if(res==1)
        setRGB(70,50,0);
      else if(res==2)
        setRGB(10,70,5);
      else if(res==3)
        setRGB(10,10,60);
    }
    if (res==0xff)
      break;
    else
      startPos=res;
  }

}

void loop()
{
  if(Xbee.available() || millis()-lastCheck < waitDelay ){
    if(Xbee.available()){
      res=Xbee.read();
      dir=(res>>6)+1;  
      if(dir==2 || dir==3)
        v_l=(res%64)/2.2;
      else
        v_l=(res%64)*2.8;
      v_r=v_l;
      lastCheck=millis();
    }
  }
  else{
    AnalogRead(sensorValues);
    // distance=getDistance()
    Lab5__main_step(sensorValues[0], sensorValues[1], sensorValues[2], sensorValues[3], sensorValues[4], startPos, !digitalRead(LEFT_IR1) || !digitalRead(LEFT_IR2),!digitalRead(RIGHT_IR1) || !digitalRead(RIGHT_IR2), &_res, &self);
    dir=_res.dir;
    v_l=_res.v_l;
    v_r= _res.v_r;

  }

  switch(dir){
  case 1:
    if(v_l==0 && v_r==0)
      stop();
    else
      forward();
    break;
  case 2:
    left();
    break;
  case 3:
    right();
    break;
  case 4:
    backward();
    break;
  case 5:
    stop();
    break;
  }
  SetSpeed(v_l,v_r);
    
}

void setRGB(int r,int g, int b){
    RGB.setPixelColor(0, RGB.Color(r, g, b));
    RGB.setPixelColor(1, RGB.Color(r, g, b));
    RGB.setPixelColor(2, RGB.Color(r, g, b));
    RGB.setPixelColor(3, RGB.Color(r, g, b));
    RGB.show();
}
