/*
Write C assignment statements to evaluate the following equations:
Energy = mass [acceleration X height + ((velocity)^2)/2]
*/
#include<stdio.h>

int main(){
    float Energy, mass, acceleration, height, velocity;
    printf("Enter mass accleration height velocity\n");
    scanf("%f %f %f %f",&mass,&acceleration,&height,&velocity);
    Energy=mass*((acceleration*height) + ((velocity*velocity)/2));
    printf("Energy = %.2f\n",Energy);
    return 0;
}