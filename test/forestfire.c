#include <stdio.h>
#include <stdlib.h>

#define SIZE 20
#define ITER 20

void main(){
    int forest[SIZE];
    float growthprob = 0.1, fireprob = 0.1;
    // setting initial forest
    int i, j, iter;
    for(i=0; i<SIZE; i++){
        int sample = rand();
        if(sample%100 <= growthprob*100){
            forest[i] = 1;
        }
        else{
            forest[i] = 0;
        }
        printf("%s", forest[i] ? "*" : " ");
    }
    printf("\n");

    for(iter=0; iter<ITER; iter++){
        // destroying trees
        for(i=0; i<ITER; i++){
            int sample = rand();
            if(sample%100 <= fireprob*100 && forest[i]){
                printf("^");
                forest[i] = 0;
                // left side
                for(j=i-1; j>=0; j--){
                    if(forest[j]){
                        forest[j] = 0;
                    }
                    else break;
                }
                //right side
                for(j=i+1; j<SIZE; j++){
                    if(forest[j]){
                        forest[j] = 0;
                    }
                    else break;
                }
            }
            else printf(" ");
        }
        printf("\n");
         for(i=0; i<SIZE; i++){
            printf(forest[i] ? "*" : " ");
        }
        printf("\n");
        // growing trees
        for(i=0; i<SIZE; i++){
            int sample = rand();
            if(sample%100 <= growthprob*100 && !(forest[i])){
                forest[i] = 1;
                printf("#");
            }           
            else printf(" ");
        }
        printf("\n");
        for(i=0; i<SIZE; i++){
            printf(forest[i] ? "*" : " ");
        }
        printf("\n");
    }
}