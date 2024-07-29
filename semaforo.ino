void setup(){
  pinMode(3, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop(){
  digitalWrite(3, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(11, LOW);
  delay(5000);
  digitalWrite(3, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(11, LOW);
  delay(2000);
  digitalWrite(3, LOW);
  digitalWrite(8, LOW);
  digitalWrite(11, HIGH);
  delay(5000);
}