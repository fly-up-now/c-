# include <stdio.h>

int main(void)
{
	int * p;
	int i = 5;
	int * q;
	
	p = &i;
//	*p = q;       error  语法错误 
//  *p = *q ;     error
     q  =  &i;
//	 p = q;	   error  如果q内部是垃圾值，则本程序不能读写*q的内容 
	printf("%d\n", *q);
	
	return 0;
} 
