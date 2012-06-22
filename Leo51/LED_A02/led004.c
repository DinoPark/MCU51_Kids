#include <STC89.H>

void leo(unsigned int n)

{
     unsigned int t;
	 for(t=0; t<n; t++);
}

void main(void)
{
	unsigned char n=0;

	for (;;)
	{
		P0=~n++;
		leo(5000);
	}
}