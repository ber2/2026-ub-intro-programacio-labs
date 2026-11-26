#include <stdio.h>
#include <stdlib.h>

#define N 5001

int main(void) {
  int *xs;
  int i, j;

  xs = malloc(N * sizeof(int));
  if (xs == NULL) {
    printf("malloc error\n");
    return 1;
  }

  for (i = 0; i < N; i++) {
    xs[i] = i;
  }

  for (i = 2; i < N; i++) {
    if (xs[i] != 0) {
      printf("%d\t", xs[i]);
    }
    j = 2 * i;
    while (j < N) {
      xs[j] = 0;
      j += i;
    }
  }

  free(xs);
  return 0;

}
