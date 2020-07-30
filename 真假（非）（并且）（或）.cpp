#include <stdio.h>
int main(void)
{
	int i = 10;
	int k = 20;
	int m;
	
/*	m = (1>2) && (k = 5);
	// &&(并且)左边的表达式为假  右边的表达式肯定不会执行 
	//结果 m = 0, k = 20 */ 

/*	m = (3>2) || (k = 5); 
	//||(或)左边的表达式为真  右边的表达式肯定不会执行
	//结果 m = 1, k = 20 */ 
	 
	printf("m = %d, k = %d\n", m, k);
	
	return 0; 
} 
