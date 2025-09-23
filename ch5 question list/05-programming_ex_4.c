/*
Write a program that reads 4 floating point values in the range, 0.0 to 20.0, and print a horizontal bar chart to represent these values using the
character * as the fill character. For the purpose of the chart, the values may be rounded off to the nearest integer.For example, the value 4.36 should be
represented as follows.
*   *   *   *
*   *   *   *   4.36
*   *   *   *
Note that the actual values are shown at the end of each bar.
*/
#include<stdio.h>
#include<math.h>

int main(){
    float n1,n2,n3,n4;
    int m1,m2,m3,m4;
    
    printf("Enter n1 n2 n3 n4\n");
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    if(n1>=0 && n1<=20.0 && n2>=0 && n2<=20.0 && n3>=0 && n3<=20.0 && n4>=0 && n4<=20.0){
m1=(int)round(n1);
m2=(int)round(n2);
m3=(int)round(n3);
m4=(int)round(n4);
for (int j = 0; j < 3; j++)
{
    for (int i = 0; i < m1; i++)
    {
       printf("*   ");
            
    }
     if(j==1){
        printf("%.2f",n1);
      }
    printf("\n");
    
}
for (int j = 0; j < 3; j++)
{
    for (int i = 0; i < m2; i++)
    {
       printf("*   ");
            
    }
     if(j==1){
        printf("%.2f",n2);
      }
    printf("\n");
    
}
for (int j = 0; j < 3; j++)
{
    for (int i = 0; i < m3; i++)
    {
       printf("*   ");
            
    }
     if(j==1){
        printf("%.2f",n3);
      }
    printf("\n");
    
}
for (int j = 0; j < 3; j++)
{
    for (int i = 0; i < m4; i++)
    {
       printf("*   ");
            
    }
     if(j==1){
        printf("%.2f",n4);
      }
    printf("\n");
    
}

    }
    return 0;
}