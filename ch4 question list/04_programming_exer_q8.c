/*
For a certain electrical circuit with an inductance L and resistance R, the damped natural frequency is given by
    Frequency = ((1/LC) - (R^2/4(C^2)))^1/2
It is desired to study the variation of this frequency with C (capacitance). Write a program to caculate the frequency for different values of C 
starting from 0.01 to 0.1 in steps of 0.01.
*/
#include<stdio.h>
#include<math.h>

int main(){
    float L=1, R=1,C,Frequency_inside;
    double Frequency; 
    printf("Inductance(L) = %.2f, Resistance(R) = %.2f\n",L,R);
    for (int i = 0; i < 10; i ++)
    {
        C=0.01 + (i*0.01);
      Frequency_inside= ((1/(L*C))-((R*R)/(4*C*C)));
      if(Frequency_inside>=0){
      printf("C = %.2f, Frequency = %.2f\n",C,(sqrt(Frequency_inside)));
      }
      else{
            Frequency_inside=(-Frequency_inside);
            printf("C = %.2f, Frequency = %.2f i\n",C,(sqrt(Frequency_inside)));
      }
    }
    
    return 0;
}