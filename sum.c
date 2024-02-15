#include<stdio.h>
main()
{
    int a,b,ans;
    printf("enter value of a:");
    scanf("%d",&a); 
    printf("enter value of b:");
    scanf("%d",&b);
    ans=a+b;
    printf("Addition of %d and %d is : %d\n",a,b,ans);
    printf("%d + %d = %d\n\n",a,b,ans);

    ans=a-b;
    printf("Subtraction of %d and %d is : %d\n",a,b,ans);
    printf("%d - %d = %d\n\n",a,b,ans);

    ans=a*b;
    printf("Multiplication of %d and %d is : %d\n",a,b,ans);
    printf("%d * %d = %d\n\n",a,b,ans);

    ans=a/b;
    printf("Division of %d and %d is : %d\n",a,b,ans);
    printf("%d / %d = %d\n\n",a,b,ans);

    ans=a%b;
    printf("Modulo of %d and %d is : %d\n",a,b,ans);
    printf("%d % %d = %d\n\n",a,b,ans);

}
