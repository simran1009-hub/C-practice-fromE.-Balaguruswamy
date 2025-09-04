/*
A point on the circumference of a circle whose centre is (O,O) is (4,5). Write a program to compute perimeter and area of the circle.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    double x = 4, y = 5;
    double radius = sqrt((x * x) + (y * y));
    printf("The radius of the circle is %.2f\nSo, its area = %.2f & perimeter = %.2f\n", radius, (3.14 * radius * radius), (2 * 3.14 * radius));
    return 0;
}