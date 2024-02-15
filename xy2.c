#include<stdio.h>
int main()
{
    int x,y,ans;
    printf("Enter value of x : ");
    scanf("%d",&x);
    printf("Enter value of y : ");
    scanf("%d",&y);

    ans=((x*x)-(y*y)-(2*x*y));
    printf("Answer is : %d",ans);
    
}