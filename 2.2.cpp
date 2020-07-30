#include <stdio.h>
#include <math.h>
int main(void)
{   
    //把三个系数保存到计算机中 
	int a = 1;
	int b = 6;
	int c = 3;
	
   double delta;
   double x1;
   double x2;
   delta = b*b -4*a*c;
   
   if(delta>0)
   {
   	x1 = (-b + sqrt(delta))/(2*a);
   	x2 = (-b - sqrt(delta))/(2*a);
   	printf("该一元二次方程有两个解，x1 = %f，x2 = %f\n",x1,x2);
   }	 
	
	else if(delta == 0)
	{
	x1 = (-b)/(2*a);
	x2 = x1;
	printf("该一元二次方程有唯一一个解，x1 = x2 = %f\n",x1);
	 
	}
	
	else
	{
		printf("无解\n");
	}
	
	return 0; 
}
 
