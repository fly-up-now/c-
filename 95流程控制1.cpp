# include <stdio.h>

int main(void)
{
	int i=0, s=0;
	
	do
	{
		if(i%2)
		{
			i++;
			continue;//ִ����������16���ж� 
		}
		i++;
		s+=i;
	}while(i < 5);
	
	printf("%d\n", s);
	
	
	return 0;
}
/* 
i      s
0      0
1      1
2     
3      4
4
5      9      
*/ 
