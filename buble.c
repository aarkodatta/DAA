#include<stdio.h>
 int main()
 {  int a[5],i,j,temp,k;
    for(i=0;i<5;i++)
     {
     	printf("enter %d number",i+1);
     	scanf("%d",&a[i]);
	 } 
	 for(i=0;i<4;i++)
	  {
	  	for(j=i;j<4;j++)
	  	{
	  	  if(a[j]>a[j+1])	
	  	    {
	  	  	  k=a[j];
	  	  	  a[j]=a[j+1];
	  	  	  a[j+1]=k;
			}
		}
	  }
	   for(i=0;i<5;i++)
     {
     	printf("\n %d  ",a[i]);
	 } 
	  
 	return 0;
 }
