int Switch = 9;
int power = 0;
int add = 5;

void setup() {
  pinMode(Switch, OUTPUT);
}

void loop(){
  analogWrite(Switch, power);
  
  power = power + add;
  
  if (power == 0 || power == 255) {
    add = -add ;
  } 
  
  delay(30);
}

  
