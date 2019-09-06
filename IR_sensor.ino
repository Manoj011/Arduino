int value = A0;

void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
}

void loop()
{
  int values = analogRead(value);
  Serial.println(values);
 
  if(values<=50)
  {
    digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);    
  }
  
  
}  
