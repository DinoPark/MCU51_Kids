#include <STC89.H>

main()
{
 unsigned char	p;
 unsigned int	t;

 p=10;

 for (;;)
 {
  P0=p++; 	// Try this out...
  for (t=0; t<10000; t++);
 }
}
