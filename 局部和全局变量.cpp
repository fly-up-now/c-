# include <stdio.h>

int k = 1000;

void g()
{
	 printf("k = %d\n", k);  
}

void f(void)
{
	g();
	printf("k = %d\n", k);
}

int main(void)
{
	f();
	
	return 0;
} 
