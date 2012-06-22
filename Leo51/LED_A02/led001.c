#include <STC89.H>

void main(void)
{
	unsigned int t;

	P0=0x7e;
	for(t=0; t<3000; t++);
	
	P0=0xbd;
	for(t=0; t<4000; t++);
	
	P0=0xdb;
	for(t=0; t<6000; t++);
	
	P0=0xe7;
	for(t=0; t<9000; t++);
	
	P0=0xdb;
	for(t=0; t<6000; t++);
	
	P0=0xbd;
	for(t=0; t<4000; t++);
	
	P0=0x7e;
	for(t=0; t<3000; t++);
}
