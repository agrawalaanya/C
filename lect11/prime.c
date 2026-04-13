#include<stdio.h>

int prime()          
{
    int n;
    int prime;
    printf("Enter the no.= ");
    scanf("%d",&n);
    if(prime%1==0 && prime%n==0)
    {
        printf("prime");
    } else
    {
      printf("not prime");
    }
}
int main()
{
   prime();           
}
