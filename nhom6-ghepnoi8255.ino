const int a0=9;
const int a1=10;
const int WR=11;
const int RD=12;
void setup()
{
  pinMode(0,OUTPUT);pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);pinMode(7,OUTPUT);
  pinMode(a0,OUTPUT);pinMode(a1,OUTPUT); 
  pinMode(WR,OUTPUT);pinMode(RD,OUTPUT);
}

void loop(){
  digitalWrite(RD,1);    //Disabling READ
  digitalWrite(WR,1);   //Disabling WRITE

  digitalWrite(a0,1);   //Selecting Control Register of 8255
  digitalWrite(a1,1);   //Selecting Control Register of 8255
  
  digitalWrite(7,1);   //
  digitalWrite(6,0);   //
  digitalWrite(5,0);   //
  digitalWrite(4,0);   // 8255 All Ports as OUTPUT
  digitalWrite(3,0);   //
  digitalWrite(2,0);   //
  digitalWrite(1,0);   //
  digitalWrite(0,0);   //
  digitalWrite(WR,0);    //Enabling WRITE
  
  delay(500);
  digitalWrite(WR,1);   //Disabling WRITE
  digitalWrite(a0,1);  //Port A is selected
  digitalWrite(a1,0);  //Port A is selected
  
  digitalWrite(0,1);    //
  digitalWrite(1,1);    //
  digitalWrite(2,1);    //
  digitalWrite(3,1);    //
  digitalWrite(4,1);    //Port-A all pins high
  digitalWrite(5,1);    //
  digitalWrite(6,1);    //
  digitalWrite(7,1);    //
  digitalWrite(WR,0);   //WRITE ENABLED
  
  delay(500);
  digitalWrite(WR,1);   //WRITE Disabled
  
  digitalWrite(0,0);    //
  digitalWrite(1,0);    //
  digitalWrite(2,0);    //
  digitalWrite(3,0);    //
  digitalWrite(4,0);    //Port-A all pins LOW
  digitalWrite(5,0);    //
  digitalWrite(6,0);    //
  digitalWrite(7,0);    //
  digitalWrite(WR,0);   //WRITE Enabled
  
  delay(1000);
  digitalWrite(WR,1);   //Deselecting WRITE
  for(int i=7;i>=0;i--){
    digitalWrite(WR,1);
    digitalWrite(i,1);
    digitalWrite(WR,0);
    delay(200);
  }
}
