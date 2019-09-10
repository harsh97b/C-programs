#include<stdio.h>
#include<math.h>
float area_sq(float a);
float area_rect(float a,float b);
float area_triangle(float a);
float area_circle(float a);
int main()
{
    float areafig;
    areafig=area_sq(4)+area_sq(6)+area_rect(10,4)+area_triangle(6.25)+area_triangle(3.75)+(area_circle(1.25)+area_circle(0.75)+area_circle(2))/2;
    printf("Area of displayed Figure is:=%f",areafig);
}
float area_sq(float a)
{
float area = a*a;
return area;
}

float area_rect(float a,float b)
{
float area = a*b;
return area;
}

float area_triangle(float a)
{
float area =sqrt(3)*a*a/4;
return area;
}

float area_circle(float a)
{
float area =3.14*a*a;
return area;
}

