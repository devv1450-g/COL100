#include<stdio.h>
#include<string.h>

#define MAX 1000

void encrypt(char str[], int k);

void main(){
    char str[MAX];
    // input string
    scanf("%[^\n]s", &str);
    int k;
    scanf("%d",&k);
    //calling funtion
    encrypt(str, k);
}

void encrypt(char str[], int k){
    // declaring array containing 'a' to 'z'
    char cap[26];
    char alpha = 'A';
    for(int i=0; i<26; i++){
        cap[i] = alpha;
        alpha++;
    }
    // declaring array containing 'A' to 'Z'
    char small[26];
    alpha = 'a';
    for(int i=0; i<26; i++){
        small[i] = alpha;
        alpha++;
    }
    for(int i=0; i<strlen(str); i++){
        int p, c;
        // if capital
        if(str[i]>'A' && str[i]<'Z'){
            //cheacking str[i] in cap[i]
            for(int j=0; j<26; j++){
                if(str[i]==cap[j]){
                    //index of cap = i of p as per the question
                    p = j;
                    break;
                }
            }
            c = (p+k)%26;
            str[i] = cap[c];
        }
        else if(str[i]>'a' && str[i]<'z'){
            //cheacking str[i] in cap[i]
            for(int j=0; j<26; j++){
                if(str[i]==small[j]){
                    //index of small = i of p as per the question
                    p = j;
                    break;
                }
            }
            c = (p+k)%26;
            str[i] = small[c];
        }
    }
    printf("%s\n", str);
}