# include <stdio.h>

int main(void)
{
	float score; //score ��ʾ���� 
	
	printf("��������ķ���");
	scanf("%f", &score);
	
/*	if(score < 60)
	printf("������\n");
	else if(score < 80)
	printf("����\n");
	else if(score < 90)
	printf("����\n");
	else
	printf("����\n"); 
*/
    if (score > 100)
	printf("��������\n");
	else if(score >= 90 && score <= 100)
	printf("���㣡��\n");
	else if(score >= 80 && score < 90)
	printf("���ã�\n");
    else if(score >= 60 && score < 80) 
	printf("����\n"); 	
	else
	printf("�����񣡼���Ŭ����\n"); 
	
	return  0;
}
