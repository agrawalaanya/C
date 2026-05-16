#include<stdio.h>
int main(){
    int arr[4]={1,2,3,4};
    int *p=arr;
    for(int i=0;i<4;i++){
         printf("%d\t",*(p+i));
    }
    for(int i=3;i>=0;i--)
    {
          printf("\t%d",*(p+i));
     }
}

