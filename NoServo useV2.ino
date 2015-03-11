const int Switch = 9;
int power = 0;
int add = 5;
boolean activation = false; //placeholder
int incomingByte = 0;

void setup(){
  Serial.begin(9600);
  pinMode(Switch, OUTPUT);
}

void loop(){
  //activationFunction not tested yet
  if (Serial.available() > 0) //needed?
  {
    incomingByte = Serial.read();
    
    if (isAlpha(incomingByte))
    {
      Serial.println("***ACTIVATED***");
      boolean activation = true;
    }
  }
  
  if (activation == true){
    Serial.println("Time");
    
    /* for loop not permanent, no pauze 
       test double condition */
    for (int i = 0; i >= 0 && i <= 255; i+=add){
      analogWrite(Switch,power);
      if (power >= 255){
        add = -add;
      }
      power = power + add;
      delay(30);
    }
  }
}
