/*
Write a program to illutrate the use of cast operator in real-life situation
*/
#include<stdio.h>

int main(){
  printf("Typecasting can be used to find the vale of GIF(Greatest Integer Function) of a non-negative input\n");
  float f;
  int i;
  printf("Enter a non-negative value of f\n");
  scanf("%f",&f);
i=(int)f;
printf("[%.2f] = %d\n",f,i);
    return 0;
}