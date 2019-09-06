int a;
int b;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  b=analogRead(A0);
  a=b/5;
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  delay(a);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay(a);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  delay(a);

}
