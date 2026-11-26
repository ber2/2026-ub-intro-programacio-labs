#include <stdio.h>
#include <stdlib.h>


int main(void) {
  double *notes;
  double total = 0.0, mitjana;
  int i, NUM_NOTES, count_sota_mitjana = 0;

  printf("Quantes notes hi ha? ");
  scanf("%d", &NUM_NOTES);

  notes = (double*) malloc(NUM_NOTES * sizeof(double));
  if (notes == NULL) {
    printf("malloc error\n");
    return 1;
  }

  printf("Introdueix notes:\n");

  for (i = 0; i < NUM_NOTES; i++) {
    scanf("%lf", &notes[i]);
    total += notes[i];
  }

  mitjana = total / (double) NUM_NOTES;

  for (i = 0; i < NUM_NOTES; i++) {
    if (notes[i] < mitjana) { count_sota_mitjana++; }
  }

  free(notes);

  printf("Mitjana: %lf\n", mitjana);
  printf("Notes per sota: %d\n", count_sota_mitjana);
  return 0;
}
