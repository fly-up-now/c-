# include <stdio.h>

int main(void)
{
	char ch = 'a';
	int i = 11;
	double k = 12.2;
	char * p = &ch;
	int * q = &i;
	double * r = &k; 
	
	printf("%d  %d  %d\n", sizeof(p), sizeof(q), sizeof(r));
	printf("\n"); 
	printf("%d  %d  %d\n", sizeof(ch), sizeof(i), sizeof(k)); 
	
	
	
	return 0; 
}
