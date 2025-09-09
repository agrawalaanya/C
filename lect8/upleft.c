#include<stdio.h>
int main()
{
    int i;
    int j;
    for(i=0;i<3;i++){
        for(j=3;j>i;j--)
        {
            printf("*");

        }
        printf("\n");
    }
    return 0;
} 