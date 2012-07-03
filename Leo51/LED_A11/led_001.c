#include <STC89.H>
void delay(unsigned int n)
{
	unsigned int t;
	for (t=0; t<n; t++);

}
void main(void)
{
	P0=0x7f;
	delay(50000);

	P0=0xbf;
	delay(20000);

	P0=0xdf;
	delay(20000);

	P0=0xef;
	delay(20000);

	P0=0xf7;
	delay(50000);

	P0=0xfb;
	delay(50000);

	P0=0xfd;
	delay(50000);

	P0=0xfe;
	delay(50000);
}