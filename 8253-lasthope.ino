const int a0=8;
const int a1=9;
const int WR=11;
const int RD=10;
void setup()
{
  pinMode(0,OUTPUT);pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);pinMode(7,OUTPUT);
  pinMode(a0,OUTPUT);pinMode(a1,OUTPUT); 
  pinMode(WR,OUTPUT);pinMode(RD,OUTPUT);

  digitalWrite(RD, 1);
  digitalWrite(WR, 1);
  //INSTRUCTION 1 = MODE 0, Counter 2, Decrement
  digitalWrite(7,1);   // INSTRUCTTION
  digitalWrite(6,0);   //
  digitalWrite(5,0);   //
  digitalWrite(4,1);   // 
  digitalWrite(3,0);   //
  digitalWrite(2,0);   //
  digitalWrite(1,0);   //
  digitalWrite(0,0);   //  
  delay(10);
  digitalWrite(a0,1);  //Select Control Register
  digitalWrite(a1,1);  
  digitalWrite(WR,0);   //Disabling WRITE
  delay(100);
  //INSTRUCTION 2 = Initialize 100 (in decimal);
  digitalWrite(WR, 1);
  digitalWrite(7,0);   // INSTRUCTION
  digitalWrite(6,1);   //
  digitalWrite(5,1);   //
  digitalWrite(4,0);   // 
  digitalWrite(3,0);   //
  digitalWrite(2,1);   //
  digitalWrite(1,0);   //
  digitalWrite(0,0);
  delay(10);
  digitalWrite(a0,0);  //Select Counter 2
  digitalWrite(a1,1);  
  digitalWrite(WR,0);   //Disabling WRITE
  delay(100);
  digitalWrite(WR,1);   //Deselecting WRITE
}

void loop(){

}
