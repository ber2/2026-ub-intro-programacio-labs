#include <stdio.h>
#include <stdlib.h>

int prodpol(int, double*, int, double*, double*);

int main(void) {
  int i, j, d, k, grau;
  double *p, *pk, *aux;

  scanf("%d", &d);
  
  p = (double*) malloc(d * sizeof(double));
  if (p == NULL) {
    printf("malloc error\n");
    return 1;
  }

  for (i=0; i <= d; i++){
    scanf("%lf", &p[i]);
  }

  scanf("%d", &k);

  pk = (double*) malloc(d * k * sizeof(double));
  aux = (double*) malloc(d * k * sizeof(double));
  if (pk == NULL || aux == NULL) {
    printf("malloc error\n");
    return 1;
  }

  grau = prodpol(d, p, d, p, pk);
  for (i = 0; i <= grau; i++) { aux[i] = pk[i]; }

  for (j = 2; j <= k - 1; j++) {
    grau = prodpol(d, p, j*d, aux, pk);
    for (i = 0; i <= grau; i++) { aux[i] = pk[i]; }
  }

  printf("Coeficients de p^k:\n");
  for (i = 0; i <= grau; i++) {
    printf("%lf\t", pk[i]);
  }
  printf("\n");

  free(p);
  free(pk);
  free(aux);
  return 0;
}

int prodpol(int n, double *p, int m, double *q, double *pq) {
  int i, j;

  for (i = 0; i <= n + m; i++) { pq[i] = 0.; }

  for (i = 0; i <= n; i++) {
    for (j = 0; j <= m; j++) {
      pq[i+j] += p[i] * q[j];
    }
  }

  return n + m;
} 
