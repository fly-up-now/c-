/*+ - * / %
>  >=  < <= != ==
! && ||
=    += -= *=  /= */
#include <stdio.h>
int main(void)
{
	int i = 10;
	int k = 20;
	int m;
	
	m = (1>2) && (k=5); 
	printf("m = %d, k = %d\n", m, k);
	
	
	return 0;
} 
