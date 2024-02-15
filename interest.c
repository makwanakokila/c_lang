#include<stdio.h>
int main()
{
    int p,r,t,simple_interest;
    printf("Enter the principal : ");
    scanf("%d",&p);
    printf("Enter the rate : ");
    scanf("%d",&r);
    printf("Enter the time : ");
    scanf("%d",&t);

    simple_interest=(p*r*t)/100;
    printf("simple_interest is : %d",simple_interest);
}