//1st non repeating char ko print krwana h
//ex.  ababde
// too a and b print ni hoga output d hoga

#include<stdio.h>
#include<string.h>
int main(){
    char str[]="ababde";
    int freq[256]= {0};
    int ln= strlen(str);

    for(int i=0;i<ln; i++){
        freq[str[i]]++;
    }
    for(int i=0; i<256; i++){
        if(freq[i]==1){
            printf("%c", i);
            break;
        }
    }
 }

 //complete...