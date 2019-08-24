#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "5a03ab4a305f46e3a66d595ce52f8744";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "MSJ";
char pass[] = "7373771991";


void setup()
{
  // Debug console
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);

  
}

void loop()
{
  Blynk.run();
    digitalWrite(D4,HIGH);
  delay(1000);
   digitalWrite(D4,LOW);
}
