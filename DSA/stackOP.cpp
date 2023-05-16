// Practical 3A - Stacks Push Pop Display

#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5


int main()
{
    
    // declaration
    int stk[5];
    int top=0,i,ch;
    int val;
    int p;
    
    do
    {
        printf("\n1.PUSH");
        printf("\n2.POP");
        printf("\n3.DISPLAY");
        printf("\n4.EXIT");
        
        printf("\nEnter Your Choice :");
        scanf("%d",&ch);
        
        //switch case
        
        switch(ch)
        {
            case 1:
            
            if(top==MAXSIZE)
            {
                printf("\nSTACK OVERFLOW");
            }
            else
            {

                printf("\nEnter The Value which has to be pushed in stack : ");
                scanf("%d",&val);
                            
                stk[top]=val;
                top=top+1;
                printf("\nPUSH SUCCESS");
            }
            
            break;
            
            
            case 2:
            if(top==0)
            {
                printf("\nSTACK UNDERFLOW");
                
            }
            else
            {
                
                top=top-1;
                p=stk[top];
                
                printf("\n The value popped is : %d",p);
            }
            break;
            
            case 3:
            printf("\nSTACK DISPLAY\n");
            for(i=0;i<top;i++)
            {
                printf("\t%d",stk[i]);
            }
            break;
            
            default:
            exit(0);
            
            
        }
        
        
    }while(ch!=4);
    
    
    return 0;
}
