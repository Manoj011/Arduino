#include <DS3231.h>
DS3231  rtc(SDA, SCL);
Time  t;

#define buz 11

int Hor;

int Min;

int Sec;
void setup() {
  
  rtc.begin();
  Serial.begin(9600);
  pinMode(buz, OUTPUT);
  //rtc.setDOW(WEDNESDAY);    
 // rtc.setTime(13,03 , 30);     
  //rtc.setDate(3, 2, 2019);   
  delay(2000);

}

void loop() {
  
t = rtc.getTime();
Hor = t.hour;
Min = t.min;
Sec = t.sec;
Serial.print("Time: ");
Serial.print(rtc.getTimeStr());
Serial.print(" Date: ");
Serial.println(rtc.getDateStr());
delay(1000);
if(( Hor == 13 || Hor==14) ) 

{
Buzzer();
Buzzer();
Serial.println("Alarm ON");
Serial.println("Alarming");
Buzzer();
Buzzer();
} 
 delay(1000); 
}
void Buzzer()

{
digitalWrite(buz,HIGH);
delay(500);
digitalWrite(buz, LOW);
delay(500);

}
