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
	        printf("������һԪ���η��̵�����ϵ����\n");
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
			printf("�������⣬ x1 = %lf, x2 = %lf\n", x1, x2);
		    }
			else if(delta == 0)
			{ 
			x1 = (-b) / (2*a);
			x2 = x1;
			printf("��Ψһ�⣬ x1 = x2 = %lf\n", x1, x2);
			}
			else
			 printf("�޽�!\n");
			 
	        printf("��������𣿣�Y/N����");
	        scanf(" %c", &ch);   //%cǰ������һ���ո� ԭ���� 
					 
    }while ('y' == ch || 'Y' == ch);
	 
	 
  return 0;
} 
