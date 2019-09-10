#include<stdio.h>
float area_cir(float radius);
void main()
{
    float area,radius;
    printf("Enter radius");
    scanf("%f",&radius);
    area=area_cir(radius);
    printf("%f",area);
    area=area_cir(10.25);
    printf("\n%f",area);
}
float area_cir(float radius)
{
    float area;
    return(3.14*radius*radius);
}
