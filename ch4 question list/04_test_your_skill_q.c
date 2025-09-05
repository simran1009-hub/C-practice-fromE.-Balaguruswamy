/*
Write a C program to input a character and determine whether it is a vowel or consonant
*/
#include<stdio.h>

int main(){
    char c;
    printf("Enter c, where c is a character and we will check it for vowel or consonant\n");
    scanf("%c",&c);
    if(c==65 || c==69 || c==73 || c==79 || c==85 || c==97 || c==101 || c==105 || c==111 || c==117){
        printf("%c is a vowel\n",c);
    }
    else if((c>=97 && c<=122) || (c>=65 && c<=90)){
        printf("%c is a consonant\n",c);
    }
    else{
        printf("%c is neither a vowel nor a consonant\n",c);
    }
    return 0;
}