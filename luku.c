#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[0]) {
  int luku = getreadcount();
  printf(1, "Readeja: %d\n", luku);
  exit();
}
