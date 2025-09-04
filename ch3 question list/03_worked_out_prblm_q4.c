/*
In this case computer requests the user to input the values of the amount to be invested ,interest rate and period of investment by 
printing a prompt message 
        input amount, interest rate, and period 
and then waits for input values.As soon as we
 finish entering the three values corresponding to the 
three variables amount, inrate and period, the computer begins to calculate the
 amount at the end of each year, upto 'period' and produces output as shown
 */
#include<stdio.h>
#include<math.h>

int main(){
    float amount, inrate;
    int period;
    printf("Input amount, interest rate, and period\n");
    scanf("%f %f %d",&amount,&inrate,&period);
    float x;
    for (int i = 1; i <= period; i++)
    {
        x=amount*(inrate/100);
        amount +=x;
        printf("Year = %d, Amount = %.2f\n",i,amount);
    }
    
    return 0;
}