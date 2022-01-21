void setup() {
  Serial.begin(115200);
  Serial1.begin(115200);

  //Serial.write("Hello world");
  Serial.print("Hello world");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello world");
  Serial.write("Hello world");
  Serial1.write("Hello world");
  delay(3000);
}
