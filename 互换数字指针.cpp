# include <stdio.h>

void huhuan(int * a, int * b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;

    return;
}


int main(void)
{
	int a = 3;
	int b = 4;
	int t;
	
    huhuan(&a, &b);
    
    printf("a = %d, b = %d\n", a, b); 
	
	return 0;
} 
