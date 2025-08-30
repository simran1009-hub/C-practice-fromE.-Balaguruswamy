//Q. Write a program to demonstrate logical operators (&&, ||, !).
#include<stdio.h>

int main(){
  int n1=1,n2=0;
  if(n1 && n2){
    printf("n1 && n2 = TRUE\n");
  }
  else{
    printf("n1 && n2 = FALSE\n");
  }
  if(n1 || n2){
    printf("n1 || n2 = TRUE\n");
  }
  else{
    printf("n1 || n2 = FALSE\n");
  }
  if(!1){
    printf("!n1 = TRUE\n");
  }
  else{
    printf("!n1 = FALSE\n");
  }
  
  return 0;
}