#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a,i,k,j,c1,c2,r1,r2,nc,nr;
	int m1[10][10],m2[10][10],m3[10][10];
	
	while(1)
	{
		printf("\n\n----Menu----");
		printf("\n 1. Transpose of Matrix:-\n");
		printf("\n 2. Addition of Matrix:-\n");
		printf("\n 3. Multiplication of Matrix:-\n");
		printf("\n 4. Exit\n");
		printf("\n------------");
		printf("\n Enter your choice:-");
		scanf("%d",&a);
		
		switch(a)
		{
			
		case 1 :
			printf("\n Enter the number of row and coloum:-");
			scanf("%d%d",&r1,&c1);
			nr=c1;
			nc=r1;
			printf("\n Enter the element :-");
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
				{
					scanf("%d",&m1[i][j]);
					m2[j][i]=m1[i][j];
				}
			}
			
			printf("\n Display Matrix:-\n");
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
					printf("\t%d",m1[i][j]);
				printf("\n");
			}
			/*Displaying transpose of matrix*/
			printf("\n Transpose of Matrix is:-\n");
			for(i=0;i<nr;i++)
			{
				for(j=0;j<nc;j++)
					printf("\t%d",m2[i][j]);
				printf("\n");
			}
			break;
			
		case 2:
			printf("\n how many row and coloum in Matrix one:-");
			scanf("%d%d",&r1,&c1);
			printf("\n How amny row and coloum in Matrix two:-");
			scanf("%d%d",&r2,&c2);
			if((r1==r2)&&(c1==c2))
			{
				printf("\n Addition is possible:-");
				printf("\n Input Matrix one:-");
				for(i=0;i<r1;i++)
				{
					for(j=0;j<c1;j++)
					{
						scanf("%d",&m1[i][j]);
					}
				}
				printf("\n Input Matrix two:-");
				for(i=0;i<r2;i++)
				{
					for(j=0;j<c2;j++)
						scanf("%d",&m2[i][j]);
				}
				printf("\n Matrix 1:-\n");
				for(i=0;i<r1;i++)
				{
					for(j=0;j<c1;j++)
						printf("%5d",m1[i][j]);
					printf("\n");
				}
				printf("\n Matrix 2:-\n");
				for(i=0;i<r2;i++)
				{
					for(j=0;j<c2;j++)
						printf("%5d",m2[i][j]);
					printf("\n");
				}
				/* Addition of Matrix*/
				for(i=0;i<r1;i++)
				{
					for(j=0;j<c1;j++)
						m3[i][j]=m1[i][j]+ m2[i][j];
				}
				printf("\n The sum is:-\n");
				for(i=0;i<r1;i++)
				{
					for(j=0;j<c1;j++)
						printf("%5d",m3[i][j]);
					printf("\n");
				}
			}
			else
				printf("\n Addition is not possible:-");
			break;
			
		case 3:	
			printf("\n Enter number of row and coloum in matrix one:-");
			scanf("%d%d",&r1,&c1);
			printf("\n Enter number of row and coloum in matrix two:-");
			scanf("%d%d",&r2,&c2);
			if(c1==r2)
			{
				printf("\n Multiplication is possible:-");
				printf("\n Input value of Matrix one:-");
				for(i=0;i<r1;i++)
				{
					for(j=0;j<c1;j++)
						scanf("%d",&m1[i][j]);
				}
				printf("\n Input value of Matrix two:-");
				for(i=0;i<r2;i++)
				{
					for(j=0;j<c2;j++)
						scanf("%d",&m2[i][j]);
				}
				for(i=0;i<r1;i++)
					for(j=0;j<c2;j++)
					{
						m3[i][j]=0;
						for(k=0;k<c1;k++)
							m3[i][j]=m3[i][j]+m1[i][k]*m2[k][j];
					}
				printf("\n Matrix 1:-\n");
				for(i=0;i<r1;i++)
				{
					for(j=0;j<c1;j++)
						printf("%5d",m1[i][j]);
					printf("\n");
				}
				printf("\n Matrix 2:-\n");
				for(i=0;i<r2;i++)
				{
					for(j=0;j<c2;j++)
						printf("%5d",m2[i][j]);
					printf("\n");
				}
				/*Displaying final matrix*/
				printf("\n Multiplication of Matrix:-\n");
				for(i=0;i<r1;i++)
				{
					for(j=0;j<c2;j++)
						printf("\t%d",m3[i][j]);
					printf("\n");
				}
			}
			else
				printf("\n Multiplication is not possible");
			break;
			
		case 4:
			exit(0);
			break;
		}
		
	}
}




/*

----Menu----
 1. Transpose of Matrix:-

 2. Addition of Matrix:-

 3. Multiplication of Matrix:-

 4. Exit

------------
 Enter your choice:-1

 Enter the number of row and coloum:-2
2

 Enter the element :-10
20
30
40

 Display Matrix:-
        10      20
        30      40

 Transpose of Matrix is:-
        10      30
        20      40


----Menu----
 1. Transpose of Matrix:-

 2. Addition of Matrix:-

 3. Multiplication of Matrix:-

 4. Exit

------------
 Enter your choice:-2

 how many row and coloum in Matrix one:-2
2

 How amny row and coloum in Matrix two:-2
2

 Addition is possible:-
 Input Matrix one:-1 
2
3
4

 Input Matrix two:-1
2
3
4

 Matrix 1:-
    1    2
    3    4

 Matrix 2:-
    1    2
    3    4

 The sum is:-
    2    4
    6    8


----Menu----
 1. Transpose of Matrix:-

 2. Addition of Matrix:-

 3. Multiplication of Matrix:-

 4. Exit

------------
 Enter your choice:-3

 Enter number of row and coloum in matrix one:-1
2

 Enter number of row and coloum in matrix two:-2
1

 Multiplication is possible:-
 Input value of Matrix one:-10
20

 Input value of Matrix two:-10
20

 Matrix 1:-
   10   20

 Matrix 2:-
   10
   20

 Multiplication of Matrix:-
        500


----Menu----
 1. Transpose of Matrix:-

 2. Addition of Matrix:-

 3. Multiplication of Matrix:-

 4. Exit

------------
 Enter your choice:-4
 */

