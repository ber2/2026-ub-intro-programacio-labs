#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *xs;
  int i, j, N;

  printf("Límit del garbell? ");
  scanf("%d", &N);

  xs = (char*) malloc(N * sizeof(char));
  if (xs == NULL) {
    printf("malloc error\n");
    return 1;
  }

  for (i = 0; i < N; i++) {
    xs[i] = '1';
  }

  for (i = 2; i < N; i++) {
    if (xs[i] != '0') {
      printf("%d\t", i);
    }
    j = 2 * i;
    while (j < N) {
      xs[j] = '0';
      j += i;
    }
  }

  free(xs);
  return 0;

}
