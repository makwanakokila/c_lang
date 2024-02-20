#include <stdio.h>
int main()
{
    int units;
    float total,bill;
    printf("Enter units number : ");
    scanf("%d", &units);

    if (units <= 50)
    {
        total = units * 0.50;
    }
    else if (units <= 150)
    {
        total = 50 * 0.50 + (units - 100) * 0.75;
    }
    else if (units <= 250)
    {
        total = 50 * 0.50 + 100 * 0.75 + (units - 100) * 1.20;
    }
    else
    {
        total = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    bill = total+total*0.20;
    printf("Total Electricity Bill : %.2f ", bill);
}
