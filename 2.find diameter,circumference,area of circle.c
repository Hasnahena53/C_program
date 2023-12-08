//find diameter,circumference,area of circle
#include <stdio.h>
#include <math.h>
  float getDiameter(float radius);
float getCircumference(float radius);
 float getArea(float radius);
int main()
{ float radius, diameter, circle, area;
   printf("Enter radius of circle: ");
     scanf("%f", &radius);
     diameter = getDiameter(radius);
     circle = getCircumference(radius);
    area = getArea(radius);
     printf("Diameter of the circle = %f \n", diameter);
     printf("Circumference of the circle = %f \n", circle);
     printf("Area of the circle = %f", area);  }
 float getDiameter(float radius)
    { return (2 * radius); }
 float getCircumference(float radius) { return (2 * 3.1416 * radius); }
    float getArea(float radius)
     { return (3.1416 * radius * radius);}
