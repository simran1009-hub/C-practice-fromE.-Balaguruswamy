//Write an algortihm and draw a flowchart to find the sum of all prime numbers between 1 and 200.
#include<stdio.h>

int main(){
    int sum=0,count=0;
    for (int n = 4; n < 200; n++)
    {
        for (int i = 2; i < n; i++)
        {
           if(n%i!=0){
                count++;
           }
        }
        if(count==(n-2)){
            sum += n;
        }
        count=0;
        
    }
    printf("The sum of all prime number between 1 and 200 is %d\n",(sum+2+3));
    return 0;
}