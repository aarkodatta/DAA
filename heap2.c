#include<stdio.h>
//#include<conio.h>
//#define MAX_SIZE 10
void heap_sort();
void heap_adjust(int, int);
int arr_sort[20], t, a;
int main() 
{
  int i,n1,n;
  printf("\n Enter the no of elements:");
  scanf("%d",&n1);
  printf("\nEnter the elements for sorting\n");
  for (i = 0; i < n1; i++)
    scanf("%d", &arr_sort[i]);
  printf("\n Input  Data   :");
  for (i = 0; i < n1; i++) 
    printf("\t%d", arr_sort[i]);
  heap_sort();
  printf("\nSorted Data :");
  for (i = 0; i < n1; i++) 
    printf("\t%d", arr_sort[i]);
  //getch();
}
void heap_sort(int n,int i) 
{
  int n1;
  for (i = n1 / 2 - 1; i >= 0; i--)
    heap_adjust(n, i);

  for (i = n1 - 1; i >= 0; i--) 
  {
    //Swapping Values 
    t = arr_sort[0];
    arr_sort[0] = arr_sort[i];
    arr_sort[i] = t;
    heap_adjust(i, 0);

    printf("\nHeap Sort Iteration %d : ", i);
    for (a = 0; a < n1; a++)
      printf("\t%d", arr_sort[a]);
  }
}

void heap_adjust(int n, int i) 
{
  int large = i, left = 2 * i + 1, right = 2 * i + 2;
  // adjest left child
  if (left < n && arr_sort[left] > arr_sort[large])
    large = left;
  // adjest right child
  if (right < n && arr_sort[right] > arr_sort[large])
    large = right;
  if (large != i) 
  {
    //Swapping Values 
    t = arr_sort[i];
    arr_sort[i] = arr_sort[large];
    arr_sort[large] = t;
    heap_adjust(n, large);
  }
}
