/*

Find errors, if any, in the following assignment statements and rectify them.
(a) x = y = z = 0.5, 2.0. -5.75;

*/
#include<stdio.h>

int main(){
    //For (a) :
    float x, y, z;  
    x = 0.5, y = 2.0, z = -5.75;                /*If we leave the variable declaration part(i.e "float"), then firstly, when we use 
                                                the assignment operator(i.e. "="), then we are supposed to initialize the variables
                                                x , y and z with the same values, hence the assignment statement given in question is
                                                wrong as it is using "=" but still trying to initialize the variables with different 
                                                values.
                                                Secondly, "x = 0.5" , "y = 2.0" and "z = -5.75" has to be separated by commas.
                                                Therefore, the corrected version is "x = 0.5, y = 2.0, z = -5.75;".
                                                */
          
   

    return 0;
}