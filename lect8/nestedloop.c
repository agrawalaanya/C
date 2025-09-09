#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<3;i++){             //outer loop
        for(j=0;j<3;j++){          //inner loop
            printf("*");
        }
       printf("\n");               //new line outerloop
    }
    return 0;
}