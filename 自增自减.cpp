# include <stdio.h>

int main(void)
{
	int i, j, k, m;
	
	i = j = 3;
	k = i++;
	m = ++j;
	
	printf("i = %d, j = %d, k = %d, m = %d\n", i, j, k, m);
	
	return 0;
} 
