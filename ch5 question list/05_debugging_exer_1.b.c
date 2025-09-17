/*
State errors, if any, in the following input statements
(b) scanf("%s%d",city, amount);
*/
#include<stdio.h>

int main(){
    char city[40];
    int amount;
    scanf("%s%d",city,&amount);     //The string i.e. "city"'s value is read in the address of the element at index 0 which is written as "&city[0]", also the other shorter way to write the same is "city".Hence, it has no error.
                                    //But for an integer datatype we should write it with "address of" operator, i.e. "&" meaning like "&amount".
                                    //Since strings can read multiple characters but stops at spaces, so we should ask the user to enter the string and the integer with a space in between,If we don't give a space in the input then the string will read the entire input and the integer variable "amount" will not be assigned any value.


    return 0;
}