# include <stdio.h>

int main(void)
{
	int a[5]; //a是数组名 5是数组元素的个数 元素就是变量  a[0] -- a[4] 
//	int a[3][4]; //三行四列  a[0][0]是第一个元素 a[i][j]第i+1行j+1列
	int b[5];
	
	printf("%#X\n", &a[0]);
	printf("%#X\n", a);	 
	
	
	
	
	return 0;
} 
/*
总结：
一维数组名是个指针常量 ，它存放的是一维数组的第一个元素的地址 
*/
