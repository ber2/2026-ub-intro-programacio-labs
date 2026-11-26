#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void omplir(int, int*);

void printa(int, int*);

int main(void) {
  int n, *u, i, j;
  int restants, nou;
  srand(time(NULL));
  scanf("%d", &n);

  u = (int*) malloc(n * sizeof(int));
  if (u == NULL) {
    printf("malloc error\n");
    return 1;
  }

  omplir(n, u);
  printf("Després d'omplir:\n");
  printa(n, u);

  restants = n - n /2;

  for (i = 0; i < restants; i++) {
    scanf("%d", &nou);
    for (j = n/2 + i; j >= 0; j--) {
      u[j+1] = u[j];
      if (u[j - 1] < nou || j == 0) {
        u[j] = nou;
        break;
      }
    }
  }

  printf("Afegits nombres:\n");
  printa(n, u);
  free(u);
  return 0;
}

void omplir(int n, int *u) {
  int m = n / 2;
  int i;

  u[0] = rand() % 10 - 5;
  for (i = 1; i < m; i++) {
    u[i] = u[i-1] + rand() % 10;
  }
}

void printa(int n, int *u) {
  int i;
  printf("(%d", u[0]);
  for (i = 1; i < n; i++) {
    printf(", %d", u[i]);
  }
  printf(")\n");
}
