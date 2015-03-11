const int Switch = 9;
int power = 0;
int add = 5;

void setup() {
  pinMode(Switch, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  analogWrite(Switch, power);
  Serial.println(power);
  
  power = power + add;
  
  if (power == 0 || power == 255) {
    add = -add ; 
  } 
  
  delay(30);
}
