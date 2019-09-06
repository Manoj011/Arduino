  #include<Servo.h>

int ipsensor = 9;
int servo = 7;
int pos = 90;
int val = 0;
//int cpsensor = 5;
int led = 4;
Servo myservo;

void setup(){

  pinMode(ipsensor, INPUT);
  pinMode(servo, OUTPUT);
  //pinMode(cpsensor, INPUT);
  pinMode(led, OUTPUT);
  myservo.attach(servo);
  digitalWrite(ipsensor, LOW);
  //digitalWrite(cpsensor, LOW);
}
void loop()
{
  int ipsensor = 9;
  //int cpsensor = 5;
  if (digitalRead(ipsensor) == HIGH){
    for(pos =90; pos < 135; pos+=45)
      delay(15);
    for(pos = 135; pos>=90; pos-=45)
    {
      myservo.write(pos);
    }
  }
  else if (digitalRead(ipsensor) == LOW){
    for(pos =90; pos < 45; pos-=45)
      delay(15);
    for(pos = 45; pos>=90; pos+=45=
    {
      myservo.write(pos);
    }
  }
  delay(1);
}
