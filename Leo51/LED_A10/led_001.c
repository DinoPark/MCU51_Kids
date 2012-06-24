#include <STC89.H>
void delay(unsigned int n)
{
	unsigned int t;
	for(t=0; t<n; t++);
}
void main(void)
 {
	P0=0x7f;
	delay(40000);

	P0=0xbf;
	delay(10000);

	P0=0xff;
	delay(10000);

	P0=0xbf;
    delay(10000);

	P0=0xdf;
	delay(40000);

	P0=0xef;
	delay(10000);

	P0=0xff;
	delay(10000);

	P0=0xef;
	delay(10000);

	P0=0xf7;
	delay(40000);

	P0=0xfb;
	delay(10000);

	P0=0xff;
	delay(10000);

	P0=0xfb;
	delay(10000);

	P0=0xfd;
	delay(40000);

	P0=0xfe;
	delay(10000);

	P0=0xff;
	delay(10000);

	P0=0xfe;
	delay(10000);
}