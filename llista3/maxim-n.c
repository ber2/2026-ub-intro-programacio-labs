#include <stdio.h>

double maxim(double, double);

int main(void) {
  int n, i;
  double x, maximCalculat;

  printf("Introdueix n: ");
  scanf("%d", &n);
  if (n <= 0) {
    printf("\nError: n ha de ser positiu.\n");
    return 1;
  }

  printf("Introdueix els %d nombres: ", n);
  scanf("%lf", &x);
  maximCalculat = x;

  for (i = 1; i < n; i++) {
    scanf("%lf", &x);
    maximCalculat = maxim(maximCalculat, x);
  }

  printf("El màxim és: %lf\n", maximCalculat);

  return 0;
}

double maxim(double a, double b) {
  if (a >= b) {
    return a;
  }
  return b;
}
