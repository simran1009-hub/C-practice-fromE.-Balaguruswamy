//Q.Write a program to evaluate simple expressions using different operators.
#include<stdio.h>

int main(){
    int w=9,x=5,y=30,z=81;
    printf("w=%d\tx=%d\ty=%d\tz=%d\n",w,x,y,z);
    printf("%d + %d = %d\n",x,z,(x+z));
    printf("%d * %d = %d\n",w,z,(w*z));
    printf("%d / %d = %d\n",y,x,(y/x));
    printf("%d - %d = %d\n",z,w,(z-w));
    if((w>x) && (y<=z) && (x==z)){
        printf("((w>x) && (y<=z) && (x==z)) = TRUE\n");
    }
    else{
        printf("((w>x) && (y<=z) && (x==z)) = FALSE\n");
    }
    return 0;
}