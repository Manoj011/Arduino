int ledPin1=4;
int ledPin2=5;
int ledPin3=6;
int ledPin4=7;

int switchPin= 11;
boolean lastButton = LOW;
boolean currentButton = LOW;
boolean ledOn1 = false;
boolean ledOn2 = false;
boolean ledOn3 = false;
boolean ledOn4 = false;
int count=0;

void setup()
{
  pinMode(switchPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  
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

void loop()
{
  currentButton = debounce(lastButton);

  if(lastButton == LOW && currentButton ==HIGH)
  {
    count=count+1;
 
   switch(count){
    case 1:
    ledOn1 = !ledOn1;
    ledOn2 = ledOn2;
    ledOn3 = ledOn3;
    ledOn4 = ledOn4;
    
    break;
    case 2:
    ledOn1 = !ledOn1;
    ledOn2 = !ledOn2;
    ledOn3 = ledOn3;
    ledOn4 = ledOn4;
    break;
    case 3:
    ledOn1 = !ledOn1;
    ledOn2 = !ledOn2;
    ledOn3 = !ledOn3;
    ledOn4 = ledOn4;
    break;
    case 4:
    ledOn1 = !ledOn1;
    ledOn2 = !ledOn2;
    ledOn3 = !ledOn3;
    ledOn4 = !ledOn4;
    break;
    
 
    
    
   }
   if(count>=4);
   {
    count=0;
   }
   
   
  }
  
  lastButton =  currentButton;
  digitalWrite(ledPin1, ledOn1);
  digitalWrite(ledPin2, ledOn2);
  digitalWrite(ledPin3, ledOn3);
  digitalWrite(ledPin4, ledOn4);
 
}
