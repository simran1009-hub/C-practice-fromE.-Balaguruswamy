/*
Rewrite each of the following without using compound relations:
(c) if ((M1 > 60 && M2 > 60) || T > 200)
    printf(" Admitted\n");
    else
    printf(" Not admitted\n");
*/
#include<stdio.h>

int main(){
    int M1,M2,T;
    printf("Enter M1 M2 T\n");
    scanf("%d %d %d",&M1,&M2,&T);
    if(M1>60){
        if(M2>60){
            printf(" Admitted\n");
        }
        else{
        if(T>200){
        printf(" Admitted\n");
        }
        else{
            printf(" Not admitted\n");
        }
    }
}
    else{
    if(T>200){
    printf(" Admitted\n");
    }
    else{
    printf(" Not admitted\n");
    }
}
    return 0;
}