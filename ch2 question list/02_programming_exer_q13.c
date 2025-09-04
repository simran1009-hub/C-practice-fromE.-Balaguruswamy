/*
Distance between two points (x1, y1) and (x2, y2) is governed by the formula
D^2 = (x2 - x1)^2 + (y2 - y1)^2
Write a program to compute D given the coordinates of the points
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float x1, y1, x2, y2;
    printf("Enter x1 y1, which are the x and y coordinate of 1st point respectively\n");
    scanf("%f %f", &x1, &y1);
    printf("Enter x2 y2, which are the x and y coordinate of 2nd point respectively\n");
    scanf("%f %f", &x2, &y2);
    printf("The Distance between point 1 and point 2 whose coordinates are (%.2f , %.2f) and (%.2f , %.2f) respectively is %f\n", x1, y1, x2, y2, sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2))));
    return 0;
}