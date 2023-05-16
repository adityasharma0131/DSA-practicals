#include <stdio.h>

void merge(int [], int, int [], int, int[]);
int main()
{
    int a[100],b[100],n1,n2,i,ms[200];
    printf("Input no of elements in first array : ");
    scanf("%d",&n1);
    printf("Input %d sorted integers\n",n1);
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);

    printf("Input no of elements in second array : ");
    scanf("%d",&n2);
    printf("Input %d sorted integers\n",n2);
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
        
    merge(a,n1,b,n2,ms);
    printf("After merge sort array is : \n");
    for(i=0;i<n1+n2;i++)
        printf("%d\t",ms[i]);
    return 0;
}

void merge(int a[],int n1,int b[],int n2,int ms[])
{
    int i,j,k;
    i=0; //Index of ms
    j=0; //Index of a
    k=0; //Index of b
    for(i=0;i<n1+n2;)
    {
        if(j<n1 && k<n2)
        {
            if(a[j]<b[k])
            {
                ms[i]=a[j];
                j++;
            }
            else
            {
                ms[i]=b[k];
                k++;
            }
            i++;
        }
        else if(j==n1)
        {
            for(;i<n1+n2;)
            {
                ms[i]=b[k];
                k++;
                i++;
            }
        }
        else
        {
            for(;i<n1+n2;)
            {
                ms[i]=a[j];
                j++;
                i++;
            }
        }
    }
}
