# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	
	for(i=1; i<=100; i++)
	{
		if(i % 2 == 1)
		sum += i;                            //sum = sum + i; 
	}
	
	printf("sum = %d\n", sum); 
	
	return 0;
} 

/*i    1  1  2
  sum  0  1  1
 */  
