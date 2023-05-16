/*
 * C Program to Implement a Queue using an Array
 */
#include <stdio.h>
#include<stdlib.h>
 
#define MAX 4
 
void insert(); //enqueue operation of queue
void del();  // deque operation of queue
void display();  //traversal

int queue[MAX];

int rear = - 1;
int front = - 1;


int main()
{
    int choice;
    while(1)
    {
        printf("\n\n1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Exit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            del();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
        } 
    } 
} 
 
void insert()
{
    int val;
    //MAX 5 // 0 1 2 3 4
    
    
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    
    else
    {
        //if queue is empty -- insertion of first element
        if (front == - 1){
        front = 0;}
        
        printf("Insert the element in queue : ");
        scanf("%d", &val);
        rear = rear + 1; //0 1 2 3 4 
        queue[rear] = val; 
    }
}  


void del()
{
    if (front == - 1 || front > rear) 
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue[front]);
        front = front + 1;
    }
} 



void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
} 
