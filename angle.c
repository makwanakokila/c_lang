#include<stdio.h>
int main()
{
    int triangle=180;
    int First_angle,second_angle,third_angle;
    printf("Enter Frist angle : ");
    scanf("%d",&First_angle);
    printf("Enter second angle : ");
    scanf("%d",&second_angle);

    third_angle=triangle-(First_angle+second_angle);
    printf("third angle : %d",third_angle);
}