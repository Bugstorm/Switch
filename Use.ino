#include <Servo.h> 
 
Servo myservo;  
boolean time = 1; // placeholder
int pos = 0;    
int incomingByte = 0;
 
void setup() 
{ 
  myservo.attach(9);  
  Serial.begin(9600);
} 
 
void loop() 
{ 

 if (Serial.available() > 0) {
  incomingByte = Serial.read();
  
  if (isAlpha(incomingByte)){
   Serial.println("**ACTIVATED**");
   boolean time = 1;
   }

  if (time = 1)
   {
    Serial.println("Time");
    for(int pos=0; pos < 180; pos +=1)
    {
    myservo.write(pos);
    delay(15);
    }
    
    delay(1800000);
    
/*
for(int wait=0; wait < 1800000; wait +=100)
{
  delay(100);
}
*/
    
    for(int pos=180; pos < 180; pos -=1)
    {
      myservo.write(pos);
      delay(15);
      boolean time = 0;
    }
   }
  }
}

/* This program probably doesn't work either
But is not needed anymore */
