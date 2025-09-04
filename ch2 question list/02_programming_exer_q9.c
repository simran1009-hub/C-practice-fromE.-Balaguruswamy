/*
Write a program using one print statement to print th epattern of asterisks as shown below:
*
*   *
*   *   *
*   *   *   *
*/
#include<stdio.h>

int main(){
    int n;
    printf("Enter n, we will print n lines of this pattern\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*   ");
        }
        printf("\n");        
    }
    
    return 0;
}