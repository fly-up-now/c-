# include <stdio.h>

int main(void)
{
	int * p;
	int i = 5;
	int * q;
	
	p = &i;
//	*p = q;       error  �﷨���� 
//  *p = *q ;     error
     q  =  &i;
//	 p = q;	   error  ���q�ڲ�������ֵ���򱾳����ܶ�д*q������ 
	printf("%d\n", *q);
	
	return 0;
} 
