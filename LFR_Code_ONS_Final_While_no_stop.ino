#define S1 2 //Left out sensor
#define S2 3 //Left in sensor
#define S3 4 //Center sensor
#define S4 5 //Right in sensor
#define S5 6 //Right out sensor

int LM1=9;
int LM2=10;
int RM1=11;
int RM2=12;

void setup()
{
  pinMode(S1,INPUT);
  pinMode(S2,INPUT);
  pinMode(S3,INPUT);
  pinMode(S4,INPUT);
  pinMode(S5,INPUT);
  pinMode(LM1,OUTPUT);
  pinMode(LM2,OUTPUT);
  pinMode(RM1,OUTPUT);
  pinMode(RM2,OUTPUT);
  //Serial.begin(9600);  
}

void loop()
{  
   //Serial.println(digitalRead(S1));
   if(digitalRead(S1)&&digitalRead(S2)&&!(digitalRead(S3))&&digitalRead(S4)&&digitalRead(S5))             // Move forward
   {
    while(digitalRead(S1)&&digitalRead(S2)&&!(digitalRead(S3))&&digitalRead(S4)&&digitalRead(S5))
    {
    digitalWrite(LM1,HIGH);
    digitalWrite(LM2,LOW);
    digitalWrite(RM1,HIGH);
    digitalWrite(RM2,LOW);
    }
   }
   if(digitalRead(S1)&&digitalRead(S2)&&(digitalRead(S3))&&!(digitalRead(S4))&&digitalRead(S5))           // Turn medium right
   {
    while(digitalRead(S1)&&digitalRead(S2)&&(digitalRead(S3))&&!(digitalRead(S4))&&digitalRead(S5))
    {
    digitalWrite(LM1,HIGH);
    digitalWrite(LM2,LOW);
    digitalWrite(RM1,LOW);
    digitalWrite(RM2,LOW);
    }
   }
   if(digitalRead(S1)&&digitalRead(S2)&&!(digitalRead(S3))&&!(digitalRead(S4))&&digitalRead(S5))           // Turn medium right
   {
    while(digitalRead(S1)&&digitalRead(S2)&&!(digitalRead(S3))&&!(digitalRead(S4))&&digitalRead(S5))
    {
    digitalWrite(LM1,HIGH);
    digitalWrite(LM2,LOW);
    digitalWrite(RM1,LOW);
    digitalWrite(RM2,LOW);
    }
   }
   if(digitalRead(S1)&&!(digitalRead(S2))&&(digitalRead(S3))&&digitalRead(S4)&&digitalRead(S5))           // Turn medium left
   {
    while(digitalRead(S1)&&!(digitalRead(S2))&&(digitalRead(S3))&&digitalRead(S4)&&digitalRead(S5))
    {
    digitalWrite(LM1,LOW);
    digitalWrite(LM2,LOW);
    digitalWrite(RM1,HIGH);
    digitalWrite(RM2,LOW);
    }
   }
   if(digitalRead(S1)&&!(digitalRead(S2))&&!(digitalRead(S3))&&digitalRead(S4)&&digitalRead(S5))           // Turn medium left
   {
    while(digitalRead(S1)&&!(digitalRead(S2))&&!(digitalRead(S3))&&digitalRead(S4)&&digitalRead(S5))
    {
    digitalWrite(LM1,LOW);
    digitalWrite(LM2,LOW);
    digitalWrite(RM1,HIGH);
    digitalWrite(RM2,LOW);
    }
   }
   if(digitalRead(S1)&&digitalRead(S2)&&!(digitalRead(S3))&&!(digitalRead(S4))&&!(digitalRead(S5)))       // Turn sharp right 90 degree
   {
    while(digitalRead(S1)&&digitalRead(S2)&&!(digitalRead(S3))&&!(digitalRead(S4))&&!(digitalRead(S5)))
    {
    digitalWrite(LM1,HIGH);
    digitalWrite(LM2,LOW);
    digitalWrite(RM1,LOW);
    digitalWrite(RM2,LOW);
    }
   }
   if(digitalRead(S1)&&digitalRead(S2)&&digitalRead(S3)&&!(digitalRead(S4))&&!(digitalRead(S5)))          // Turn sharp right 90 degree
   {
    while(digitalRead(S1)&&digitalRead(S2)&&digitalRead(S3)&&!(digitalRead(S4))&&!(digitalRead(S5)))
    {
    digitalWrite(LM1,HIGH);
    digitalWrite(LM2,LOW);
    digitalWrite(RM1,LOW);
    digitalWrite(RM2,LOW);
    }
   }
   if(!(digitalRead(S1))&&!(digitalRead(S2))&&!(digitalRead(S3))&&digitalRead(S4)&&digitalRead(S5))       // Turn sharp left 90 degree
   {
    while(!(digitalRead(S1))&&!(digitalRead(S2))&&!(digitalRead(S3))&&digitalRead(S4)&&digitalRead(S5))
    {
    digitalWrite(LM1,LOW);
    digitalWrite(LM2,LOW);
    digitalWrite(RM1,HIGH);
    digitalWrite(RM2,LOW);
    }    
   }
   if(!(digitalRead(S1))&&!(digitalRead(S2))&&digitalRead(S3)&&digitalRead(S4)&&digitalRead(S5))          // Turn sharp left 90 degree
   {
    while(!(digitalRead(S1))&&!(digitalRead(S2))&&digitalRead(S3)&&digitalRead(S4)&&digitalRead(S5))
    {
    digitalWrite(LM1,LOW);
    digitalWrite(LM2,LOW);
    digitalWrite(RM1,HIGH); 
    digitalWrite(RM2,LOW);
    }        
   }
   if(!(digitalRead(S1))&&!(digitalRead(S2))&&!(digitalRead(S3))&&!(digitalRead(S4))&&!(digitalRead(S5)))  // Stop
   {
    while(!(digitalRead(S1))&&!(digitalRead(S2))&&!(digitalRead(S3))&&!(digitalRead(S4))&&!(digitalRead(S5)))
    {
    digitalWrite(LM1,HIGH);
    digitalWrite(LM2,LOW);
    digitalWrite(RM1,HIGH);
    digitalWrite(RM2,LOW);
    }
   }
   /*if(digitalRead(S1)&&digitalRead(S2)&&(digitalRead(S3))&&digitalRead(S4)&&digitalRead(S5))             // Move backward
   {
    digitalWrite(LM1,HIGH);
    digitalWrite(LM2,LOW);
    digitalWrite(RM1,HIGH);
    digitalWrite(RM2,LOW);
   }*/
}

