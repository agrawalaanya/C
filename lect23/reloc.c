//size increase  kr skta h ya decrease kr skta h

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter size: ");
    scanf("%d",&n);

    int *arr = (int *)malloc(n * sizeof(int));   //sizeof int= 4   if n=3 then 12
    printf(" Enter %d element: \n",n);
    for(int i=0;i<n;i++)
    scanf("%d", &arr[i]);

     printf("\nNow Enter new size: \n");
     int newSize;
     scanf("%d",&newSize);

     arr= (int *)realloc(arr, newSize * sizeof(int)); 
     printf(" Enter %d new element: \n",newSize);
     for(int i=0; i<newSize; i++)
     scanf("%d",&arr[i]);
}