//Q.Write a function to convert a given temperature from Celsius to Fahrenheit.
#include<stdio.h>

float celsius_to_fahrenheit(float);

float celsius_to_fahrenheit(float celsius){
    return (((9.0/5)*celsius)+32);
}
int main(){
    float celsius;
    printf("Enter the temperature in celsius which has to be converted to fahrenheit\n");
    scanf("%f",&celsius);
    printf("%f degree celsius is %f fahrenheit\n",celsius,celsius_to_fahrenheit(celsius));
  
    return 0;
}