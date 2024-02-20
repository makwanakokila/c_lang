#include<stdio.h>
int main()
{
    int i,n,fact=1;
     printf("Enter value of n : ");
     scanf("%d",&n);
     for(i=1;i<=5;i++)
     {
        fact=fact*i;
     }
    printf("Factorial of %d is: %d",n,fact);
}