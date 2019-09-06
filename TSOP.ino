#include <IRremote.h>
int VALUE1="1086290565";
int VALUE2="1086306885"; 
int RECV_PIN = 12;               //declared for receiving pulses
int c=0;                        // declared if you want to control with a single button
IRrecv irrecv(RECV_PIN);
decode_results results;


void setup()
{
   pinMode(9, OUTPUT);
   Serial.begin(9600);
  irrecv.enableIRIn();                      // Start the receiver
}

void loop() {
  if (irrecv.decode(&results)) 
  {
    Serial.println(results.value);
    irrecv.resume();                        // Receive the next value
  if(results.value==VALUE1)                                       
  {
      Serial.println("Success");
             digitalWrite(9,LOW);
  }
  else if(results.value==VALUE2)
  {
    Serial.println("failed");
             digitalWrite(9,HIGH);
  }
                               
  }

}

/*if((results.value== YOUR VALUE3)&&(c%2==1))                    // enables you to turn on & off with the help of same button"                  
  {
                digitalWrite(9,HIGH);
  }
  else if((results.value==YOUR VALUE3)&&(c%2==0))
  {
                digitalWrite(9,LOW);
  }
  c++;
 }}*/
