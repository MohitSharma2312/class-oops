#include <string.h>   
 
void replacechar(char *s,char c1,char c2)
{
	int i=0;
  
     	
   for(i=0;s[i];i++)
	{  
		if(s[i]==c1)
		{
		   s[i]=c2;
	 
	    }
 
	}
	   
  
}
 
 
int main()
{
 
    char s[1000],c1,c2;  
  
    printf("Enter  the string : ");

    
	printf("Enter a character replace: ");
    c1=getchar();
    getchar();
    printf("\nEnter character to replace  with  %c : ",c1);
    c2=getchar();
    printf("\n before replace:%s",s);
    replacechar(s,c1,c2);
    
	   
    printf("\nafter replace:%s",s);
 	 
     
    return 0;
 
     
     
}