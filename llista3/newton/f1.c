#include <math.h>

double f(double x) {
  return x*x*x - 10.0 * sin(x);
}

double df(double x) {
  return 3.0 * x*x - 10.0 * cos(x);
}
