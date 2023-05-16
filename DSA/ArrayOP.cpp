#include<stdio.h>
#include<stdlib.h>
int a[20],b[20],c[40];
int m,n,p,val,i,j,key,pos,temp;

//Function Prototype
void create();
void display();
void insert();
void del();
void search();
void merge();
void sort();

int main()
{
	int choice;
	do
	{
    	printf("\n\n--------Menu-----------\n");
        printf("1.Create\n");
		printf("2.Display\n");
		printf("3.Insert\n");
		printf("4.Delete\n");
		printf("5.Search\n");
        printf("6.Sort\n");
        printf("7.Merge\n");
        printf("8.Exit\n");
        printf("---------------------------");
        printf("\nEnter your choice:\t");
        scanf("%d",&choice);
    	switch(choice)
        {
            case 1:         
				create();
                break;
            case 2:
                display();
                break;
            case 3:
                insert();
                break;
            case 4:
                del();
                break;
            case 5:
                search();
                break;
            case 6:
                sort();
                break;
            case 7:
                merge();
                break;
            case 8:
                exit(0);
            default:
                printf("\nInvalid choice:\n");
                break;
        }
    }while(choice!=8);
return 0;
}

void create() //creating an array
{
    printf("\nEnter the size of the array elements:\t");
    scanf("%d",&n);
    printf("\nEnter the elements for the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}//end of create()

void display()  //displaying an array elements
{
    int i;
    printf("\nThe array elements are:\n");
    for(i=0;i<n;i++)
	{
        printf("%d\t",a[i]);         
    }
 }//end of display() 

void insert()   //inserting an element in to an array  
{         
    printf("\nEnter the position for the new element:\t");         
    scanf("%d",&pos);         
    printf("\nEnter the element to be inserted :\t");         
    scanf("%d",&val);         
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=val;
    n=n+1;
}//end of insert()
  
void del()      //deleting an array element
{
    printf("\nEnter the position of the element to be deleted:\t");
    scanf("%d",&pos);
    val=a[pos];
    for(i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    printf("\nThe deleted element is =%d",val);
}//end of delete()

void search()   //searching an array element
{
    printf("\nEnter the element to be searched:\t");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("\nThe element is present at position %d",i);
            break;
        }
    }
    if(i==n)
    {
        printf("\nThe search is unsuccessful");
    }
}//end of search()

void sort()     //sorting the array elements
{
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)                 
        {                        
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nAfter sorting the array elements are:\n");
    display();
}//end of sort

void merge()    //merging two arrays
{
    printf("\nEnter the size of the second array:\t");
    scanf("%d",&m);
    printf("\nEnter the elements for the second array:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0,j=0;i<n;i++,j++)
    {
        c[j]=a[i];
    }
    for(i=0;i<m;i++,j++)
    {
        c[j]=b[i];
    }
    p=n+m;
    printf("\nArray elements after merging:\n");
    for(i=0;i<p;i++)
    {
        printf("%d\t",c[i]);
    }
}//end of merge()

/*

--------Menu-----------
1.Create
2.Display
3.Insert
4.Delete
5.Search
6.Sort
7.Merge
8.Exit
---------------------------
Enter your choice:      1

Enter the size of the array elements:   5

Enter the elements for the array:
50
20
40
30
10


--------Menu-----------
1.Create
2.Display
3.Insert
4.Delete
5.Search
6.Sort
7.Merge
8.Exit
---------------------------
Enter your choice:      2

The array elements are:
50      20      40      30      10

--------Menu-----------
1.Create
2.Display
3.Insert
4.Delete
5.Search
6.Sort
7.Merge
8.Exit
---------------------------
Enter your choice:      3

Enter the position for the new element: 5

Enter the element to be inserted :      23


--------Menu-----------
1.Create
2.Display
3.Insert
4.Delete
5.Search
6.Sort
7.Merge
8.Exit
---------------------------
Enter your choice:      2

The array elements are:
50      20      40      30      10      23

--------Menu-----------
1.Create
2.Display
3.Insert
4.Delete
5.Search
6.Sort
7.Merge
8.Exit
---------------------------
Enter your choice:      4

Enter the position of the element to be deleted:        5

The deleted element is =23

--------Menu-----------
1.Create
2.Display
3.Insert
4.Delete
5.Search
6.Sort
7.Merge
8.Exit
---------------------------
Enter your choice:      2

The array elements are:
50      20      40      30      10

--------Menu-----------
1.Create
2.Display
3.Insert
4.Delete
5.Search
6.Sort
7.Merge
8.Exit
---------------------------
Enter your choice:      5

Enter the element to be searched:       40

The element is present at position 2

--------Menu-----------
1.Create
2.Display
3.Insert
4.Delete
5.Search
6.Sort
7.Merge
8.Exit
---------------------------
Enter your choice:      6

After sorting the array elements are:

The array elements are:
10      20      30      40      50

--------Menu-----------
1.Create
2.Display
3.Insert
Enter the elements for the second array:
15
12
14
11
13

Array elements after merging:
10      20      30      40      50      15      12      14      11      13

--------Menu-----------
1.Create
2.Display
3.Insert
4.Delete
5.Search
6.Sort
7.Merge
8.Exit
---------------------------
Enter your choice:      8
PS C:\Users\adity\OneDrive\Desktop\Work\DSA>

*/