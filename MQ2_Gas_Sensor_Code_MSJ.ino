/*
 * Contact: MSJ Researchers World
 * Whatsapp:+917373771991
 * Email   :msjresearchersworld@gmail.com
 * Website :www.msjresearchersworld.com
 */

 int buz = 10;
 int smoke = A5;

 int Threshold  = 160;
 int value;
 void setup()
 {
  pinMode(buz, OUTPUT);
  pinMode(smoke, INPUT);
  Serial.begin(9600);
 }

 void loop()
 {
  value = analogRead(smoke);
  Serial.print("Smoke Value: ");
  Serial.println(value);

  if(value > Threshold)
  {
    tone(buz, 1000, 200);
  }

  else
  {
    noTone(buz);
  }

  delay(100);
 }
