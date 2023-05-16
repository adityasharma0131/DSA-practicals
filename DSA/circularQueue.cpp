#include <stdio.h>
#define size 5

void insrt();
void del();
void display();

int front= -1;
int rear= -1;
int queue[size];

int main()
{
    int ch;
    do
    {
        printf("\n\n---Circular Queue Menu---");
        printf("\n1.Insert\n2.Delete\n3.Display\n0.Exit");
        printf("\n-----------");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                insrt();
                break;
            case 2:
                del();
                break;
            case 3:
                display();
                break;
        }
    }while(ch!=0);
    return 0;
}

void insrt()
{
    int n;
    if ((front==0 && rear==size-1)||(front==rear+1))
    {
        printf("Queue overflow");
        return;
    }
    else if (rear==-1)
    {
        rear++;
        front++;
    }
    else if (rear==size-1&&front>0)
        rear=0;
    else
        rear++;
    printf("\n\nEnter a number : ");
    scanf("%d",&n);
    queue[rear]=n;
}

void del()
{
    if (front==-1)
        printf("Queue underflow");
    else if (front==rear)//One element
    {
        printf("\n %d deleted",queue[front]);
        front= -1;
        rear= -1;
    }
    else
    {
       printf("\n %d deleted",queue[front]);
       front++;
    }
}

void display()
{
    int i;
    printf("\nCircular Queue is\n");
    if (front>rear)
    {
        for(i=front;i<size;i++)
            printf("%d\t",queue[i]);
        for(i=0;i<=rear;i++)
            printf("%d\t",queue[i]);
    }
    else
    {
        for(i=front;i<=rear;i++)
            printf("%d\t",queue[i]);
    }
}
