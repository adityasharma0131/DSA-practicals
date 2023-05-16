#include <stdio.h>

int main()
{
    int a[5],i,j,position,swap;
    
    printf("Enter the values of array : \n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
        
    for(i=0;i<4;i++)
    {
        position=i;
        for(j=i+1;j<5;j++)
        {
            if(a[position]>a[j])
                position=j;
        }
        if(position!=i)
        {
            swap=a[i];
            a[i]=a[position];
            a[position]=swap;
        }
    }
    printf("After Selection Sort the sorted array is : \n");
    for(i=0;i<5;i++)
        printf("%d\t",a[i]);
    
}
