#include <stdio.h>
#include <math.h>

int main(void) {
  double x;
  double cosxNostre;
  double cosxSeu;
  double nextTerm = 1.;
  double PI = 4*atan(1.);
  double TOL = 1e-6;

  int P = 1000;
  int MAX_TERM = 40;
  double H = 2. * PI / P;
  int i, j;

  printf("%13s\t%13s\t%13s\t%13s\n", "x", "cos serie", "cos(x)", "diferencia");
  for (i = 0; i <= P; i++) {
    x = -PI + i * H;
    nextTerm = 1.;
    cosxNostre = nextTerm;
    for (j = 1; j <= MAX_TERM && fabs(nextTerm) >= TOL; j++) {
      nextTerm = -1 * nextTerm * x * x / (2.*j * (2.*j - 1.));
      cosxNostre += nextTerm;
    }
    cosxSeu = cos(x);
    printf("%13e\t%13e\t%13e\t%13e\n", x, cosxNostre, cosxSeu, cosxNostre - cosxSeu);
  }

  return 0;
}
