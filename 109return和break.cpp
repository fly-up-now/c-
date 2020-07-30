# include <stdio.h>

void f(void)
{
	int i;
	
	for (i=0; i<5; ++i)
	{
		printf("大家辛苦了！\n");
	//	break;    //终止循环 
		return;    // 终止函数 
	}
	printf("同志们好！\n");
} 

int main(void)
{
	f();
  return 0; 
}
