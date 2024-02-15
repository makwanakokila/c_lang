#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a value of the first numbe:");
    scanf("%d",&a); 
    printf("Enter a value of the second number:");
    scanf("%d",&b);

    if(a<b)
    {
       printf("The minimum value is:%d",a);
    }
    else
    {
        printf("The minimum value is:%d",b);
    }

}