# include <stdio.h>

void f(void)
{
	int i;
	
	for (i=0; i<5; ++i)
	{
		printf("��������ˣ�\n");
	//	break;    //��ֹѭ�� 
		return;    // ��ֹ���� 
	}
	printf("ͬ־�Ǻã�\n");
} 

int main(void)
{
	f();
  return 0; 
}
