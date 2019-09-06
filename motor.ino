const int pingPin = 7;
const int echoPin = 6;

void setup() {
   Serial.begin(9600); 
   pinMode(13,OUTPUT);
   digitalWrite(13,LOW);
}

   void loop() {
    long duration, cm;
    pinMode(pingPin, OUTPUT);
    digitalWrite(pingPin, LOW);
    delayMicroseconds(2);
    digitalWrite(pingPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(pingPin, LOW);
    pinMode(echoPin, INPUT);
    duration = pulseIn(echoPin, HIGH);
    cm = microsecondsTocm(duration);
    Serial.print(cm);
    Serial.println(" cm");
    delay(1000);

    if(cm <= 9)
    {
      Serial.println("Over flow");
    }

    else if(cm >= 16)
    {
       Serial.println("MOTOR OFF");
    }
   }

   long microsecondsTocm(long microseconds) {
   return microseconds / 29 / 2;
   }
