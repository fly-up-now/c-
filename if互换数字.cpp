# include <stdio.h>

int main(void)
{
	int i = 3;
	int j = 5;
	int t; 
	
/*	
    i = j;   ԭ��i = 5�� j = 5�� 
	j = i;         i = 5�� j = 5�� 
���� �޷���i j�Ļ��� 
*/
    t = i;
    i = j;   
	j = t;
	
	printf("i = %d, j = %d\n", i, j);
	
	return 0;
} 
