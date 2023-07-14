#include <stdio.h>

#define loop(n) for (lines = 1; lines <= n; lines++) {for (count = 1; count <= n - lines; count++) putchar(' ');for (count = 1; count <= 2 * lines - 1; count++) putchar('*');printf("\n");}

int main(void) {
  int count, lines, n;

  printf("Number of lines = ");
  scanf("%d", &n);
  printf("\n");

  loop(n);
}
/*
loop(n) for (lines = 1; lines <= n; lines++) {
            for (count = 1; count <= n - lines; count++) 
                putchar(' ');
            for (count = 1; count <= 2 * lines - 1; count++) 
                  putchar('*');
            printf("\n");
            
            }*/