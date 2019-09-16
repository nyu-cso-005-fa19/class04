#include <stdio.h>

int sort(int x, int y, int* min) {
  if (x <= y) {
    *min = x;
    return y;
  } else {
    *min = y;
    return x;
  }
}

int main() {
  int min;
  int max = sort(1, 3, &min);
  printf("min: %d, max: %d\n", min, max);
  return 0;
}
