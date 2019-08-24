int switchPin=11;
boolean lastbutton= HIGH;
boolean currentbutton=HIGH;
int count=0;

void setup() {
  // put your setup code here, to run once:
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(11,INPUT);
Serial.begin(9600);

       digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);


}
boolean debounce(boolean last)
{
  boolean current = digitalRead(switchPin);
  
  if(last != current)
  {
    delay(5);
    current = digitalRead(switchPin);
  }
  
  return current;
}

void loop() {
  // put your main code here, to run repeatedly:

   currentbutton = debounce(lastbutton);
   if(lastbutton == LOW && currentbutton ==HIGH)
  {
    if(count>4)
    {
      count=0;
    }
    count=count+1;
    Serial.println(count);
    
    
    switch(count){
      

      
      
      case 1:
      digitalWrite(5,LOW);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      Serial.println("case 1");
      break;
      case 2:
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      Serial.println("case 2");
      break;
      case 3:
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      Serial.println("case 3");
      break;
      case 4:
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      Serial.println("case 4");
      break;
default:
 digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
    }
  }
  lastbutton =  currentbutton;   
      
}
