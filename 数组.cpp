# include <stdio.h>

int main(void)
{
	int a[5] = {1, 2, 3, 4, 5};
	//a是数组的名字， 5表示的是数组元素的个数，
	          //并且这五个元素是a[0] a[1] a[2] a[3] a[4] 
	int i;
	
	for (i=0; i<5; ++i)
	   printf("%d\n", a[i]);
	
	return 0;
} 
