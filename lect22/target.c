//ek string banao usme ek target lo. us target ko chodh kr puri string print krwa do!!!

#include<stdio.h>
#include<string.h>
int main(){
    char str[]="hello";
    char target='e';
    int ln= strlen(str);
    char newStr[100];
    int j=0;
     
    for(int i=0; i<ln; i++){
        if(str[i]!=target){
            newStr[j]=str[i];
            j++;
            
            
        }
        
  }
    newStr[j]='\0';
      printf("%s",newStr);
}


//complete...

//