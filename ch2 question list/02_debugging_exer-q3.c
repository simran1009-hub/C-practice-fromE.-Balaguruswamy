//Find errors, if any, in the following program:
/*
Include<math.h>
main{}
(
FLOAT X:
X=2.5;
Y=exp(x);
Print(x,y);
)
*/

#include<math.h> //Include<math.h> -- #include and not Include
int main(){  //main -- main function's return value datatype must be mentioned(like int here)
              // {} (   ) -- also the () and {} positions are exchanged in the code given
    float X;          //FLOAT X: -- this datatype's syntax is float and not FLOAT
    X=2.5;
    float Y;          //Y=exp(x); -- It is invalid to initialize a variable without or before declaring it, so Y must be declared first
    Y=exp(X);        //Y=exp(x); -- The variable name in C is case sensitive, hence compiler will take  X and x as separate variables
printf("%f,%f",X,Y);  //Print(x,y); -- This library function's syntax is printf("") and not Print()
                    //Also in printf(""), if we wish to print a variable's value we have to use appropriate format specifiers(like %f for float), and should not assume that only writing the variable name will print the value of the variable
return 0;             //return statement for main function is neccessary
                }