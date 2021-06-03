#include<stdio.h>
#include<stdbool.h>
 
bool candygame(int n);

void main(){
   int n;
   scanf("%d",&n);
   printf(candygame(n)? "true":"false");
}

bool candygame(int n){
   if(n==42){
      return true;
   }
   else if(n<42){
      return false;
   }
   else{
      if(n%2==0){
         int temp = n;
         printf("%d-->", temp);
         temp = temp/2;
         printf("%d\n", temp);
         if(candygame(temp)) return true;
      }
      if(n%4==0 || n%3==0){
         int temp = n;
         printf("%d-->", temp);
         temp = temp - (temp%10)*((temp%100-temp%10)/10);
         printf("%d\n", temp);
         if(candygame(temp)) return true;
      }
      if(n%5==0){
         int temp = n;
         printf("%d-->", temp);
         temp = temp - 42;
         printf("%d\n", temp);
         if(candygame(temp)) return true;
      }
   }
   return false;
}