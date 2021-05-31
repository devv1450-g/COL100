#include<stdio.h>
#include<string.h>
#define MAX 100

void possiblePal(char str[]);

void main(){
   char str[MAX];
   scanf("%s",&str);
   possiblePal(str);
}

void possiblePal(char str[]){
   int len = strlen(str);  
   if(len%2==0){
      int ct = 0;
      for(int i=0; i<len; i++){
         ct = 1;
         for(int j=0; j<len; j++){
            if(str[i]==str[j] && i!=j){
               ct++;
            }
         }
         if(ct%2!=0){
            printf("NO\n");
            return;
         }
         printf("YES\n");
         return;
      }
   }
   else{
      int count[len];
      for(int i=0; i<len; i++){
         count[i] = 1;
         for(int j=0; j<len; j++){
            if(str[i]==str[j] && i!=j){
               count[i]++;
            }
         }
      }
      int ct_even = 0, ct_odd = 0;
      for(int i=0; i<len; i++){
         if(count[i]%2==0){
            ct_even++;
         }
         else ct_odd++;
      }
      if(ct_even==len-1 && ct_odd==1){
         printf("YES\n");
         return;
      }
      printf("NO\n");
      return;
   }
}