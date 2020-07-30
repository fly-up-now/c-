# include <stdio.h>
int main(void)
{
	int  i, j;
    printf("输入i，j的值，请用空格分开\n"); 
	scanf("%d %d",&i, &j);
	if (i > j) 
	    printf("i大于j\n");
	else
	     printf("i小于j\n");
	
	
	return 0;
}
