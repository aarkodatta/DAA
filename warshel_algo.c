#include<stdio.h>
int main()
{
  int i=1,j,k,v,e,m,n,p[20][20]= {0},r,w;
  printf("\n Enter the number of vertices:");
  scanf("%d",&v);
  printf("\n Enter the number of edges: ");
  scanf("%d",&e);
  for (i=1;i<=e;i++) 
    	{
    		printf("\n Enter the end vertices of edge %d: with its weight",i);
    		scanf("%d%d%d",&m,&n,&w);
    		p[m][n]=w;
    	}
printf("\n Matrix of input data: \n");
    	for (i=1;i<=v;i++) 
    	{
    		for (j=1;j<=v;j++)
    		   printf("%d\t",p[i][j]);
    		printf("\n");
    	}
       while (r<n)
		{
		for (i=1;i<=v;i++)
			{
			if (p[i][r]==1)
				{
				for (j=1;j<=v;j++)
					{
					if (p[r][j]==1)
						p[i][j]=1;
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
	for (i=1;i<=v;i++)
		{
		for (j=1;j<=v;j++)
			printf("%d\t", p[i][j]);
		printf("\n");
		}
		
	printf("\n");
	return 0;
	}
