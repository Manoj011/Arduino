#include<NewPing.h>
 
#define TRIGGER_PIN  12
#define ECHO_PIN     11
#define MAX_DISTANCE 500
 
String data;
void setup() {
  Serial.begin(9600);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
 // pinMode(12,OUTPUT);
  //pinMode(11,INPUT);
  
}

void loop() {
  
  while(Serial.available())
  {
    delay(10);
    char c = Serial.read();
    if(c == '#')
      {
        break;
      }
    data += c;
    
  if(data.length() >0)
    {
      
      if(data == "F")
      {
        f();
      }

      else if(data == "B")
      {
       b();
      }
      
      else if(data == "R")
      {
       sr();
      }
      
      else if(data =="L")
      {
        sl();
      }

      else
      {
        s();
      }

      data="";
    }
}


void b(){
  //obstacle();
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
}
void f(){
 // obstacle();
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
}
void r(){
  //obstacle();
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
}
void l(){
  //obstacle();
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
}
void sl(){
  //obstacle();
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
}
void sr(){
 // obstacle();
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
}
void s()
{
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
}
/*void obstacle(){
  
  
  s();
  delay(500);
  b();
  delay(300);
  sr();
  delay(300);
  
 
}*/
