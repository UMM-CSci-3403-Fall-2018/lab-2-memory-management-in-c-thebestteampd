#include <stdio.h>
#include <stdlib.h>

#include "disemvowel.h"

int main(int argc, char *argv[]) {
  char *line;
  size_t size;
  
  size = 100;
  line = (char*) malloc (size + 1);

  while (getline(&line, &size, stdin) > 0) {
    char *disemvoweled;
    disemvoweled = disemvowel(line);
    printf("%s\n", disemvoweled);
    // added free(disemvoweled) to free memory occupied by malloc from disemvowel function
    free(disemvoweled);
  }
  // added free(line) to free memory occupied by malloc
  free(line);
}
