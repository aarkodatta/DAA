#include<stdio.h>
void main()
{
int m,n,p,q,r1,c1,r2,c2;
int first[25][25],second[25][25],multi[25][25];
printf("Enter the number of row and collum of first matrix:");
scanf("%d%d",&r1,&c1);
printf("\nEnter the number of row and collum of second matrix:");
scanf("%d%d",&r2,&c2);
if(r1 == c2)
{
printf("\n Enter the first matrix element:");
for(m=0;m<r1;m++)
{
for(n=0;n<c1;n++)
scanf("%d%d",first[m][n]);
}
printf("\n Enter the second matrix element:");
for(m=0;m<r2;m++)
{
for(n=0;n<c2;n++)
scanf("%d%d",second[m][n]);
}
printf("\n matrix multiplication is:");
for(m=0;m<r1;m++)
{
	for(n=0;n<c2;n++)
	{
		multi[m][n]=0;
		for(p=0;p<r1;p++)
		{
			multi[m][n]=multi[m][n]+first[m][p]*second[p][n];
			printf("%d",multi[m][n]);
		}
		printf("\n");
	}
}
}
else
{
  printf("Multiplication is not possiable.");		
}
}
