int Switch = 0;
int power = 0;
int add = 5;
boolean time = 0; //placeholder
int incomingByte = 0;
int wait = 0;
int max = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(Switch, OUTPUT);
}

void loop()
{
  if (Serial.available() > 0)
  {
    incomingByte = Serial.read();
    
    if (isAlpha(incomingByte))
    {
      Serial.println("***ACTIVATED***");
      boolean time = 1;
    }
    
    if (time = 1)
    {
      Serial.println("Time");
      analogWrite(Switch, power);
        
      power = power + add;
        
      if (power == 255)
      {
        for(int wait = 0; wait < 1800000; wait +=100)
        {
          delay(100);
        }
        
        int max = 255;
        wait = 0;
      }
       
      if (int max = 255)
      {
        for(int max = 255; max > 0; max -=5)
        {
          analogWrite(Switch, power);
          power = power - add;
        }
        boolean time = 0;
      }
    delay(30);
    }
  }
}
