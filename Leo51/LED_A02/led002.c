#include <STC89.H>

void delay(unsigned int n)
{
	unsigned int t;

	for (t=0; t<n; t++);
}

void main(void)
{
	P0=0x7e;
	delay(9000);
	
	P0=0xbd;
	delay(12000);
	
	P0=0xdb;
	delay(18000);
	
	P0=0xe7;
	delay(27000);
	
	P0=0xdb;
	delay(18000);

	P0=0xbd;
	delay(12000);
	
	P0=0x7e;
	delay(9000);
}
