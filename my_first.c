#include<stdio.h>
#define pi 3.1456


int main()
{
 float radius, circum, area;
 printf("Enter the value of the circle(in cm):");
 scanf("%1f",&radius);
 circum=2*pi*radius;
 area=pi*radius*radius;
 printf("\nCircumfrence of this circle %f and the area %f",circum,area);
 return 0;
}
