# include <stdio.h>

int main(void) 
{
	int i, j;
	
	for(i=0; i<=3; ++i)
	  {
	    for(j=0; j<=1; ++j) 
		  break; 
		  printf("person\n");
	  }	
	return 0;
}
/*����� 
person
person
person
person
*/ 
/*���⣺ 
 	for(i=0; i<=3; ++i)
	  {
	    for(j=0; j<=1; ++j)
		printf("person\n"); 
		  break; 
	  }	
	   ------------------------ 
	    ��� 
	    person
        person

		  
		  */
