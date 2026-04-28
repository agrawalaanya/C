#include<stdio.h>
int main(){
     
    int a[5]={1,2,3,2,1};
  //  printf("enter value: ");
  //  scanf("%d",&a[i]);
  int isTrue=1;
  
  for(int i=0;i<5/2;i++)
  {
    if(a[i]!=a[5-i-1]){
        isTrue=0;
    }
 }
     if(isTrue==1)
     {
      printf("palin...");
     }
     else {
        printf("not");
     }
return 0;

}