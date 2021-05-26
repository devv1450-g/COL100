    #include <stdio.h>

    void main(){
        int n;
        scanf("%d", &n);
        int i = 0;
        while(1){
            int posi = 1 << i;
            if(posi==n){
                break;
            }
            i++;
        }
        printf("%d\n", i);
    }