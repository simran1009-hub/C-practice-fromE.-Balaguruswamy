/*
Write an interactive program to demonstrate the process of multiplication. The program should ask the user to enter
 two two-digit integers and print the product of integers as shown below.
                          45
                     X    37
              __________________
7 X 45  is               315
3 X 45  is               135 
              __________________
Add them                1665
            ____________________
*/
#include<stdio.h>

int main(){
    int i1,i2;
    printf("Enter i1 i2\n");
    scanf("%d %d",&i1,&i2);
    printf("\t\t\t\t%d\n",i1);
    printf("\t\t\tX");
    printf("\t%d\n",i2);
    printf("\t\t\t_________________\n");
    printf("%d X %d is\t\t\t%d\n",i2%10,i1,(i1*(i2%10)));
    int product_1=(i1*(i2%10));
    printf("%d X %d is\t\t\t%d\n",(i2/10),i1,(i1*(i2/10)));
    int product_2=(i1*(i2/10));
    printf("\t\t\t_________________\n");
    printf("Add\tthem\t\t\t%d\n",product_1+(product_2*10));
    printf("\t\t\t_________________\n");

    return 0;
}