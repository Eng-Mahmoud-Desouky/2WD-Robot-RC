 int EN1 = 9;
int EN2 = 10;
int in1 = 2;
int in2 = 3;
int in3 = 6;
int in4 = 7;
int moveT = 1500;
int stopeT = 500;
char IN ;

void setup() {
pinMode(EN1,OUTPUT);
pinMode(EN2,OUTPUT);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0){
    IN=Serial.read(); 
  }
if (IN=='f'){
  forword();
  }
 else if(IN == 'b'){
  back();
  }
else if(IN == 'l'){
  left();
  }
 else if (IN == 'r'){
 right();
  }
}

void forword (){
  analogWrite(EN1,128);
analogWrite(EN2,128);
digitalWrite(in1,1);
digitalWrite(in2,0);
digitalWrite(in3,1);
digitalWrite(in4,0);
  }

  
void back (){
  analogWrite(EN1,128);
analogWrite(EN2,128);
digitalWrite(in1,0);
digitalWrite(in2,1);
digitalWrite(in3,0);
digitalWrite(in4,1);
  }

  void right (){
  analogWrite(EN1,128);
analogWrite(EN2,128);
digitalWrite(in1,0);
digitalWrite(in2,0);
digitalWrite(in3,1);
digitalWrite(in4,0);
  }

  void left (){
  analogWrite(EN1,128);
analogWrite(EN2,128);
digitalWrite(in1,1);
digitalWrite(in2,0);
digitalWrite(in3,0);
digitalWrite(in4,0);
  }

  
  void stope (){
  analogWrite(EN1,0);
analogWrite(EN2,0);
digitalWrite(in1,0);
digitalWrite(in2,1);
digitalWrite(in3,0);
digitalWrite(in4,1);
  }
