/*
The line joining the points (2,2) and (5,6) which lie on the circumference of a circle is the diameter of the circle. Write a program to compute the area of the circle
*/
#include <stdio.h>
#include <math.h>

int main()
{
    double x1 = 2, y1 = 2, x2 = 5, y2 = 6;
    double distance_btw_the_points = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
   double radius_of_the_circle = distance_btw_the_points / 2;
    printf("The area of the circle = %.2f, where it was given that (%.2f,%.2f) and (%.2f,%.2f) were the points lying on the circumference of the circle such that the line joining them was the diameter of the circle\n", (3.14 * radius_of_the_circle * radius_of_the_circle), x1, y1, x2, y2);
    return 0;
}