# include <stdio.h>


//���ܣ��ж�m�Ƿ������� �� ����true �� ���� ����false 
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


//���ܣ���1��n֮�����Ե���������ʾ������� 
void TraverseVal(int n)
{
    int i;
	
	for (i=2; i<=n; ++i)
	{
		//�ж�i�Ƿ�������������������ǲ����
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
  23��06�� 
������������ʵ��
��1��ĳ������֮�䣨���������֣����Ե����������������
  �������ƺ���4 ���
  ����������   �����Ը���
*/ 
