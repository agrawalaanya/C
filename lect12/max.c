#include<stdio.h>
int main()
{
  int i;
  int arr[5]={1,2,3,4,5};
  int max=arr[0];
      for(i=0;i<4;i++)
    {
   
       //  for(i=0;i<5;i++)
       if(arr[i]>max)
       {
        // printf("%d",max);
        max=arr[i];
       }
    }
     printf("%d",arr[i]);
    
       return 0;

}