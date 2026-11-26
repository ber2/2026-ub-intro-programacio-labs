#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 4

int main(void) {
  double **a, **b;
  int i, j;

  a = (double**) malloc(N * sizeof(double*));
  b = (double**) malloc(M * sizeof(double*));
  if (a == NULL || b == NULL) {
    printf("malloc error\n");
    return 1;
  }

  for (i = 0; i < N; i++) {
    a[i] = (double*) malloc(M * sizeof(double));
    b[i] = (double*) malloc(M * sizeof(double));
    if (a[i] == NULL || b[i] == NULL) {
      printf("malloc error\n");
      return 1;
    }
  }

  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++) {
      a[i][j] = (i + 1) * (j + 2);
      b[i][j] = 1.0 / ((double) i + j + 2);
    }
  }
  printf("A:\n");
  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++) {
      printf("%lf\t", a[i][j]);
    }
    printf("\n");
  }

  printf("B:\n");
  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++) {
      printf("%lf\t", b[i][j]);
    }
    printf("\n");
  }

  for (i = 0; i < N; i++) {
    free(a[i]);
    free(b[i]);
  }
  free(a);
  free(b);

  return 0;
}
