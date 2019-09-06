#include<DS3231.h> 
DS3231  rtc(SDA, SCL);
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
 rtc.begin();
  rtc.setDOW(WEDNESDAY);    
  rtc.setTime(11, 55, 0);   
  rtc.setDate(3, 2, 2019);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  Serial.print(rtc.getDOWStr());
  Serial.print(" ");
  Serial.print(rtc.getDateStr());
  Serial.print(" -- ");
  Serial.println(rtc.getTimeStr());
  delay (1000);
}
