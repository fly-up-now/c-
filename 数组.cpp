# include <stdio.h>

int main(void)
{
	int a[5] = {1, 2, 3, 4, 5};
	//a����������֣� 5��ʾ��������Ԫ�صĸ�����
	          //���������Ԫ����a[0] a[1] a[2] a[3] a[4] 
	int i;
	
	for (i=0; i<5; ++i)
	   printf("%d\n", a[i]);
	
	return 0;
} 
