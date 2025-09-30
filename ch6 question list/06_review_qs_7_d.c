/*
Simplify the followingn compoumd logical expressions
(d) !((x<=5) && (y==10) && (z<5))
*/
#include<stdio.h>

int main(){
    int x,y,z;
    printf("Enter x y z\n");
    scanf("%d %d %d",&x,&y,&z);
    if((x>5) || (y!=10) || (z>=5)){                                             //"!" is the "NOT" logical operator.
        printf("The given compound logical expression has been simplified\n");
    }
    return 0;
}