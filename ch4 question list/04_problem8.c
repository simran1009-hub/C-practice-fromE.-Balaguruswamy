//Q.Write a function to find the GCD of two numbers.
#include<stdio.h>

int GCD(int,int);

int GCD(int num1,int num2){
    int smaller;
    int GCD_;
    if(num1<num2){
         smaller=num1;
        }
        else{
            smaller=num2;
        }

  for (int i = smaller; i ; i--)
  {
    if(num1%i==0 && num2%i==0){
    return GCD_=i;
    }

  }
}
int main(){
    int num1,num2;
    printf("Enter num1 num2 whose GCD is to be found\n");
    scanf("%d %d",&num1,&num2);
printf("The GCD of %d and %d is %d\n",num1,num2,GCD(num1,num2));
return 0;
}