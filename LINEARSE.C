#include<stdio.h>
int main()
{

	int array[50], search,c,n;
	printf("Enter the number of elements in array:");
	scanf("%d",&n);
	printf("\nEnter %d integers:",n);
	for(c=0;c<n;c++)
		scanf("%d",&array[c]);
	printf("\nEnter a number to search:");
	scanf("%d",&search);
	for(c=0;c<n;c++)
	{
		if(array[c]==search)
		{
			printf("\n%d is present at location %d.",search,c+1);
			break;
		}
	}
	if(c==n)
	printf("\n%d isnt present in the array.",search);
	
}



