#include<stdio.h>
int main(){
    int arr[2][2]={{1,2},{1,2}};
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum=sum+arr[i][j];
        }
    }printf("%d\t",arr);
    
}