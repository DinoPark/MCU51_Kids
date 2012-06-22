/* This is a simple example of running LEDs */

#include <STC89.H>

main()
{
 unsigned char	p;
 unsigned int	t;

 p=0;

 for (;;)
 {
  P0=p++; 	// Try this out...
  for (t=0; t<10000; t++);
 }
}
