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
		//�ж�i�Ƿ�������������������ǲ����
		if ( IsPrime(i) )
		    printf("%d\n", i); 
	}
	
	return 0;
}
/*
     ��1��ĳ������֮�䣨���������֣����Ե����������������
     ��һ���������ж�һ�������Ƿ�������
	 �ŵ㣺����Ŀɶ���   ���������ƺ���3 ��������⣩ 
	 ȱ�㣺 ����������Ȼ���Ǻܸ�
	  ������1000�������������������ִ�1������������� 
*/ 
 
 
