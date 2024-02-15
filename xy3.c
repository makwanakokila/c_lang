#include<stdio.h>
int main()
{
    int x,y,ans;
    printf("Enter value of x : ");
    scanf("%d",&x);
    printf("Enter value of y : ");
    scanf("%d",&y);

    ans=((x*x*x)+(y*y*y)+(3*x*x*y)+(3*x*y*y));
    printf("Answer is : %d",ans);
    
}