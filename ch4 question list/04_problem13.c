//Q.Write a program to find the largest of three numbers using a function.
#include<stdio.h>

int finds_the_largest_among_three(int,int,int);

int finds_the_largest_among_three(int n1,int n2,int n3){
   if(n1>=n2 && n1>=n3){
    return n1;
   }
   else if(n2>=n1 && n2>=n3){
    return n2;
   }
   else{
    return n3;
   }
}
int main(){
    int n1,n2,n3;
    printf("Enter n1 n2 n3\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    printf("So, n1 = %d\nn2 = %d\nn3 = %d\n",n1,n2,n3);
    printf("The largest among the three is %d\n",finds_the_largest_among_three(n1,n2,n3));
    return 0;
}