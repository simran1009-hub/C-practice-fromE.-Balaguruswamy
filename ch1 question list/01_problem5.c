//Q.Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
float celsius_to_fahrenheit(float);

float celsius_to_fahrenheit(float celsius){
    return (((9.0/5)*celsius)+32);
}
int main(){
    float celsius;
    printf("Enter the celsius temperature which has to be converted in fahrenheit\n");
    scanf("%f",&celsius);
    printf("%f degree celsius in fahrenheit is %.2f\n",celsius,celsius_to_fahrenheit(celsius));
    return 0;
}