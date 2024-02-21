#include<stdio.h>
int main()
{
    int i,n,last,frist,sum;
    printf("Enter value of n:");
    scanf("%d",&n);
    last=n%10;
    do
    {
        n=n/10;
    } while (n>=10);
    frist=n;
    sum=frist+last;
    printf("sum of fristdigit and lastdigit : %d",sum);
    
}