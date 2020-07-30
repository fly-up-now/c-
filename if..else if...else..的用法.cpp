# include <stdio.h>
 
int main(void)
{
	double delta = -1;
	
	if (delta > 0)
	   printf("有两个解！\n");
	else if (delta ==0)
	   printf("有一个唯一解！\n");
	else
	   printf("无解！\n"); 
	
	return 0;
}
