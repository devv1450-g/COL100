#include<stdio.h>

#define MAX 1000

int isSubstring(char s1[], char s2[]);
char toLowercase(char s1[]);

void main(){
   char s1[MAX], s2[MAX];
   scanf("%s", &s1);
   scanf("%s", &s2);
   toLowercase(s1);
   toLowercase(s2);
   printf("%d\n", isSubstring(s1, s2));
}

char toLowercase(char s1[]){
   for(int i=0; s1[i]!='\0'; i++){
      if(s1[i]>'A' && s1[i]<'Z'){
         s1[i] = s1[i] + ('a' - 'A');
      } 
   }
}

int isSubstring(char s1[], char s2[]){
   for(int i=0; s1[i]!='\0'; i++){
      int check = 0;
      if(s1[i]==s2[0]){
         int temp = i;
         for(int k=1; s2[k]!='\0'; k++){
            if(s1[temp+1]==s2[k]){
               check = 1;
               temp++;               
            }
            else {
               check = 0;
               break;
            }
         }
         if(check){
            return i;
         }
      }
   }
   return -1;
}