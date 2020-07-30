# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	
	for(i=3; i<=10; i++)
	{
		if(i % 3 == 0)
	    {	sum = sum + i;
	     //  1 
	    } 
	    //2 
	}
	 printf("sum = %d\n", sum); //3 
	
	return 0;
}

// printf("sum = %d\n", sum);在123号位的输出结果不同
//i     3 4 5 6 7 8  9 10 11 
//sum   3 3 3 9 9 9 18 18 
