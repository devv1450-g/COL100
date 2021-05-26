#include<stdio.h>

#define MAXVALS 100

int gcd(int A, int B);
int my_atoi(char str[]);
 
int main(int argc, char* argv[]){
   int i, numbers[MAXVALS], current_gcd;
    printf("Number of argument = %d\n", argc);
    for(i=1; i<argc && i<MAXVALS; i++){
        printf("from inside main: address of argv[%d] = %p\n", i, argv[i]);
        //convert string to integer
        numbers[i-1] = my_atoi(argc[i]);

    }
}

int gcd(int A, int B){
    int temp;
    printf("from inside gcd: address of A = %p, address of B = %p\n", &A, &B);
    while(B%A!=0){
        temp = B%A;
        B = A;
        A = temp;
    }
    return A;
}

int my_atoi(char str[]){
    int i
}