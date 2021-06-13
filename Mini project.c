// program to read  contact and display it

#include <stdio.h>
#include <string.h>

struct contact
{
    char name[30];
    int number; 
};
char a;
int main()
{
    struct contact person[5];
    
    int i,x,n;
  label1: printf("1.Add contact\n2.Display contact\n");
	
	scanf("%d", &x);

  
  if(x==1){ 
    printf("Enter the number of contacts to add:>\n");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the name: ");
        scanf("%s", person[i].name);
            
        printf("Enter the number: ");
        scanf("%d", &person[i].number);
    }
    goto label1;
    }
     else if(x==2){ 
               for (i = 0; i < n; i++)
            {
                       printf("%d.", i+1);
                       printf("%s", person[i].name);
            
                       printf(": ");
                       printf("%d\n", person[i].number);
            }
                      
         
       goto label1;
       }
  else
  	{
		printf("Enter 1 or 2\n");
		goto label1;
	}
  
    
    return 0;
}
