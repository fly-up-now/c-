#include<stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	
	for(i=1;i<=10;i+=2)
	   sum = sum + i;
	    
	printf("sum = %d\n", sum);  //25 
//	printf("�����Һܸ���\n"); //���Գ�����м��� 5 
//	printf("i = %d", i);     //i���ڶ���  11 
	return 0;
}
