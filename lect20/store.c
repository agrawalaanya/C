// #include<stdio.h>
// int main(){
//     char name[]= "Aanya Agrawal";
//     int i=0;
//     while(name[i]!='\0'){
//         printf("%c",name[i]);
//         i++;
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    char name[]= "Aanya Agrawal";
   // int i=0;
    for(int i=0; name[i]!='\0'; i++){
        printf("%c",name[i]);
    }
    return 0;
}


//reverse bhi krwana hh