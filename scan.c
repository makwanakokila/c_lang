#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter value of n:");
    scanf("%d",&n);
    do{
        if(i%2==0)
        {
            printf("%d\t",i);
        }
        i++;
    }
    while(i<=n);
}