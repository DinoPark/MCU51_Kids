#include <STC89.H>

void delay (unsigned int n)
{
	unsigned int t;
	for(t=0; t<n; t++);
}
 				 
void main(void)
{
				   
	P0=0xf3;	 
	delay (35000);

	P0=0xfc;
	delay(35000);

	P0=0x3f;
	delay(35000);

	P0=0xfc;
	delay(35000);

	P0=0x3f;
	delay(35000);

	P0=0xcf;
	delay(35000);

	P0=0x3f;
	delay(35000);

	P0=0xfc;
	delay(35000);

	P0=0xff;
	delay(9000);

	P0=0x3f;
	delay(35000);

	P0=0xfc;
	delay(35000);

	P0=0xf3;
	delay(35000);
}