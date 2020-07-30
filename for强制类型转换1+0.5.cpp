# include <stdio.h>

int main(void)
{
	int i; 
	float sum = 0;
	
	for (i=1; i<=100; i++)
	     sum = sum + 1 / (float)(i); 
//更简单的	  sum = sum + 1.0 / i; 
	
    printf("sum = %f\n", sum); //float  必须用%f输出 
	
	return 0;
} 
/*     试数 
1-> i=1 1<=100  
   sum= 0+1/1.0=1 i++ i = 2
2-> i=2 2<=100  
   sum= 1+1/2.0   i++ i = 3
.........................
............................
*/   
