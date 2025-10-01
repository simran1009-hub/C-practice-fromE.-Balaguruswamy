/*
What will be output of the following segment when executed?
int a = 10, b = 5;
if (a > b)
{
            if(b > 5)
            printf("%d", b);
}
else
            printf("%d", a);
*/
#include<stdio.h>

int main(){
    int a = 10, b = 5;
if (a > b)
{
            if(b > 5)
            printf("%d", b);
}
else
            printf("%d", a);        //This segment of code doesn't give any output.
            
    return 0;
}