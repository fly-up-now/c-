# include <stdio.h>

int main(void)  
{
	int val, i;
	scanf("%d", &val);
	
    for (i=2; i<val; i++)
	    {
	     if(val % i == 0)
		   printf("��������\n");
		         break;		
	/*	 else
		     printf("������\n");    */
        }
    if (i == val)
	    printf("yes!\n");
	else
	    printf("no!\n"); 
        
	return 0;
}
