#include <stdio.h>

void  smallestnu() {
  int a, b, c, d, smallest;

  printf("\n\nEnter four integers: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);

  smallest = a;
  if (b < smallest) {
    smallest = b;
  }
  if (c < smallest) {
    smallest = c;
  }
  if (d < smallest) {
    smallest = d;
  }

  printf("Smallest number: %d\n\n", smallest);

 // return 0;
}
