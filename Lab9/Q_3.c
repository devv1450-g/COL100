#include<stdio.h>

#define MAX 100

void main(){
   int total_money, no_flav;
   int flav_price[MAX];
   scanf("%d%d",&total_money, &no_flav);
   for(int i=0; i<no_flav; i++){
       scanf("%d", &flav_price[i]);
   }
   // array with all element as -1
   int arr[MAX];
   for(int i=0; i<MAX; i++){
       arr[i] = -1;
   }
   for(int i=0; i<no_flav; i++){
       arr[flav_price[i]] = i;
   }
   for(int i=0; i<no_flav; i++){
       int temp;
       temp = total_money - flav_price[i];
       if(arr[temp] != -1){
           printf("%d %d", i, arr[temp]);
           return;
       }
   }
}