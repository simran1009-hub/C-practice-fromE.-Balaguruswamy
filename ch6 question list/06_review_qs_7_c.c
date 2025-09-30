/*
Simplify the followingn compoumd logical expressions
(c) !((x+y==z) && !(z>5)
*/
#include<stdio.h>

int main(){
    int x,y,z;
    printf("Enter x y z\n");
    scanf("%d %d %d",&x,&y,&z);
    if(((x+y)!=z) || (z>5)){                                                   //Firstly, there parenthesis opened after "!" operator hasn't been closed, which should have been done. Secondly, use of parenthesis is preferrable in order to avoid confusion, hence "x+y" should have been closed in "()". Lastly, "!" is the "NOT" logical operator and it takes the opposite of its input value as it's actual input.
        printf("The given compound logical expression has been simplified\n");
    }
    return 0;
}