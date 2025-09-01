//Q.Write a program to display the multiplication table of a given number.
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number whose multiplication number is to be displayed\n");
    scanf("%d",&n);
    printf("The multiplication table of %d is:\n",n);
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n",n,(i+1),(n*(i+1)));
    }
    return 0;
    
}
