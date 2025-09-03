//Write a C program that reads the value of distane travelled by a car and the time taken for the same. Next, compute the speed at which the car travelled.
#include<stdio.h>

int main(){
    float distance_travelled_by_the_car,time_taken_for_same;
    printf("Enter the distance travelled by the car\n");
    scanf("%f",&distance_travelled_by_the_car);
    printf("Enter the time taken by the car for covering that distance\n");
    scanf("%f",&time_taken_for_same);
    printf("So, the speed of the car = %.2f\n",(distance_travelled_by_the_car/time_taken_for_same));
    return 0;

}