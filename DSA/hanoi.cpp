#include<stdio.h>

void toh(int,char,char,char);

int main()
{
    int n;
    printf("\nEnter Number of Disk:");
    scanf("%d",&n);
    toh(n,'A','B','C');
    return 0;
}

void toh(int n,char src,char dest,char aux)
{
    if(n>=1)
    {
        toh(n-1,src,aux,dest);
        printf("%c %c",src,dest);
        toh(n-1,aux,dest,src);
    }
}
