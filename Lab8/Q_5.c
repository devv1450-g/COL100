#include<stdio.h>
#include<string.h>

#define MAX 1000

char toLowercase(char A[]);
int inPangram(char sentence[]);

void main(){
    char A[MAX];
    scanf("%[^\n]s",&A);
    toLowercase(A);
    printf(inPangram(A)?"true\n":"false\n");
  
}

// to lower case
char toLowercase(char A[]){
    for(int i=0; i<strlen(A); i++){
        if(A[i]>'A' && A[i]<'Z'){
            A[i] = A[i] + ('a' - 'A');
        }
    }
}

//checking for pangram
int inPangram(char A[]){
    char alpha[26];
    char alpha_no = 'a';
    //create array with 'a' to 'z'
    for(int i=0; i<26; i++){
        alpha[i] = alpha_no;
        alpha_no = alpha_no + ('b'-'a');  
    }
   // printf("%d", alpha_no);
    // assginig value -1 to element of array matches with array alpha
    for(int i=0; i<strlen(A); i++){
        for(int j=0; j<26; j++){
            if(A[i]==alpha[j]){
                alpha[j] = '#';
            }
        }        
    }
    // checking that all element are -1 or not
    for(int i=0; i<26; i++){
        if(alpha[i]!='#'){         // any alphabet is missing
            return 0; 
        }
    }
    return 1;
}
