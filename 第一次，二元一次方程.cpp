# include <stdio.h> 
# include <math.h>
int main(void)
{
	int a=10;
	int b=100;
	int c=10;
	double delta; //delt存放的是b*b-4*a*c
	double x1;    //存放的一元二次方程的其中一个解
	double x2;   // 存放的一元二次方程的其中一个解
	delta=b*b-4*a*c;
	
	if(delta>0)
	{ 
	x1=(-b+sqrt(delta))/(2*a);
	x2=(-b-sqrt(delta))/(2*a); 
	printf("该二元一次方程有两个解，x1=%f,x2=%f\n",x1,x2);
	}
    else if(delta==0)
	{
	x1=-b/(2*a);
	
	x2=x1;
	printf("该一元二次方程有一个唯一解，x1=x2=%f\n",x1);
	}	
	else
	  {
	    printf("无解\n") ;
     }
	
	return 0;
} 
