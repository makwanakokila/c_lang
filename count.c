#include <stdio.h>
int main() {
  int n;
  int i = 0;
  printf("Enter an integer: ");
  scanf("%d", &n);
 
  do {
    n /= 10;
    ++i;
  } while (n != 0);

  printf("Number of digits: %d", i);
}

