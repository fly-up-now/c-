# include <stdio.h>


//功能：判断m是否是素数 是 返回true ， 不是 返回false 
bool IsPrime(int m) 
{
	int i;
	for(i=2; i<m; ++i)
	{
	  if (0 == m%i)
	      break; 
    }
    if (i == m)
	   return true;
	else 
	   return false; 
}


//功能：把1到n之间所以的素数在显示器上输出 
void TraverseVal(int n)
{
    int i;
	
	for (i=2; i<=n; ++i)
	{
		//判断i是否是素数，是输出，不是不输出
		if ( IsPrime(i) )
		    printf("%d\n", i); 
	}
} 


int main(void)
{
	int val;
	
	scanf("%d", &val);
	TraverseVal(val); 
	
	
	return 0;
}
/*
  23点06分 
用两个函数来实现
求1到某个数字之间（包括该数字）所以的素数，并将其输出
  与如何设计函数4 相比
  代码量更少   可用性更高
*/ 
