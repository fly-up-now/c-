# include <stdio.h>

void f(void);  //函数的声明， 分号不能省 
int main(void)
{
	f();
	
	return 0;
} 
void f(void)
{
	printf("哈哈！\n");
}
