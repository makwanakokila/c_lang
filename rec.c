#include<stdio.h>
int main()
{
    int height, width;
    float area;
    printf("Enter the height :");
    scanf("%d",&height);
    printf("Enter the width :");
    scanf("%d",&width);
    area=height*width;
    printf("area of rectangle is:%.2f",area);

}