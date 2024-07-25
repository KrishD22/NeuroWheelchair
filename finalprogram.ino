int c = 2;

int in1 = 6;
int in2 = 7;
int in3 = 8;
int in4 = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  if(c==0){
    //MOTORS FORWARD
    //MOTOR A FORWARD
    digitalWrite(in1,LOW);
    digitalWrite(in2,HIGH);
    //MOTOR B FORWARD
    digitalWrite(in3,LOW);
    digitalWrite(in4,HIGH);
  }

  /*
  if(c==1){
    //MOTORS BACKWARD
    //MOTOR A BACKWARD
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    //MOTOR B BACKWARD
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
  }
  */

  if(c==1){
    //LEFT TURN
    //MOTOR A FORWARD
    digitalWrite(in1,LOW);
    digitalWrite(in2,HIGH);
    //MOTOR B BACKWARD
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
  }

  if(c==2){
    //RIGGHT TURN
    //MOTOR A BACKWARD
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    //MOTOR B FORWARD
    digitalWrite(in3,LOW);
    digitalWrite(in4,HIGH);

    
  }
}
