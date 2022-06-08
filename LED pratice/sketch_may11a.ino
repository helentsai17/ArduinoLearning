
int red = 8;
int green = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(red,HIGH);
delay(500);
digitalWrite(red,LOW);
delay(500);

digitalWrite(green,HIGH);
delay(500);
digitalWrite(green,LOW);
delay(500);
}
