#include<stdio.h>
int main()
{
    char name[]= "aanya";
    char data[6];
    int i;
    for(i=0;name[i]!='\0';i++)
    {
        data[i]=name[i];
    }
    printf("%s",data);
    return 0;
}

//complete