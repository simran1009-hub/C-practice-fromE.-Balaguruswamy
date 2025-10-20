/*
Write a program for fitting a straight line through a set of points (xi,yi),i=1,......,n.
The straight line equation is
                y = mx + c
and the values of m and c are given y
                m = (n )(sigma xiyi) - (sigma xi)(sigma yi)/(n)(sigma xi^2)- (sigma xi)^2
                c = 1/n(sigma yi - m sigma xi)
All summations are from 1 to n.
*/

#include<stdio.h>

int main(){
    int n,sum_xiyi=0,sum_xi=0,sum_yi=0;
    float sum_xi2=0,m,c;
    printf("Enter n\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        int xi,yi;
        printf("Enter xi yi\n");
        scanf("%d %d",&xi,&yi);
        sum_xiyi += xi*yi;
        sum_xi += xi;
        sum_yi += yi;
        sum_xi2 += xi*xi;
        
    }
    m = (((n*sum_xiyi) - (sum_xi*sum_yi))/((n*sum_xi2) - ((sum_xi)*sum_xi)));
    c = (1.0/n)*(sum_yi - (m*sum_xi));
    printf("Therefore, the equation of the straight line which fits through the set of points (xi,yi), where i = 1,.....,n is y = %.2fx + %.2f\n",m,c);
    
    
    return 0;
}