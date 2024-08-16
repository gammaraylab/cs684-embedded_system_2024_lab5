#include <SoftwareSerial.h>
#define LEFT_LIMIT 6
#define RIGHT_LIMIT 7
#define startButton A2
#define yAxis A3
#define xAxis A4

const byte rxPin = 3;
const byte txPin = 2;

const int ledPin = 13; //led attached to this pin

SoftwareSerial Xbee(rxPin, txPin);
byte input=0x00;
int lastButtonState = 1;  // the previous reading from the input pin
int buttonState=-1;
int reading;
unsigned long lastDebounceTime = 0;  // the last time the output pin was toggled
unsigned long debounceDelay = 400;    // the debounce time; increase if the output flickers
int x,y;
byte speed;
byte dir;
byte res;
byte data;
bool manualDrive=false;
int count=0;
bool doneSelection=false;

void joystick();
void setup() {

  //set the mode of the pins...
  pinMode(LEFT_LIMIT,INPUT_PULLUP);
  pinMode(RIGHT_LIMIT,INPUT_PULLUP);
  pinMode(startButton,INPUT_PULLUP);       
  pinMode(yAxis,INPUT);     
  pinMode(xAxis,INPUT);  

  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Xbee.begin(9600);
}//close void setup

int center;
int left;
int right;
void loop() {
  left=!digitalRead(LEFT_LIMIT);
  right=!digitalRead(RIGHT_LIMIT);
  center=!digitalRead(startButton);

  if ( ((millis() - lastDebounceTime) > debounceDelay) && (left || right || center)){
    if(left){
      manualDrive=!manualDrive;
    }

    else if(right && !doneSelection){
      doneSelection=true;
      Xbee.write(0xff);
    }

    else if(center && !doneSelection){
      Serial.println(count%4);
      Xbee.write(count%4);
      count++;
    }

    lastDebounceTime = millis(); //set the current time
  }
  if(manualDrive)
    joystick();
}

void joystick(){ /// get the joystick values
  x=analogRead(xAxis);
  y=analogRead(yAxis);
  x = map(x, 0, 1023, -63, 63);
  y = map(y, 0, 1023, -63, 63);
  
  if(y>1 && x>-1 && x<2){  //forward
    speed=y;
    dir=1;
  }
  else if(y<-3 && x>-1 && x<2){ //backward
    speed=-y;
    dir=4;
  }
  else if(x>2 && y<0 && y>-3){  //left
    speed= x;
    dir=2;
  }
  else if(x<-1 && y<0 && y>-3){  //right
    speed = -x;
    dir=3;
  }
  else{
    speed=0;
    dir=1;
  }
    //send data to bot via xbee
  res=speed+((dir-1)<<6);
  Xbee.write(res);
}
