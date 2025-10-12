/*
Write a program to commute the value of Euler's number e, that is used as the base of natural logarithms. Use the 
following formula.
                    e = 1 + 1/1! + 1/2! + 1/3! + ..... + 1/n!
Use a suitable loop construct. The loop must terminate when the difference between two successive  values of e is 
less than 0.00001. 
*/
#include<stdio.h>
#include<math.h>

int factorial(int);

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return ((factorial(n-1))*n);
}
int main(){
    float up_till_old=0,up_till_new=0;
    int i=0;
  while(1){
    up_till_old += (1.0/factorial(i));
    up_till_new=up_till_old;
    up_till_new += ((1.0/(factorial(i+1))));
   if(up_till_new - up_till_old<0.00001){
         break;
    }
    i++;    
  }
  printf("The value of Euler's number(e) is %.2f\n",up_till_old);
   
    return 0;
}