# include <stdio.h>

int main(void)
{
  int x=1, y=0, a=0, b=0;
  
  switch(1)	
  {
  	case 1: 
  	    switch(0)
  	    {
  	    	case 0:
  	    	    a++;
			    break; 
			case 1:
			   b++;
			   break; 
  	    }
  	    b = 100;
  	    break;
  	case 2: 
       a++;
       b++;
       break;
  }
  
  printf("a = %d, b = %d\n", a, b);
  
  return 0;
} 
