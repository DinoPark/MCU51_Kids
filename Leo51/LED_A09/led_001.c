#include <STC89.H>
void delay(unsigned int n)
{
	unsigned int t;
	for(t=0; t<n; t++);
}
void main (void)
{
	P0=0x0f;
	delay(40000);

	P0=0xf0;
	delay(10000);

	P0=0xff;
	delay(10000);

	P0=0xf0;
	delay(10000);

	P0=0xff;
	delay(10000);

}

