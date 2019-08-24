int ledPin1= 10;
int ledPin2= 9;
int switchPin1= 11;
int switchPin2= 12;
boolean lastButton1 = LOW;
boolean currentButton1 = LOW;
boolean lastButton2 = LOW;
boolean currentButton2 = LOW;
boolean ledOn1 = false;
boolean ledOn2= false;

void setup()
{
  pinMode(switchPin1, INPUT);
  pinMode(switchPin2, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

boolean debounce1(boolean last1)
{
  boolean current1 = digitalRead(switchPin1);
  
  if(last1 != current1)
  {
    delay(5);
    current1 = digitalRead(switchPin1);
  }
  
  return current1;
}
boolean debounce2(boolean last2)
{
  boolean current2 = digitalRead(switchPin2);
  
  if(last2 != current2)
  {
    delay(5);
    current2 = digitalRead(switchPin2);
  }
  
  return current2;
 
}

void loop()
{
  currentButton1 = debounce1(lastButton1);
  currentButton2 = debounce2(lastButton2);
  if(lastButton1 == LOW && currentButton1 ==HIGH)
  {
    ledOn1 = !ledOn1;
  }
  if(lastButton2 == LOW && currentButton2 ==HIGH)
  {
    ledOn2 = !ledOn2;
  }
  lastButton1 =  currentButton1;
  digitalWrite(ledPin1, ledOn1);
  lastButton2 =  currentButton2;
  digitalWrite(ledPin2, ledOn2);
}
