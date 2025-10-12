/*
The present value (popularly known as book value) of an item is given by the relationship.
                P = c(1-d)^n
where       c = orginal cost
            d = rate of depreciation (per year)
            n = number of years
            p = present value after y years.
If P is considered the scrap value at the end of useful life of the item, write a program to compute 
the useful life in years given the original cost, depreciation rate, and the scrap value.
The program should request the user to input the data interactively.
*/
#include<stdio.h>
#include<math.h>

int main(){
    float c, d, p;
  double n;
    printf("Enter original cost of the item\n");
    scanf("%f",&c);
    printf("Enter it's depreciation rate\n");
    scanf("%f",&d);
    printf("Enter it's scrap value\n");
    scanf("%f",&p);
    n=((log(p/c))/(log(1-d)));
    printf("The useful life of the item in years = %.2f\n",n);
    return 0;
}