/*
Write a C program that makes use of the switch-case statement to compute the number of occurences of
the various numeric digits in the given number.
*/
#include<stdio.h>

int main(){
    int n,remainder,changing_n;
    printf("Enter n\n");
    scanf("%d",&n);
changing_n=n;
    int count_0=0,count_1=0,count_2=0,count_3=0,count_4=0,count_5=0,count_6=0,count_7=0,count_8=0,count_9=0;
    
    while(changing_n!=0){
        remainder=changing_n%10;
        switch(remainder){
            case 0:
            count_0++;
            break;
            case 1:
            count_1++;
            break;
            case 2:
            count_2++;
            break;
            case 3:
            count_3++;
            break;
            case 4:
            count_4++;
            break;
            case 5:
            count_5++;
            break;
            case 6:
            count_6++;
            break;
            case 7:
            count_7++;
            break;
            case 8:
            count_8++;
            break;
            case 9:
            count_9++;
            break;
            default:
            printf("The entered digit is invalid\n");
            break;
        }
        changing_n/=10;
    }
    if(n==0){
        printf("The number of %d in %d is %d\n",0,n,1);
    }
    printf("The number of %d in %d= %d\n",0,n,count_0);
    printf("The number of %d in %d= %d\n",1,n,count_1);
    printf("The number of %d in %d= %d\n",2,n,count_2);
    printf("The number of %d in %d= %d\n",3,n,count_3);
    printf("The number of %d in %d= %d\n",4,n,count_4);
    printf("The number of %d in %d= %d\n",5,n,count_5);
    printf("The number of %d in %d= %d\n",6,n,count_6);
    printf("The number of %d in %d= %d\n",7,n,count_7);
    printf("The number of %d in %d= %d\n",8,n,count_8);
    printf("The number of %d in %d= %d\n",9,n,count_9);
    return 0;
}