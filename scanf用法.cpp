# include <stdio.h>
/*
目的：探寻scanf的作用
*/ 
int main(void)
{
	int i;
	 
//	scanf ("%d\n",&i);
    scanf ("m%d",&i);	
	printf ("i = %d\n",i); 
	return 0;
	
 
} 
/* 
结果    
123
123
i = 123
*/ 
/*
结果
m123
i = 123
*/
 
