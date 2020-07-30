# include <stdio.h>
 
int main(void)
{
	int * p;//p是变量的名字， int* 表示p变量存放的是int类型变量的地址 
	        // int * p   int * 类型的，存放int 变量地址的类型 
	int i = 3;
	
	  p = &i; /*
	       1. p保存了i的地址，因此p指向i
		   2. p不是i；i也不是p，
			  更准确的说：  
			           修改p的值不影响i的值，修改i的值不影响p的值
	       3.  如果一个指针变量指向了某个普通变量，则
			        *指针变量   就完全等同于   普通变量 
	例子：  如果p是个指针变量， 并且p存放了普通变量i的地址
	          则 p指向了 普通变量i
			  *p  就完全 等同于  i
			  或者说： 在所有出现*p的地方都可以替换成i 
			*/ 
	printf("%d", *p); 
	
	
//	p = i; //error,因为类型不一致，p只能存放int类型变量的地址， 不能存放int类型变量的数据。
//	p = 55; //error, 原因同上 

	/* 
	double类型的例子： 
	double * k;
	double l;
	k = &l; 
	*/ 
	
	return 0;
}
