//Practical 3B - Conversion from infix expression to postfix expression
#include<stdio.h>
#include<ctype.h>

//global declaration of stack and top
char stack[20];
int top = -1;

//push method
void push(char x)
{
    stack[++top] = x;   // top = top+1
                        // stack[top]=x;
}
 
//pop method 
char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];   // stack[top] - returned , top = top - 1
}
 
// priority check fucntion 
int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
}
 
int main()
{
    char exp[20];
    char *e, x;
    printf("Enter the expression :: ");
    scanf("%s",exp);
    
    
    e = exp;
    while(*e != '\0')
    {
        //if alphabets or numbers -- operands will go to output
        if(isalnum(*e))
            printf("%c",*e);
            
            
        // if ( it will push in stack
        else if(*e == '(')
            push(*e);
            
        // if  ) pop all from the stack till )     
        else if(*e == ')')
        {
            while((x = pop()) != '(')
                printf("%c", x);
        }
        
        //check priority and perform either push or pop
        else
        {
            while(priority(stack[top]) >= priority(*e))
                printf("%c",pop());
            push(*e);
        }
        e++;
    }
    
    //once expression is over pop all the remainiing opeartors from stack anf give it to output
    while(top != -1)
    {
        printf("%c",pop());
    }
}
