# include <stdio.h>

int f(void)   //�����е�void��ʾ�ú������ܽ�������   int��ʾ��������ֵ��int���͵����� 
{
	return 10;   //��������������10 
}
void g(void)     //������ǰ���void��ʾ�ú���û�з���ֵ
{
//	return 10;  //error ������е�����void��ì�� 
}
int main(void)   
{
	int j = 88;
	
	j = f();
	printf("%d\n", j);
	
	return 0;
}
