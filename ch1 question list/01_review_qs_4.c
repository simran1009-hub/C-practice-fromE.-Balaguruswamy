//Q.Write an algorithm and draw a flowchart to compute the amount accrued if a sum of P is invested at a arate of R% fora duration of T years, where the interest is compounded every year.
#include<stdio.h>
#include<math.h>

int main(){
int P,T,n=1;
float R;
printf("Enter P R T, where P=principal amount\nR=rate of interest in %\nT=time period in years\n");
scanf("%d %f %d",&P,&R,&T);
float Compound_Interest=(P*((pow((1+(R/(100*n))),(n*T))) -1));
printf("The compounded amount is = %.2f\n",P + Compound_Interest);
    return 0;
}