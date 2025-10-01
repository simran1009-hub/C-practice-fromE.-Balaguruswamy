/*
Find errors, if any, in each of the following segments:
(a) if (x + y = z && y > 0)
                    printf(" ");
*/
#include<stdio.h>

int main(){
    int x, y, z;
    printf("Enter x y z\n");
    scanf("%d %d %d",&x, &y, &z);
        if (x + y == z && y > 0)        //"=" is the assignment operator, it is used to assign values to a variable.But, for checking equality we use "==", and it is a relational operator.This was the only error in the code.
                    printf(" ");

    return 0;
}