# include <stdio.h> 

int main(void)
{
	int val; //��Ŵ��жϵ�����
	int sum = 0;
	int m;
	
	printf("����������Ҫ�жϵ����֣�"); 
	scanf("%d", &val);
	
	m = val;
	while (m)
	{
		sum = sum * 10 + m % 10;
		m /= 10;
	}
	if (sum == val)
	   printf("YES!\n");
	else
	   printf("NO!\n");
	
	return 0;
} 
/*val 3456
 m    3456
sum    6
m     345
sum   60+5 ==65
m     34
sum   650+4  654
m     3
sum 6540+3= 6543
*/ 
