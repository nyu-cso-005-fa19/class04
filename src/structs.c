#include <stdio.h>

struct Pair {
  int fst;
  int snd;
};

void set_first(struct Pair* pair, int new_fst) {
  pair->fst = new_fst;
}

int main() {
  struct Pair p = { 0 , 0 };
  printf("before: p.fst: %d, p.snd: %d\n", p.fst, p.snd);
  set_first(&p, 1);
  printf("after:  p.fst: %d, p.snd: %d\n", p.fst, p.snd);
  return 0;
}
