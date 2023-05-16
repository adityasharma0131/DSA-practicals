#include <stdio.h>
// Basic Req : Array has to entered in sorted way - asc
int main()
{
    int a[20],i,x,n,fir,las,mid;
    printf("Input no of elements in array : ");
    scanf("%d",&n);
    printf("Input %d sorted array elements\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    //Write logic fot sorting your array - bubble , insertion or selection
    printf("Input element to be searched : ");
    scanf("%d",&x);
        
    fir=0;
    las=n-1;
    mid=(fir+las)/2;
    
    while(fir<=las)
    {
        if(a[mid]==x)
        {
            printf("Found at location %d. \n",mid);
            break;
        }
        else if(x>a[mid])
            fir=mid+1;
        else if(x<a[mid])
            las=mid-1;
        mid=(fir+las)/2;
    }
    if(fir>las)
        printf("Element not found");
    
    return 0;
}
