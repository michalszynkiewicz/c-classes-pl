#include <stdio.h>

/*
 * Program powinien wczytać liczbę n i wypisać n*n + 2*n + 1;
 */

int main() {
  int n;
  int result;

  scanf("%d", &n);
  result = n * n;
  result += 2*n;
  result += 1;

  printf("%d\n", result);

  return 0;
}
