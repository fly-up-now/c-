# include <stdio.h> 
 
int main(void)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;
	
	for (i=1; i<=100; i++)
	    {
	    	if (i % 2 == 1)
			{
				sum1 += i;
			} 
			else if(i % 2 == 0)
			{
				sum2 += i;
			}
	    } 
	
	printf("������ = %d\n", sum1);
	printf("ż���� = %d\n", sum2);
	
	return 0;
}
