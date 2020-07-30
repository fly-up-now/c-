# include <stdio.h>
void g(void);
 
void f(void)
{
	g(); 
}

void g(void)
{
	printf(" haha\n");
}

int main(void)
{

	f();

	return 0;
} 
