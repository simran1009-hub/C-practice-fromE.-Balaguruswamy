/*
Simplify the followingn compoumd logical expressions
(b) !(x==10)||!((y==5) || (z<0))
*/
#include<stdio.h>

int main(){
    int x,y,z;
    printf("Enter x y z\n");
    scanf("%d %d %d",&x,&y,&z);
    if((x!=10) || ((y!=5) && (z>=0))){                                      //"!" is the syntax for the "NOT" logical operator.
        printf("The compound logical expression has been simplified\n");
    }
    return 0;
}