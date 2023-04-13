#include <Servo.h>

int enA=9, in1=8, in2=7; // motor gardien
int foot=3; //PWM of the servo foot
int button_in=1; // button
int button_value;
Servo leg;

void setup() {
 pinMode(enA, OUTPUT); // motor
 pinMode(in1, OUTPUT); // driver
 pinMode(in2, OUTPUT); // pins
 
 leg.attach(3); //servo attached to pin  3
 
 pinMode(button_in, INPUT_PULLUP);
 

}

void loop() {
  
 digitalWrite(in1,HIGH);
 digitalWrite(in2,LOW);
 analogWrite(enA,100); 

button_value= digitalRead(button_in);


if ( button_value==LOW){
  leg.write(35);
  
  delay(600);
  leg.write(90);
  delay(200);
  leg.write(135);
  delay(600);
  leg.write(90);
  
  }
 else {
  leg.write(90);
  }

}
