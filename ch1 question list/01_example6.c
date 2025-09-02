// Q.Develop an alogorithm to divide one number by another and find the quotient.
#include <stdio.h>

int main()
{
    float a, b;
    float quotient;
    printf("Enter a b,where we will divide a by b\n");
    scanf("%f %f", &a, &b);
    if (b != 0)
    {
        quotient = a / b;
        printf("The quotient when a is divided by b is %f\n", quotient);
    }
    else{
        printf("b = 0 will make the division invalid\n");
    }
    return 0;
}