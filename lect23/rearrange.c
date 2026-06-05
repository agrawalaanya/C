//array ko rearrange krna h
//{0,-2,3,0,1,3}===>{0,0,-2,1,3,3}

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter size: ");
    scanf("%d",&n);

    int *arr = (int *)malloc(n * sizeof(int));   //sizeof int= 4   if n=3 then 12
    printf(" Enter %d element: \n",n);
    for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0 ){
            printf("%d",arr[i]);
            arr[j]=arr[i];
            j++;
        }
    }
        for(int i=0;i<n;i++){
        if(arr[i]<0 ){
            printf("%d",arr[i]);
            arr[j]=arr[i];
            j++;
        }
    }
       for(int i=0;i<n;i++){
         if(arr[i]>0 ){
             printf("%d",arr[i]);
             arr[j]=arr[i];
             j++;
         }
     }

}