/*
Identify syntax errors in the following program. After corrections, what 
output would you expect when you execute it ?
 #define PI 3.14159
 main()
 {
 int R,C;                 /* R-Radius of circle
 float perimeter;           /* Circumference of circle*/
 /*
 float area;                   /*Area of circle*/
 /*
 C=PI
 R=5;
 Perimeter = 2.0 *C*R;
 Area=C*R*R;
 printf("%f","%d",&perimeter,&area)
}
 */
#include<stdio.h>       //This header file has to be included whenever input, output is occuring in the main function
#define PI 3.14159

int main()              //main function's return type can never of void datatype, "int main(){  return 0; }" is correct and not "main(){ }"
{
int R,C;                //This line of code is correct. But, while writing "R-Radius of circle" as comment we must appropriately closed with */ 
float perimeter;        //This line of code has no error, neither do the other two comments have any.
float area;
C=PI;                   //An instruction written in C must be terminated with a semicolon.C is of int datatype and PI is of float dataype hence this statement will read incorrectly the value we want to store in "C" variable.Meaning "C=PI" will initialize C with 3.
R=5;
perimeter=2.0*C*R;      //Variable names in C are case sensitive, hence "Perimeter" and "perimeter" are considered different variables in C.So, before starting off with "Perimeter", one must have declared it.
area=C*R*R;             //Variable names in C are case sensitive, hence "Area" and "area" are considered different variables in C.So, before starting off with "Area", one must have declared it. C*R*R = 75 ,but since "area" is of float datatype, this value will be promoted to "75.0000000"
printf("%f %f",perimeter,area);           //"area" is of float datatype, hence the format specifier for it must be %f to print the exact value of it, else will print garage value instead. To print double quotes in printf's string one should write /" and for closing this we write /". Also, while printing a variable's value just the name of the value has to be written after the comma written after closing of double quote and not its address
return 0;               //return 0; is necessary
}
//Output : 30.0000000 75.0000000


