# include <stdio.h>

int main(void)
{
	char * p;
	int i = 5;
	char  ch = 'a';
	
	p = &ch; 
	
	printf("%c", *p);
	
	return 0;
} 
