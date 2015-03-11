int incomingByte = 0;
boolean activation;

void setup() {
  Serial.begin(9600);
}
boolean activationFunction(){
  if (Serial.available() > 0){
    incomingByte = Serial.read();
    if (isAlpha(incomingByte)){
      return true;
    }
  }
}
void loop() {
  activation = activationFunction();
  if (activation == true){
    Serial.println("***ACTIVATED***");
  }
}
