int potPin = A0;
int latchpin=8;
int clockpin=12;
int datapin=11;
int val = 0;
int values[]={1,2,4,8,16,32,64,128};

void setup() {
  Serial.begin(9600);
  
  pinMode(latchpin,OUTPUT);
  pinMode(clockpin,OUTPUT);
  pinMode(datapin,OUTPUT);

}

void loop() {
  int index;
  int value1, value2;
  
    val = analogRead(potPin);

  for(int i=0;i<16;i++){
    val = map(val, 0, 956, 10, 150);
    digitalWrite(latchpin,LOW);
    index=i%8;
    if(i<8){
      value2=values[index];
      value1=0;
    }
    else{
      value2=0;
      value1=values[index];
    }
    shiftOut(datapin,clockpin,MSBFIRST,value1);
    shiftOut(datapin,clockpin,MSBFIRST,value2);

    digitalWrite(latchpin,HIGH);
    
    delay(val);
    
    Serial.println(val);
  }

}
