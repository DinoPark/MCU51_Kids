#include <STC89.H>

void leo(unsigned int n)
{
     unsigned int t;

	 for(t=0; t<n; t++);
}

void main(void)
{
     P0=0x7e;
	 leo(9000);

	 P0=0xbd;
	 leo(27000);

	 P0=0xdb;
	 leo(36000);

	 P0=0xe7;
	 leo(50000);

	 P0=0xdb;
	 leo(36000);

	 P0=0xbd;
	 leo(27000);

	 P0=0x7e;
	 leo(9000);
}