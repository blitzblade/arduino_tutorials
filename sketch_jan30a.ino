uint redLED=8;
uint blueLED=9;

String name="Kwesi Dadson";

void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redLED, HIGH);
  delay(500); //milliseconds
  digitalWrite(redLED, LOW);
  delay(500);
  digitalWrite(blueLED, HIGH);
  delay(500);
  digitalWrite(blueLED, LOW);
  delay(500);

}
