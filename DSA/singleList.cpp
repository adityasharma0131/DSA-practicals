#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//Function Prototype
void insert_beg();
void insert_end();
void search();
void display();
//Structure of a single linked list node 
struct node
{
    int data;
    struct node *next;
}*start=NULL,*q,*t;//Global pointers

int main()
{
    int ch;
    
    while(1)
    {
        printf("\n\n===Menu===");
        printf("\n1.Insert\n2.Search\n3.Display\n4.Exit");
        printf("\n\nEnter your choice : ");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1:
                printf("\n\n===Insert Menu===");
                printf("\n1.Insert at begin\n2.Insert at end\n3.Exit");
                printf("\n\nEnter your choice : ");
                scanf("%d",&ch);
                switch(ch)
                {
                    case 1:
                        insert_beg();
                        break;
                    
                    case 2:
                        insert_end();
                        break;
                        
                    case 3:
                        exit(0);
                    
                    default:
                        printf("Wrong choice");
                        
                }
                break;
                
            case 2:
                search();
                break;
            
			case 3:
				display();
				break;
			    
            case 4:
                exit(0);
                
            default:
                printf("Wrong choice");
        }
    }
    
    return 0;
}
//Insertion at beginning
void insert_beg()
{
    int num;
    printf("Enter data : ");
    scanf("%d",&num);
    t=(struct node*)malloc(sizeof(struct node));
    t->data=num;
    if(start==NULL)
    {
       t->next=NULL;
       start=t;
    }
    else
    {
        t->next=start;
        start=t;
    }
}
//Insertion at end
void insert_end()
{
    int num;
    printf("Enter data : ");
    scanf("%d",&num);
    t=(struct node*)malloc(sizeof(struct node));
    t->data=num;
    t->next=NULL;
    if(start==NULL)
       start=t;
    else
    {
        q=start;
        while(q->next!=NULL)
            q=q->next;
        q->next=t;
    }
}
//Sequential search in linked list
void search()
{
	if(start==NULL)
		printf("List is empty ..Can't Seacrh");
	else
	{
		int n,flag=0,count=0;
		printf("Enter data value to be searched : ");
		scanf("%d",&n);

		q=start;
		while(q!=NULL)
		{
		    count++;
			if(q->data == n)
			{
				printf("Value Found at %d",count);
				flag=1;
				break;
			}
			q=q->next;
		}
		if(flag==0)
			printf("Value Not Found");
	}
}
//Displaying linked list
void display()
{
    if(start==NULL)
        printf("Linked List is empty.");
    else
    {
        q=start;
        printf("The linked list is : \nBEGIN -> ");
        while(q!=NULL)
        {
            printf("%d | %p -> ",q->data,q->next);
            q=q->next;
        }
        printf("NULL(END)");
    }
}
