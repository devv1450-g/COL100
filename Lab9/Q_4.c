#include<stdio.h>
#include<string.h>
#define MAX 100

void possiblePal(char str[]);

void main(){
   int str[MAX];
   scanf("%s",&str);
   possiblePal(str);
}

void possiblePal(char str[]){
   int len = strlen(str);  
   if(len%2==0){
      int ct = 0;
      for(int i=0; i<len; i++){
         ct = 1;
         for(int j=i; j<len; j++){
            if(str[i]==str[j]){
               ct++;
            }
         }
         if(ct%2!=0){
            printf("NO\n");
            return;
         }
      }
   }
}