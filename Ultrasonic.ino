const int pingPin = 7; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 6; // Echo Pin of Ultrasonic Sensor

void setup() {
   Serial.begin(9600); // Starting Serial Terminal
   pinMode(13,OUTPUT);
   digitalWrite(13,LOW);
}

void loop() {
   long duration, inches;
   pinMode(pingPin, OUTPUT);
   digitalWrite(pingPin, LOW);
   delayMicroseconds(2);
   digitalWrite(pingPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(pingPin, LOW);
   pinMode(echoPin, INPUT);
   duration = pulseIn(echoPin, HIGH);
   inches = microsecondsToInches(duration);
   Serial.print(inches);
   Serial.println("   in");

   if(inches <= 5)
   {
    digitalWrite(13,HIGH);
   }

   else
   {
    digitalWrite(13,LOW);
   }
}

long microsecondsToInches(long microseconds) {
   return microseconds / 74 / 2;
}
