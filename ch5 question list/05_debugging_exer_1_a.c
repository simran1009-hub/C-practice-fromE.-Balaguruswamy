/*
State errors, if any, in the following input statements
(a) scanf("%c%f%d",city,&price,&year);
*/
#include<stdio.h>

int main(){
char city;
float price;
int year;
scanf("%c%f%d",&city,&price,&year);     //We have to read the value of a variable its address, hence it has to be "&city" and not "city"
                                        //if city will store an actual city name then the format specifier for it should be "%s", meaning it should be a string instead.
                                        //So, in that case, it has to be declared as "char city[40];"
                                        //otherwise if it is supposed to store a single character then, we declare the city variable as "char city;" and the format specifier that we use for it is "%c"

    return 0;
}
