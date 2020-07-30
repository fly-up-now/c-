# include <stdio.h>

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

int main(void)
{
	int val;
	int i;
	
	scanf("%d", &val);
	for (i=2; i<=val; ++i)
	{
		//判断i是否是素数，是输出，不是不输出
		if ( IsPrime(i) )
		    printf("%d\n", i); 
	}
	
	return 0;
}
/*
     求1到某个数字之间（包括该数字）所以的素数，并将其输出
     用一个函数来判断一个数字是否是素数
	 优点：代码的可读性   （比如何设计函数3 更容易理解） 
	 缺点： 可重用性仍然不是很高
	  比如求1000给数字求他们美国数字从1到它本身的素数 
*/ 
 
 
