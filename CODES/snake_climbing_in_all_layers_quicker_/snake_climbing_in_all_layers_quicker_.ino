void setup() 
{
  for(int i=0;i<14;i++)
  {
    pinMode(i,OUTPUT);
  }

}

           
int anode[]={0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,
             0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x1E,0x1F,
             0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29,0x2A,0x2B,0x2C,0x2D,0x2E,0x2F,
             0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x3A,0x3B,0x3C,0x3D,0x3E,0x3F};

int cathode[]={0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07};
void loop() 
{
  
   for(int k=0;k<8;k++)
   {
    for(int j=0;j<8;j++)
   
   {
   PORTD=anode[j];
   PORTB=cathode[k];
   
   }
   delay(20);
   }
  
  for(int k=0;k<8;k++)
  {for(int j=15;j>=8;j--)
  {
  PORTD=anode[j];
  PORTB=cathode[k];
  
  }delay(20);}
 
  for(int k=0;k<8;k++)
  {
  for(int j=16;j<24;j++)
  {
  PORTD=anode[j];
  PORTB=cathode[k];
  
  }delay(20);}
  
  for(int k=0;k<8;k++)
    {for(int j=31;j>=24;j--)
  {
  PORTD=anode[j];
  PORTB=cathode[k];
  
  }delay(20);}
for(int k=0;k<8;k++)
{
    for(int j=32;j<40;j++)
  {
  PORTD=anode[j];
  PORTB=cathode[k];
  
  }delay(20);}
for(int k=0;k<8;k++)
 {   for(int j=47;j>=40;j--)
  {
  PORTD=anode[j];
  PORTB=cathode[k];
  
  }delay(20);}
for(int k=0;k<8;k++)
 {   for(int j=48;j<56;j++)
  {
  PORTD=anode[j];
  PORTB=cathode[k];
  
  }delay(20);}
for(int k=0;k<8;k++)
{
    for(int j=63;j>=56;j--)
  {
  PORTD=anode[j];
  
  PORTB=cathode[k];
    
  }
  delay(20);}
}

  

 
