#include <stdio.h>

void main(){
    float marks;
    printf("Enter your marks = ");
    scanf("%f", &marks);
    if (marks<100 && marks>86){
        printf("Your grade is A+\n");
    }
    else if (marks<85 && marks>71){
        printf("Your grade is A-\n");
    }
    else if (marks<70 && marks>56){
        printf("Your grade is B+\n");
    }
    else if (marks<55 && marks>41){
        printf("Your grade is B-\n");
    }
    else if (marks<40 && marks>26){
        printf("Your grade is C\n");
    }
    else if (marks<25 && marks>0){
        printf("Your grade is F\n");
    }
    else {
        printf("Enter valid marks.\n");
    }
}