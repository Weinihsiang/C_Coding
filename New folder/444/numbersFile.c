#include <stdio.h>

int main(void) {
  int numbers[50];
  char fname[20];

  int i = 0;
  FILE *file;

  printf(" Input the filename to be opened : ");

  scanf("%s", fname);

  if (file = fopen(fname, "r")) {
    while (fscanf(file, "%d", &numbers[i]) != EOF) {
      i++;
    }
    fclose(file);

    numbers[i] = '\0';

    for (i = 0; numbers[i] != '\0'; i++) 
      printf("%d\n", numbers[i]);
  }

  return 0;
}