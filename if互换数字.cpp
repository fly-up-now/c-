# include <stdio.h>

int main(void)
{
	int i = 3;
	int j = 5;
	int t; 
	
/*	
    i = j;   原因：i = 5； j = 5； 
	j = i;         i = 5； j = 5； 
错误， 无法对i j的互换 
*/
    t = i;
    i = j;   
	j = t;
	
	printf("i = %d, j = %d\n", i, j);
	
	return 0;
} 
