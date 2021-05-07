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
//cathode 7 
PORTD=anode[56];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[48];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[40];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[32];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[24];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[16];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[8];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[0];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[1];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[2];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[3];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[4];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[5];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[6];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[7];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[15];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[23];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[31];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[39];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[47];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[55];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[63];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[62];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[61];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[60];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[59];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[58];
PORTB=cathode[7];
delayMicroseconds(1);

PORTD=anode[57];
PORTB=cathode[7];
delayMicroseconds(1);

//cathode 6th
delay(100);
PORTD=anode[56];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[48];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[40];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[32];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[24];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[16];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[8];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[0];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[1];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[2];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[3];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[4];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[5];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[6];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[7];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[15];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[23];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[31];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[39];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[47];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[55];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[63];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[62];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[61];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[60];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[59];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[58];
PORTB=cathode[6];
delayMicroseconds(1);

PORTD=anode[57];
PORTB=cathode[6];
delayMicroseconds(1);

//cathode 5th
delay(100);
PORTD=anode[56];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[48];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[40];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[32];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[24];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[16];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[8];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[0];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[1];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[2];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[3];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[4];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[5];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[6];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[7];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[15];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[23];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[31];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[39];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[47];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[55];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[63];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[62];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[61];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[60];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[59];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[58];
PORTB=cathode[5];
delayMicroseconds(1);

PORTD=anode[57];
PORTB=cathode[5];
delayMicroseconds(1);


//cathode 4th
delay(100);
PORTD=anode[56];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[48];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[40];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[32];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[24];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[16];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[8];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[0];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[1];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[2];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[3];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[4];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[5];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[6];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[7];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[15];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[23];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[31];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[39];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[47];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[55];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[63];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[62];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[61];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[60];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[59];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[58];
PORTB=cathode[4];
delayMicroseconds(1);

PORTD=anode[57];
PORTB=cathode[4];
delayMicroseconds(1);



//cathode 3rd
delay(100);
PORTD=anode[56];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[48];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[40];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[32];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[24];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[16];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[8];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[0];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[1];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[2];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[3];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[4];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[5];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[6];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[7];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[15];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[23];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[31];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[39];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[47];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[55];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[63];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[62];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[61];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[60];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[59];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[58];
PORTB=cathode[3];
delayMicroseconds(1);

PORTD=anode[57];
PORTB=cathode[3];
delayMicroseconds(1);




//cathode 2nd
delay(100);
PORTD=anode[56];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[48];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[40];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[32];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[24];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[16];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[8];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[0];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[1];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[2];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[3];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[4];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[5];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[6];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[7];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[15];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[23];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[31];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[39];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[47];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[55];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[63];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[62];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[61];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[60];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[59];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[58];
PORTB=cathode[2];
delayMicroseconds(1);

PORTD=anode[57];
PORTB=cathode[2];
delayMicroseconds(1);




//cathode 1st
delay(100);
PORTD=anode[56];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[48];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[40];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[32];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[24];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[16];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[8];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[0];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[1];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[2];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[3];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[4];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[5];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[6];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[7];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[15];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[23];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[31];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[39];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[47];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[55];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[63];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[62];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[61];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[60];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[59];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[58];
PORTB=cathode[1];
delayMicroseconds(1);

PORTD=anode[57];
PORTB=cathode[1];
delayMicroseconds(1);


//cathode oth
delay(100);
PORTD=anode[56];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[48];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[40];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[32];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[24];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[16];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[8];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[0];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[1];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[2];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[3];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[4];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[5];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[6];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[7];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[15];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[23];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[31];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[39];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[47];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[55];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[63];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[62];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[61];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[60];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[59];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[58];
PORTB=cathode[0];
delayMicroseconds(1);

PORTD=anode[57];
PORTB=cathode[0];
delayMicroseconds(1);
delay(100);
}


  

 
