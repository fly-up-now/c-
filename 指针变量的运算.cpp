# include <stdio.h>

int main(void)
{
	int a[5];
	int * p = &a[1];
	int * q = &a[4];	
	printf("%d", q-p);
	
   return 0; 
}
 
