#include <stdio.h>
#include <math.h>

#define TOL_DERIVADA 1e-12

double f(double);
double df(double);

int main(void) {
  double x0, tol, x, xNext;
  double fx, dfx;
  int i, iterMax;

  printf("Introdueix x0: ");
  scanf("%lf", &x0);
  printf("Introdueix tol: ");
  scanf("%lf", &tol);
  printf("Introdueix iterMax: ");
  scanf("%d", &iterMax);

  x = x0;
  for (i = 1; i <= iterMax; i++) {

    fx = f(x);
    if (fabs(fx) < tol) {
      printf("Zero trobat: %lf\n", x);
      return 0;
    }
    dfx = df(x);
    if (fabs(dfx) < TOL_DERIVADA) {
      printf("Zero de la derivada en x = %lf\nNo podem seguir\n", x);
      return 2;
    }

    xNext = x - fx / dfx;
    if (fabs(xNext - x) < tol) {
      printf("Convergeix a %lf\n", xNext);
      return 0;
    }
    x = xNext;
  }

  printf("Assolit el màxim d'iteracions\n");
  return 1;
}
