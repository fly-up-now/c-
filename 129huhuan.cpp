# include <stdio.h>

void huhuan(int * p, int * q)
{
	int i;
	i = *p;
	*p = *q;
	*q = i;
	
	return;  
}

int main(void)
{
	int a = 4;
	int b = 7;
	
	huhuan(&a, &b);
	
	printf("a = %d, b = %d", a, b); 
}  
