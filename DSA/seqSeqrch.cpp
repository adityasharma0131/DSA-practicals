#include <stdio.h>

int main()
{
    int a[20],i,x,n;
    printf("Input no of elements in array : ");
    scanf("%d",&n);
    printf("Input %d array elements\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printf("Input element to be searched : ");
    scanf("%d",&x);
        
    for(i=0;i<n;i++)
        if(a[i]==x)
            break;
    //This condition will become true if element is found before array is over
    if(i<n)
        printf("Element found at index value %d",i);
    //This will execute when the whole array was accessed but the search value was not found
    else
        printf("Element not found");
        
    return 0;
}
