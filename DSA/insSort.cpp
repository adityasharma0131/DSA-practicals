#include <stdio.h>

int main()
{
    int a[5],i,j,key;
    
    printf("Enter the values of array : \n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
        
    for(i=1;i<5;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && key<=a[j])
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    printf("After Insertion Sort the sorted array is : \n");
    for(i=0;i<5;i++)
        printf("%d\t",a[i]);
    
}
