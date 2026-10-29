
double f(double x) {
  return x*x*x*x*x*x - x - 1.0;
}

double df(double x) {
  return 6.0 * x*x*x*x*x - 1.0;
}
