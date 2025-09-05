/*
Write a C program to input the distance travelled by a car and the fuel consumed. next, compute the mileage of the car.
*/
#include <stdio.h>

int main()
{
    float distance_travelled, fuel_consumed;
    printf("Enter the distance travelled in km by the car\n");
    scanf("%f", &distance_travelled);
    printf("Enter the fuel consumed by the car to travel that distance\n");
    scanf("%f", &fuel_consumed);
    if(fuel_consumed!=0){
    printf("So, the mileage of the car is %.2f\n", distance_travelled / fuel_consumed);
    }
    else{
        printf("Fuel consumed cannot be zero\n");
    }
    return 0;
}