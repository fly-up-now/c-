#include<stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	
	for(i=1;i<=10;i+=2)
	   sum = sum + i;
	    
	printf("sum = %d\n", sum);  //25 
//	printf("今天我很高兴\n"); //测试程序进行几次 5 
//	printf("i = %d", i);     //i等于多少  11 
	return 0;
}
