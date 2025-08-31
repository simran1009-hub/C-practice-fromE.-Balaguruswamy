//Q.Write a program to swap two numbers using a function.
#include<stdio.h>
int swap(int*,int*);

int swap(int* ptr1,int* ptr2){
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    
    return 0;
}
int main(){
    int n1,n2;
    int* ptr1=&n1;
    int* ptr2=&n2;
    printf("Enter n1 n2\n");
    scanf("%d %d",&n1,&n2);
    printf("So, n1 = %d and n2 = %d\n",n1,n2);
    swap(ptr1,ptr2);
    printf("Now after swapping n1 and n2, n1 = %d and n2 = %d\n",n1,n2);
    return 0;
}