#include<stdio.h>
int main()
{
    int n=13;
   // printf("no.: ");
   // scanf("%d",n);
   int isprime=1;
    if(n<=1)
    {
        printf("not prime");
        return 0;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
         { 
            isprime=0;
            break;
         }
       
    }
    if(isprime)
    {
       printf("prime");
    } else
        { 
            printf("not prime");
            
        }
}
  //  return 0;
