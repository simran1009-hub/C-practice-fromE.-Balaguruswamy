/*
Change the for loops in Exercise 7.13 (b) to do loops.
Exercise 7.13 (b) for ( ; scanf("%d", & m) != -1;)
                     printf(m);
*/
#include<stdio.h>

int main(){
    int m;
    
    do{
        scanf("%d",&m);
        if(m!=-1){
        printf("%d",m);
        }
    }while(m!=-1);
    return 0;
}