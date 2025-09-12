/*
The total distance travelled by a vehicle in t seconds is given by
distance = ut + (a(t^2))/2
Where u is the initial velocity (metres per second), a is the acceleration (metres per second^2).
Write a program to evaluate the distance travelled at regular intervals of time, given the values of u and a.
the program should provide the flexibility to the user to select his own time intervals and repeat the calculations for
different values of u and a.
*/
#include <stdio.h>

int main()
{
    float u, a, t, t_interval, d1, t1 = 0;
    int repeat = 1;
    while (repeat)
    {
        printf("Enter u a t timeInterval, where u = initial velocity,\na = acceleration,\nt = time,\ntimeInterval = Intervals of time from t=0 to t=t for which distance is to be computed\n");
        scanf("%f %f %f %f", &u, &a, &t, &t_interval);

        while (t1 >= 0 && t1 <= t)
        {

            d1 = ((u * t1) + ((1 / 2.0) * a * t1 * t1));
            printf("At t = %.2f, the distance travelled is %.2f\n", t1, d1);
            t1 += t_interval;
        }

        repeat--;
        printf("Enter 1 if you want to repeat this calculation for other value of u & a, and 0 if not\n");
        scanf("%d", &repeat);
        t1=0;
    }

    return 0;
}