void setup() {
  Serial.begin(9600);
  for(int i=2;i<=13;i++)
  {
    pinMode(i,OUTPUT);
  }
}
void loop() {
  for(int j=13;j>=1;j--)
  {
    digitalWrite(j,HIGH);
    delay(900);
    digitalWrite(j,LOW);
  }
}
