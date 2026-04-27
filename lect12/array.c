//similar data store
//non primitive

#include<stdio.h>
int main()
{
    int arr[5]={1,3,6};
    printf("Array:\n");
   for(int i=0;i<3;i++)
   printf("%d",arr[i]);
   
   printf("\nreverse:\n");
   for(int i=2;i>=0;i--)
  printf("%d",arr[i]);
}