#include<stdio.h>
#include<stdlib.h>
void main()
{
 int i,a[100],flag=0,n,n1,middle,low,high;
 printf(" Enter the number of elements you want to insert:");
 scanf("%d",&n);
 printf("\n Enter the sorted numbers:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 low=0,high=n-1;
 printf("\n Enter the element to be searched:");
 scanf("%d",&n1);
 while(low<=high)
 {
   middle=(low+high)/2;
 if(a[middle]== n1)
 {
 flag=1;
 break;
 }
 else if(a[middle]> n1)
 {
  low = 0;
  high = middle-1;
 }
 else
 {
  low = middle+1;
 }
 }
 if(flag==1)
 {
   printf("\n The element is found the position %dth",middle+1);
 }
 else
 {
  printf("\n The element is not found.");
 } 
}
