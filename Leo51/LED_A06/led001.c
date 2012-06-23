#include <STC89.H>
 
 void main(void)
 {
   unsigned int t;
   
   P0=0x3c;
   for(t=0; t<40000; t++);
   
   P0=0xc3;
   for(t=0; t<40000; t++);
   
 }