# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	
	for (i=1; i<=10; ++i)//    ++i  i++ µÈÓÚ   i+1 
	    sum = sum + i;
	    
	    printf("sum = %d\n", sum);
	
	return 0;
}  
