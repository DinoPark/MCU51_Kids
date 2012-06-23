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

   	P0=0x8f;										
   	delay(40000);

   	P0=0xf1;
   	delay(40000);

   	P0=0x9f;
   	delay(40000);
   
   	P0=0xf0;
   	delay(40000);

   	P0=0xff;
   	delay(40000);

   	P0=0xf0;
   	delay(40000);
}