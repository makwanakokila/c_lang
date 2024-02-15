#include<stdio.h>
int main()
{
    int a;
    printf("Enter value of a:");
    scanf("%d",&a);

    if(a>0)
    {
        printf("possitive : %d",a);
    }
    else if(a==0)
    {
        printf("zero");
    }
    else{
        printf("negative");
    }
}