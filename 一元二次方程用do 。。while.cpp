# include <stdio.h>
# include <math.h>

int main(void)
{
    int a, b, c;
	double x1, x2;
	double delta;
	char ch;
	
	do
	{
	        printf("请输入一元二次方程的三个系数：\n");
	        printf("a = ");
	        scanf("%d", &a);
			printf("b = ");
			scanf("%d", &b);
			printf("c = ");
			scanf("%d", &c);
			
			delta = b*b - 4*a*c;
			
			if(delta > 0)
			{
			x1 = (-b + sqrt(delta)) / (2*a);
			x2 = (-b - sqrt(delta)) / (2*a);
			printf("有两个解， x1 = %lf, x2 = %lf\n", x1, x2);
		    }
			else if(delta == 0)
			{ 
			x1 = (-b) / (2*a);
			x2 = x1;
			printf("有唯一解， x1 = x2 = %lf\n", x1, x2);
			}
			else
			 printf("无解!\n");
			 
	        printf("您想继续吗？（Y/N）：");
	        scanf(" %c", &ch);   //%c前面必须加一个空格， 原因略 
					 
    }while ('y' == ch || 'Y' == ch);
	 
	 
  return 0;
} 
