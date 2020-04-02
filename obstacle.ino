//Code for obstacles avoiding robo car! 




//==================================== Pin and Variable declaration ( Section 1 )

/* 
All Arduino Pins and Program Variables declaration is done in this section.
We have three component to declare
    a. 2 IR receivers
    b. left wheel
    c. right wheel 

*/

// Start of pin and variable declaration

int a,b;   // Left and Right IR sensor Receiver Pins

// Left and Right wheel Motor Driver pins
int leftforward=10;
int leftbackward=11;

int rightforward=8;
int rightbackward=9;

int leftena=6;
int rightena=5;

int leftspeed=110;     
int rightspeed=110;

// Sonar pins
int trigPin = 4;
int echoPin = 3;

// End of pin and variable declaration

/*
Input Output Mode Selection
In this "setup" section, the used pins are set to work as
input or output mode.
*/
void setup() {
    pinMode(leftforward,OUTPUT);
    pinMode(rightforward,OUTPUT);
    pinMode(leftbackward,OUTPUT);
    pinMode(rightbackward,OUTPUT);
    pinMode(2,INPUT);
    pinMode(3,INPUT);
    Serial.begin(9600);
}

// ==================================== Main Program ( Section 2 )

//Start of main program
void loop() 
{
    long duration, distance;
      a = digitalRead(2)
      b = digitalRead(3)
    if(a==0 && b==0)//if both sensor getting obstacle
        { right();}
    else if(a==0 && b==1)
        { left(); }
    else if(a==1 && b==0)
        { right(); }
    else
        { forward(); }

}   //End of main program



// ==================================== User defined functions ( Section 3 )
/*
User defined Functions
All the user defined functions, that is used in the main loop, is defined and created in this section
*/

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
