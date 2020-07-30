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
/*结果： 
person
person
person
person
*/ 
/*问题： 
 	for(i=0; i<=3; ++i)
	  {
	    for(j=0; j<=1; ++j)
		printf("person\n"); 
		  break; 
	  }	
	   ------------------------ 
	    结果 
	    person
        person

		  
		  */
