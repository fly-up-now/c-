# include <stdio.h>

int main(void)
{
	int i, j;
	
	for (i=0; i<3; ++i)
	    for(j=2; j<5; ++j)
	        printf("������\n");
    printf("������\n");
	
	return 0;
}
/*  
 i  0  
 j  2
 ��
 3
 ��
 4
 ��
 5
 i 1
 3��
 i 2
 3��
 i 3
 ����
 */ 
