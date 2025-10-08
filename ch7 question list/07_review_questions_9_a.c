/*
What would be the output of each of the following code segments?
(a) count = 5;
    while (count -- > 0)
    printf(count);
*/
#include<stdio.h>

int main(){
    int count=5;
    while(count-- >0)
    printf("%d",count);    
    return 0;                    //The output of the program is : 43210
}