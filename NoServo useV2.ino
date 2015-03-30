const int Switch = 9;
int power = 0;
boolean activation = false; //placeholder
int incomingByte = 0;

void setup(){
  Serial.begin(9600);
  pinMode(Switch, OUTPUT);
}

boolean activationFunction(){
  if (Serial.available() > 0){
    incomingByte = Serial.read();
    if (isAlpha(incomingByte)){
      return true;
    }
  }
}

void loop(){
  activation = activationFunction();
  
  if (activation == 1){
    Serial.println("Start");
    
    for(int i = 0; i < 255; i+=5){
      analogWrite(Switch,power);
      Serial.println(power);
      power = power + 5;
      delay(30);
    }
    for (int t = 0; t < 1801; t+=1){
      delay(1000);
      Serial.println(t);
    }
    for (int i = 255; i > 0; i-=5){
      analogWrite(Switch,power);
      Serial.println(power);
      power = power - 5;
      delay(30);
    }    
    activation = false;
    }
}
