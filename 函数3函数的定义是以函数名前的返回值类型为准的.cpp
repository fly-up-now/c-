# include <stdio.h>
int f(void)
{
	return 10.6;
} 
int main(void)
{
	double x = 6.4;
	
	x = f();
	
	printf("%lf", x);
	
	return 0;
}
