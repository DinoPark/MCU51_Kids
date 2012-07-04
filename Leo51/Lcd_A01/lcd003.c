#include <STC89.H>

#define RS P20
#define RW P21
#define EN P22
#define DATAPORT P0
#define BF P07
#define DELAYSHORT 500

void delay(unsigned int delaycount)
{
	unsigned int t;
	for(t=0; t<delaycount; t++);
}

unsigned char lcdCheckBusy(void)
{
	unsigned char bf;

	DATAPORT=0xFF;

	RS=0;
	RW=1;
	EN=1;
	delay(DELAYSHORT);

	bf=BF;

	EN=0;
	RW=0;

	return bf;
}

void lcdWaitUntilReady(void)
{
	while(lcdCheckBusy() == 1);
}
		   
void lcdWriteCmd(unsigned char cmd)
{
	RS=0;
	RW=0;
	EN=0;

	DATAPORT = cmd;
	delay(DELAYSHORT);

	EN=1;
	delay(DELAYSHORT);

	EN=0;
	RW=1;
}

void lcdWriteData(unsigned char dData )							
{
	lcdWaitUntilReady();

	RS=1;
	RW=0;
	EN=0;

	DATAPORT=dData;
	delay(DELAYSHORT);

	EN=1;
	delay(DELAYSHORT);

	EN=0;
	RW=1;             
}

void lcdClear(void)
{
	lcdWaitUntilReady();
	lcdWriteCmd(0x01);
}

void main(void)
{																
	char msgA[]={0x46, 0x20, 0x4C, 0x6F, 0x76, 0x65, 0x20, 0x38, 0x30, 0x35, 0x31,0};
	char msgB[]={'I',' ','L','o','v','e',' ','8','0','5','1', 0};
	char msgC[]="I love 8051";

	unsigned int n;
	
		
 	lcdClear();

	lcdWriteCmd(0x0f);
	lcdWriteCmd(0x38);
	lcdWriteCmd(0x06);

	for(n=0; msgA[n]!=0; n++);
	{
		lcdWriteData(msgA[n]);
	}

//	lcdWriteData('I');				//'I'//
//	lcdWriteData(' ');				//'	'//
//	lcdWriteData('L');				//'L'//
//	lcdWriteData('o');				//'o'//
//	lcdWriteData('v');				//'v'//
//	lcdWriteData('e');				//'e'//
//	lcdWriteData(' ');				//'	'//
//	lcdWriteData('8');				//'8'//
//	lcdWriteData('0');				//'0'//
//	lcdWriteData('5');				//'5'//
//	lcdWriteData('1');				//'1'//
//	lcdWriteData(0x7E);				//'->'//
//	lcdWriteData(0xF6);				//'	'//
//	lcdWriteData(0x33);				//'3'//
//	lcdWriteData(0xFA);			    //'ǧ'//
//	lcdWriteData(0xFB);				//'��'//

//	lcdWriteData(0x46);
//	lcdWriteData(0x20);
//	lcdWriteData(0x4C);
//	lcdWriteData(0x6F);
//	lcdWriteData(0x76);
//	lcdWriteData(0x65);
//	lcdWriteData(0x20);
//	lcdWriteData(0x38);
//	lcdWriteData(0x30);
//	lcdWriteData(0x35);
//	lcdWriteData(0x31);

	for (;;);
}
																																																																																																																																																																																																																																																																																																																                                                                           																		     									   