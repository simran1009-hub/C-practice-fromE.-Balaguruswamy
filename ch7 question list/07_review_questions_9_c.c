/*
What would be the output of each of the following code segments?
(c) count = 5;
    do printf(count);
    while (count > 0);
*/
#include<stdio.h>

int main(){
    int count=5;
    do printf("%d",count);
    while (count > 0);                  //The output of the program is: 5555555555555555555555555555555555555555555555...
   
    
    return 0;
}