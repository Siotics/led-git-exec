int potentiometer = A0;
int pinled = 3;

void setup(){
  pinMode(potentiometer, INPUT);
  pinMode(pinled, OUTPUT);
  Serial.begin(9600);
  
}

void loop(){
  byte result = analogRead(potentiometer);
  Serial.println(result);
  analogWrite(pinled, result);
}