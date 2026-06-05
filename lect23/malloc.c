//malloc

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

    free(arr);   //jo space use ni ho rhi h usko ye free kr dega
}


//complete...