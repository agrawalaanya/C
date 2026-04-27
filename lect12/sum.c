#include<stdio.h>
int main()
{
    int arr[5]={1,2,3};
    int sum=0;
    for(int i=0;i<3;i++){
    sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}