# include <stdio.h>

int main(void)
{
	int x = 47; 		//100是十进制  
	
	printf("%x\n", x);     //输出的结果是：2f 
	printf("%X\n", x);	   //输出的结果是：2F								
	printf("%#X\n", x);	   //输出的结果是：0X2F
	printf("%#x\n", x);	   //输出的结果是：0x2f 
	
	
	return 0;
} 
