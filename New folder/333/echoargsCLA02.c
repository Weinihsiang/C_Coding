#include <stdio.h>

int main(int argc, char *argv[]) {
  int count;

  printf("argc = %d\n", argc);

  for (count = 0; count < argc; count++) {
    printf("argv[%d] = %s\n", count, argv[count]);
  }
}
/*
./fileopen afds ad fd s
argc = 5
argv[0] = C:\Users\winni\OneDrive\桌面\C\New folder\333\fileopen.exe
argv[1] = afds
argv[2] = ad
argv[3] = fd
argv[4] = s
*/