/*
Write a prgram to read three values using scanf statement and print the following  results:
    (a) Sum of the values
    (b) Average of the three values
    (c) Largest of the three
    (d) Smallest of the three
*/
#include<stdio.h>
#include<math.h>

int main(){
    int n1,n2,n3,Sum_of_the_values, Largest_of_the_three, Smallest_of_the_three;
    float Average_of_the_three_values;
    printf("Enter n1 n2 n3\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    
    Sum_of_the_values=n1+n2+n3;
    Average_of_the_three_values=(n1+n2+n3)/3.0;
    Largest_of_the_three=fmax(n1,fmax(n2,n3));
    Smallest_of_the_three=fmin(n1,fmin(n2,n3));

    printf("Sum : %d\n",Sum_of_the_values);
    printf("Average : %.2f\n",Average_of_the_three_values);
    printf("Largest : %d\n",Largest_of_the_three);
    printf("Smallest : %d\n",Smallest_of_the_three);
    return 0;
}