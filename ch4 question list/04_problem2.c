//Q.Write a function to check whether a given number is prime or not.
#include<stdio.h>

void checks_for_prime(int);

void checks_for_prime(int num){
    int count=0;
    if((num==1) || (num==0)){
        printf("%d is not a prime number\n",num);
    }
else if(num==2){
    printf("%d is a prime number\n",2);
}
    else if(num>=2){
        for (int i = 2; i < num; i++)
    {
        if(num%i==0){
            printf("%d is not a prime number\n",num);
            count++;
            break;
        }
           }
           if(count==0){
printf("%d is a prime number\n",num);
           }
}
    
}
int main(){
    int num;
    printf("Enter the number which has to be checked for prime\n");
    scanf("%d",&num);
    checks_for_prime(num);
    return 0;
}