#include <stdio.h>

int main()
{
    int i,j,temp;
    int a[5];
    
    printf("\nEnter the values of array : \n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<5;i++)
    {
    	for(j=i+1;j<5;j++)
		{
			if(a[j]<a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
    }
    
    printf("After Bubble Sort the sorted array is : \n");
    for(i=0;i<5;i++)
        printf("%d\t",a[i]);
}
