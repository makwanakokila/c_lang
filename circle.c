#include<stdio.h>
main()
{
    int r;
    float PI = 3.14, area;
    printf("Enter radius of circle: ");
    scanf("%d", &r);
    area = (PI*r*r);
    printf("area of circle is : %f",area);
}