# include <stdio.h>

int main(void)
{
	int n;
	int f1, f2, f3;
	int i;
	
	f1 = 1;
	f2 = 2;
	
	printf("����������Ҫ���������У� ");
	scanf("%d", &n);
	  
	if (n == 1)
	{
		f3 = 1;
	} 
	else if (n == 2)
	{
		f3 = 2;
	}
	else
	{
		for (i=3; i<=n; ++i)
		{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}
	}
	 
	 printf("%d\n", f3);
	return 0;
} 

//쳲��������� �� 1 2 3 5 8 13 21 34  
