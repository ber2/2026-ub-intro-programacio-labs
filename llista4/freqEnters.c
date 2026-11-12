#include <stdio.h>

#define N 11

int inputEnter(void);

int main(void) {
  int v[N];
  int i, d = 0;

  for (i = 0; i <= 10; i++) {
    v[i] = 0;
  }

  d = inputEnter();
  while (d != -1) {
    v[d]++;
    d = inputEnter();
  }

  printf("Taula de freqüències:\n\n");
  printf("N\tfreq\n");
  printf("---\n");

  for (i = 0; i <= 10; i++) {
    printf("%d\t%d\n", i, v[i]);
  }

  return 0;

}

int inputEnter(void) {
  int d;
  printf("Introdueix un nombre: ");
  scanf("%d", &d);
  if (-1 <= d && d <= 10) {
    return d;
  }
  printf("El nombre ha de ser entre 0 i 10 ambdós inclosos\n");
  return inputEnter();
}
