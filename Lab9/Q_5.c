#include<stdio.h>
 
#define MAX 100

int maxProfit(int prices[], int n);

void main(){
   int n;
   scanf("%d", &n);
   int prices[MAX];
   for(int i=0; i<n; i++){
      scanf("%d",&prices[i]);
   }
   printf("%d\n", maxProfit(prices, n));
}


int maxProfit(int prices[], int n){
   int profit[n];
   for(int i=0; i<n; i++){
      profit[i] = 0;
      for(int j=i; j<n; j++){
         if((prices[j]-prices[i]>profit[i]))
            profit[i] = prices[j] - prices[i];
      }
   }
   int max = 0;
   for(int i=0; i<n; i++){
      if(profit[i]>max){
         max = profit[i];
      }
   }
   return max;
}

