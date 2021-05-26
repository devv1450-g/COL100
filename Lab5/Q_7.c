#include <stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int input, temp, large, small;
        scanf("%d ", &input);
        if(input>temp){
            large = input;
            small = temp;
        }
        else {
            large = temp;
        }
        temp = input;
    }
}