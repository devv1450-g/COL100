#include<stdio.h>

char toLowercase(char s1[]){
   for(int i=0; s1[i]!='\0'; i++){
      if(s1[i]>'A' && s1[i]<'Z'){
         s1[i] = s1[i] + ('a' - 'A');
      } 
   }
}

void main(){
   char str[111] = "HELLO";
   toLowercase(str);
   printf("%s", str);
}