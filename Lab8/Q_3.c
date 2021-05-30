#include<stdio.h>


#define MAX 1000

char toLowercase(char str[]);

void main(){
   char str[MAX], copystr[MAX];
   scanf("%[^\n]s", str);
   toLowercase(str);
   printf("%s\n", str);
}

char toLowercase(char str[]){
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i] = str[i] + ('a'-'A');
        }
        
    }  
}