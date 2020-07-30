# include <stdio.h>
void f(int * pArr,int len)
{
//	pArr[3] = 88;
    *(pArr+3) = 44;
}
int main(void)
{
	int a[5] = {1,2,3,4,5};
	int b[6] = {-1,-2,-3,-4,-5,-6};
	int c[100] = {1,99,33,22,55};
    printf("%d\n", a[3]);
  
    f(a, 5);

    printf("%d\n", a[3]);
   
   return 0;
} 
