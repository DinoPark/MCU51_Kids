#include <STC89.H>

void main(void)
{
	unsigned int t;
	P0=0x7e;
	for(t=1; t<65535; t++);

	P0=0xff;
	for(t=1; t<65535; t++);
}