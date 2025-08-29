//Q.Write a program to convert distance in kilometers into meters, feet, inches, and centimeters.
#include<stdio.h>
void km_to_m_feet_inch_cm(float);
void km_to_m_feet_inch_cm(float distance_in_kilometers){
    printf("%f km in metre is %.2f metre\n",distance_in_kilometers,distance_in_kilometers*1000);
    printf("%f km in feet is %.2f feet\n",distance_in_kilometers,distance_in_kilometers*3280.84);
    printf("Same in inches is %.2f inches\n",distance_in_kilometers*39370.1);
    printf("And in centimetres is %.2f\n",distance_in_kilometers*100000);

}


int main(){
    float distance_in_kilometers;
    printf("Enter distance in kilometer\n");
    scanf("%f",&distance_in_kilometers);
    
    km_to_m_feet_inch_cm(distance_in_kilometers);
    return 0;
}