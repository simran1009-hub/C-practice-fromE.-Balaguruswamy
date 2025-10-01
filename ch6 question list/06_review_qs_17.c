/*
What will be the output of the following segment when executed?
int x = 10, y = 20;
if( (x<y) || (x+5) > 10 )
printf("%d", x);
else
printf("%d", y);
*/
#include<stdio.h>

int main(){
    int x = 10, y = 20;
if( (x<y) || (x+5) > 10 )
printf("%d", x);
else
printf("%d", y);
//The ouptut of the above given code segment is:10
    return 0;
}