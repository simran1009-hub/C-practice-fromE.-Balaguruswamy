/*
Write a program to read the following numbers, round them off to the nearest integers and print out the results in integer form:
35.7    50.21       -23.73      -46.45
*/
#include<stdio.h>
#include<math.h>

int main(){
    float n1,n2,n3,n4;
    printf("Enter n1 n2 n3 n4\n");
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    printf("n1 = %f\nn2 = %f\nn3 = %f\nn4 = %f\n",n1,n2,n3,n4);
    int rounded_off_n1_value=(int)round(n1);
    int rounded_off_n2_value=(int)round(n2);
    int rounded_off_n3_value=(int)round(n3);
    int rounded_off_n4_value=(int)round(n4);

    printf("n1 = %d\nn2 = %d\nn3 = %d\nn4 = %d\n",rounded_off_n1_value,rounded_off_n2_value,rounded_off_n3_value,rounded_off_n4_value);
    return 0;
}