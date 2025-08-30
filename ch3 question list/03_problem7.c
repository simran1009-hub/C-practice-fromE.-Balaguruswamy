//Q.Write a program to convert temperature from Celsius to Fahrenheit and vice versa.
#include<stdio.h>

int main(){
    float celsius;
    float fahrenheit;
    printf("Enter the temperature in celsius that has to be converted into fahrenheit\n");
    scanf("%f",&celsius);
    printf("Enter the temperature in fahrenheit that has to be converted into celsius\n");
    scanf("%f",&fahrenheit);
    printf("%f degree celsius is %f fahrenheit\n",celsius,(((9.0/5)*celsius)+32));
    printf("%f fahrenheit is %f degree celsius\n",fahrenheit,(((fahrenheit-32)*5)/9));
    
    return 0;
}