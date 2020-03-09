//Code for obstacles avoiding robo car! 
int a,b;
int leftforward=10;
int leftbackward=11;
int rightforward=8;
int rightbackward=9;
int leftena=6;
int rightena=5;
int leftspeed=110;     
int rightspeed=110;    
int trigPin = 4;
int echoPin = 3;



void setup() {
    pinMode(leftforward,OUTPUT);
    pinMode(rightforward,OUTPUT);
    pinMode(leftbackward,OUTPUT);
    pinMode(rightbackward,OUTPUT);
    pinMode(2,INPUT);
    pinMode(3,INPUT);
    Serial.begin(9600);
}
void loop() {
long duration, distance;
  a = digitalRead(2)
  b = digitalRead(3)
if(a==0 && b==0)
{
right();
}
else if(a==0 && b==1)
{
left();
}
else if(a==1 && b==0)
{
right();
}
else{
forward();
}

    
}

void forward(){
  analogWrite(leftena,leftspeed);
  analogWrite(rightena,rightspeed);

  digitalWrite(leftforward,HIGH);
  digitalWrite(rightforward,HIGH);
    digitalWrite(leftbackward,LOW);
  digitalWrite(rightbackward,LOW);
  
}
void left(){
  analogWrite(leftena,leftspeed);
  analogWrite(rightena,rightspeed);


  digitalWrite(leftforward,LOW);
  digitalWrite(rightforward,HIGH);
    digitalWrite(leftbackward,HIGH);
  digitalWrite(rightbackward,LOW);
  
}
void right(){
  analogWrite(leftena,leftspeed);
  analogWrite(rightena,rightspeed);


  digitalWrite(leftforward,HIGH);
  digitalWrite(rightforward,LOW);
    digitalWrite(leftbackward,LOW);
  digitalWrite(rightbackward,HIGH);
  
}
void backward(){
  analogWrite(leftena,leftspeed);
  analogWrite(rightena,rightspeed);

  digitalWrite(leftforward,LOW);
  digitalWrite(rightforward,LOW);
    digitalWrite(leftbackward,HIGH);
  digitalWrite(rightbackward,HIGH);
}