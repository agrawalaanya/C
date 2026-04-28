#include<stdio.h>
#include<limits.h>
int main(){
    int a[6]={-1,-12,-3,-4,-3,-6};
    int maxsum=INT_MIN;

    for(int i=0;i<6;i++){
        int currsum=0;
        for(int j=i;j<6;j++){
            currsum=currsum+a[j];
            if(currsum>maxsum){
            maxsum=currsum;
        }
        
        }
    }
    printf("%d",maxsum);
}