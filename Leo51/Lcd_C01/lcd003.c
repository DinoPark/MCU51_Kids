#include <STC89.H>

#define RS	P20
#define RW	P21
#define EN	P22
#define	BF	P07
#define DATAPORT	P0
#define DELAYSHORT	10

void delay(unsigned int n)
{
	unsigned int t;
	for (t=0; t<n; t++);
}

unsigned char lcdCheckBusy(void)
{
	unsigned char bf;

	BF=1;

	EN = 0;
	RS = 0;
	RW = 1;
	EN = 1;
	delay(DELAYSHORT);
	bf = BF;
	EN = 0;
	RS = 1;
	RW = 1;

	return bf;

} /* lcdCheckBusy */	

void lcdWaitNotBusy(void)
{
	while(lcdCheckBusy()==1);

} /* lcdWaitNotBusy */

void lcdWriteCmd(unsigned char cmd)
{
	lcdWaitNotBusy();

	EN = 0;
	RS = 0;			
	RW = 0;
	DATAPORT = cmd;
	delay(DELAYSHORT);
	EN = 1;
	delay(DELAYSHORT);
	EN = 0;
	RS = 1;
	RW = 1;

} /* lcdWriteCmd */

void lcdWriteData(unsigned char dData)
{
	lcdWaitNotBusy();

	EN = 0;
	RS = 1;
	RW = 0;
	DATAPORT = dData;
	delay(DELAYSHORT);
	EN = 1; 
	delay(DELAYSHORT);
	EN = 0;
	RS = 1;
	RW = 1;

} /* lcdWriteData */

void lcdClearScreen(void)
{
	lcdWriteCmd(1);	

} /* lcdClearScreen */

void main(void)
{
	lcdClearScreen();
	
	lcdWriteCmd(0x06);
	lcdWriteCmd(0x0f);
	lcdWriteCmd(0x38);

	lcdWriteData('L');
	lcdWriteData('e');
	lcdWriteData('o');
	lcdWriteData(' ');
	lcdWriteData('H');
	lcdWriteData('a');

	for (;;);

}


