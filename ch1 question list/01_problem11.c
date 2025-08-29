//Q.Write a program to calculate the gross salary of an employee when basic salary, DA, and HRA are given.
#include<stdio.h>
float gross_salary_calculator(float,float,float);

float gross_salary_calculator(float basic_salary,float DA,float HRA){
    return (basic_salary + DA + HRA);
}
int main(){
    float gross_salary,basic_salary,DA,HRA;
    printf("This will calculate the gross salary of an employee from his basic salary, DA and HRA\n");
        printf("Enter the basic salary of the employee\n");
        scanf("%f",&basic_salary);
        printf("Enter the DA\n");
        scanf("%f",&DA);
        printf("Enter the HRA\n");
        scanf("%f",&HRA);
        printf("\nThe gross salary of the employee is %.2f\n",gross_salary_calculator(basic_salary,DA,HRA));
        return 0;
}


