int a;
int count=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(6,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
 a=digitalRead(6);
 
 if(a==LOW)
 { 
  if(a==HIGH)
  {
   count=count+1;
 
  if(count%2==0)
   {
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
   
   }
 
  else 
  {
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
   digitalWrite(10,HIGH);
   }
 } 
 }  
else
{
  count=count;  
}


}
