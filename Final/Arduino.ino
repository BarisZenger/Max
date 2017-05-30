void setup() {

  Serial.begin(9600);
}

void loop() {

  int x1 = analogRead(A0);
  delay(15);
  int z1 = analogRead(A1);
  delay(15);
  int x2 = analogRead(A2);
  delay(15);
  int z2 = analogRead(A3);
  delay(15);
  int z3 = analogRead(A4);
  delay(15);

  Serial.print(x1);
  Serial.print(" ");
  Serial.print(z1);
  Serial.print(" ");
  Serial.print(x2);
  Serial.print(" ");
  Serial.print(z2);
  Serial.print(" ");
  Serial.println(z3);

  delay(100);
}
