# include <stdio.h> 

int main(void)
{
	int i;
	int sum = 0;
	
	for (i=1; i<101; i++)
	     sum = sum + i;
	     
	printf("sum = %d", sum);
	
	return 0;
} 
