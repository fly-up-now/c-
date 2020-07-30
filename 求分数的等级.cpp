# include <stdio.h>

int main(void)
{
	float score; //score 表示分数 
	
	printf("请输入你的分数");
	scanf("%f", &score);
	
/*	if(score < 60)
	printf("不及格\n");
	else if(score < 80)
	printf("及格\n");
	else if(score < 90)
	printf("良好\n");
	else
	printf("优秀\n"); 
*/
    if (score > 100)
	printf("这是做梦\n");
	else if(score >= 90 && score <= 100)
	printf("优秀！！\n");
	else if(score >= 80 && score < 90)
	printf("良好！\n");
    else if(score >= 60 && score < 80) 
	printf("及格\n"); 	
	else
	printf("不及格！继续努力！\n"); 
	
	return  0;
}
