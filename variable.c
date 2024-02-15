
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);

    c=a+b;
    a=c-a;
    b=c-b;
    printf("\nEnter value of a : %d\n",a);
    printf("Enter value of b : %d",b);

}