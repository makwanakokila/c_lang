#include<stdio.h>
#define PI 3.14
int main()
{
    int r;
    float area;
     printf("Enter the radius : ");
    scanf("%d",&r);
    area=PI*r*r;
    printf("Perimeter of the circle : %.2f",area);
}