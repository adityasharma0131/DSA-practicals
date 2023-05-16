#include <stdio.h>

int tsize;

int hasht(int key)
{
    int i;
    i=key%tsize;
    return i;
}

//Quadratic Probing
int rehashquadratic(int key,int j)
{
    int i;
    i=(key+(j*j))%tsize;
    return i;
}

int main()
{
    int key,arr[20],hash[20],i,n,j,k;
    printf("Enter the size of hash table : ");
    scanf("%d",&tsize);
    printf("Enter the number of keys : ");
    scanf("%d",&n);
    
    for(i=0;i<tsize;i++)
        hash[i]=-1;
        
    printf("Enter Elements : \n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        
    for(k=0;k<n;k++)
    {
        j=1;
        key=arr[k];
        i=hasht(key);
        while(hash[i]!=-1)
        {
            i=rehashquadratic(i,j);
            j++;
        }
        hash[i]=i;
        printf("Element %d is at position %d.\n",key,hash[i]);
    }
    return 0;
}
