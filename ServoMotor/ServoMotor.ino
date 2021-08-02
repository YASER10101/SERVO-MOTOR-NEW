#include <Servo.h>
Servo m1;
Servo m2;
Servo m3;
Servo m4;
Servo m5;
int i=0;
void setup() {
  m1.attach(3);
  m2.attach(5);
  m3.attach(6);
  m4.attach(9);
  m5.attach(10);}
void loop() {
  for (int i = 0; i < 90; i++) {
    m1.write(i);             
    m2.write(i);    
    m3.write(i);
    m4.write(i);  
    m5.write(i);        
    delay(20);}
  for (i =90; i > 0; i--) {
    m1.write(i);               
    m2.write(i);    
   m3.write(i);
    m4.write(i);  
    m5.write(i);         
    delay(20) ; }}
