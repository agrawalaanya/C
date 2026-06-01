// HELLO
// H->1
// E->1
// L->2
// O->1
#include<stdio.h>
#include<string.h>
int main(){
    char str[]= "hello";
    int freq[256]= {0};
    int ln= strlen(str);

    for(int i=0;i<ln; i++){
        freq[str[i]]++;
    }
    for(int i=0; i<256; i++){
        if(freq[i]>0){
            printf("%c: %d\n", i, freq[i]);
        }
    }
}

//complete...