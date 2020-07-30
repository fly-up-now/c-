# include <stdio.h>

int f(int i)
{
	return 10;
} 

int main(void)
{
    int i = 99;
    printf("%d\n", i);
    i = 5 + f(2); 
	printf("%d\n", i);	

	return 0;
}
