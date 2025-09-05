/*What is the error in each of the following statements?
 (a) if (m==1 & n!=0)
        printf("OK");
        
(b) if (x=<5)
        printf("Jump");

*/
#include<stdio.h>

int main(){
       //For (a) part 
        int m,n;
    if(m==1 && n!=0)            //The logical operator "AND" is represented as "&&" and not as "&".
    printf("OK");

    //For (b) part
    int x;
    if(x<=5)                    //The relational operator "less than or equals to" is represented as "<=" and not as "=<".
    printf("Jump");

    return 0;
}