//Q.Write a function to check whether a character is a vowel or consonant.
#include<stdio.h>

void character_check_for_vowel_or_consonant(int);

void character_check_for_vowel_or_consonant(int c){
if(c==65 || c==69 || c==73 || c==79 || c==85 || c==97 || c==101 || c==105 || c==111 || c==117){
    printf("%c is a vowel\n",c);
}
else if(((c>=65 && c<=90) || (c>=97 && c<=122)) && c!=65 && c!=69 && c!=73 && c!=79 && c!=85 && c!=97 && c!=101 && c!=105 && c!=111 && c!=117){
    printf("%c is a consonant\n",c);
}
else{
    printf("You haven't typed an english alphabet\n");
}
}
int main(){
    char c;
    printf("Enter the character which has to be checked for vowel or consonant\n");
    scanf("%c",&c);
    character_check_for_vowel_or_consonant(c);
return 0;
}