/*
Change the following for loops to while loops:
(b) for ( ; scanf("%d", & m) != -1;)
    printf(m);
*/
#include<stdio.h>

int main(){
    int m;
    while(scanf("%d",&m)!= -1){
        printf("%d",m);
    }
    return 0;
}