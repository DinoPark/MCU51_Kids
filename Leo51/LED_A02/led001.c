#include <STC89.H>

void delay(unsigned int n)
{			   
	unsigned int t;
	for(t=0; t<n; t++);
}

void main(void)
{
	P0=0x7e;
	delay(40000);														
	
	P0=0xbd;
	delay(20000);
	
	P0=0xdb;
	delay(10000);
	
	P0=0xe7;
	delay(5000);
	
	P0=0xdb;
	delay(10000);
	
	P0=0xbd;
	delay(20000);
	
	P0=0x7e;
	delay(40000);
}
