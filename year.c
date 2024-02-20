#include<stdio.h>
int main()
{
    int frist,last,i;
    printf("Enter frist number :");
    scanf("%d",&frist);
    printf("Enter last number :");
    scanf("%d",&last);
    i=frist;
    while(i<=last)
    {
        if(i%4==0)
        {
            printf("%d\n",i);
        }
        i++;
    }

}