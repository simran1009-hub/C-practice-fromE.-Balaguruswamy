//Q.Write an alogorithm and draw a flowchart to count the number of digits present in a number.
#include<stdio.h>

int main(){
    int n;
    printf("Enter n, we will tell you the number of digits it has\n");
    scanf("%d",&n);
    int count=0;
    int n_temp=n;
    do{
        n_temp /= 10;
        count++;
    }while(n_temp!=0);
    printf("%d has %d digit\n",n,count);
    return 0;
}