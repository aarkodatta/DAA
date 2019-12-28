#include <stdio.h>
#include <stdlib.h>

int main()
	{
	system("clear");
	int i,j,n,r=0;
	
	printf("ENter the number of nodes\n");
	scanf("%d", &n);
	int ar[n][n];
	printf("ENter the adjacency matrix\n");
	for (i=0;i<n;i++)
		{
		for (j=0;j<n;j++)
			{
			printf("Enter 1 if there is any link from %d to %d or ",(i+1),(j+1));
			printf("Enter 0 if there is no link from %d to %d - ",(i+1),(j+1));
			scanf("%d", &ar[i][j]);
			}
		}
	printf("The Given Matrix :-\n");
	printf("\n");
	for (i=0;i<n;i++)
		{
		for (j=0;j<n;j++)
			printf("%d\t", ar[i][j]);
		printf("\n");
		}
	printf("\n");
	while (r<n)
		{
		for (i=0;i<n;i++)
			{
			if (ar[i][r]==1)
				{
				for (j=0;j<n;j++)
					{
					if (ar[r][j]==1)
						ar[i][j]=1;
					else
						continue;
					}
				}
			else
				continue;
			}
		r++;
		}
		
	printf("The Revised Matix is :- \n");
	printf("\n");
	for (i=0;i<n;i++)
		{
		for (j=0;j<n;j++)
			printf("%d\t", ar[i][j]);
		printf("\n");
		}
		
	printf("\n");
	return 0;
	}
