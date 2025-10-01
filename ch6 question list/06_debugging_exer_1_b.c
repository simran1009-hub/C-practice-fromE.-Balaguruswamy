/*
Find errors, if any, in each of the following segments:
(b) if (p < 0) || (q < 0)
            printf (" sign is negative");
*/
#include<stdio.h>

int main(){
    int p, q;
    printf("Enter p q\n");
    scanf("%d %d",&p,&q);
    if ((p < 0) || (q < 0))                     //The condition inside the if statement must always be enclosed within the parenthesis.
            printf (" sign is negative");
    return 0;
}