#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    i=n;
    while(i>=1)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
        i--;
    }
}