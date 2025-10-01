/*
Find the error, if any, in the following statements:
(c) if (x = 10)
    printf ("Good" ) ;
*/
#include<stdio.h>

int main(){
    int x;
    printf("Enter x\n");
    scanf("%d",&x);
    if (x == 10)                //For checking for equality, we use "==", which is a relational operator and not "=", since it is the assignment operator and it assigns a value to a variable and doesn't check for equality.
   printf ("Good" ) ;
    return 0;
}