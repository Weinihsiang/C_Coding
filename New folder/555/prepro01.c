#include <stdio.h>

#define area length*width

int length, width; //can be global

int main(void) {
  printf("enter length\n");
  scanf("%d", &length);

  printf("enter width\n");
  scanf("%d", &width);

  printf("The area is %d\n", area);

  return(0);
}