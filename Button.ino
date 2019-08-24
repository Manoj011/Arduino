int a;
void setup() {
  // put your setup code here, to run once:
  pinMode(6,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 a=digitalRead(6);
  if(a==LOW)
  {
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(12,LOW);
    
  }
  else
  {
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
   digitalWrite(10,HIGH);
   digitalWrite(12,HIGH); 
  }

}
