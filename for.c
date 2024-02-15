#include<stdio.h>
int main() {
    float c, fahrenheit;
    printf("the temperature in Celsius: ");
    scanf("%f", &c);

    fahrenheit = (c * 9/5) + 32;

    printf("\nThe temperature in Fahrenheit: %.2f\n", fahrenheit);
}