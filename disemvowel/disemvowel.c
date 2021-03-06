#include <stdlib.h>
#include <string.h>

#include "disemvowel.h"

// takes a char check if it is a vowel
int check_vowel(char c) {
  switch(c){
  case 'A':
  case 'a':
  case 'E':
  case 'e':
  case 'I':
  case 'i':
  case 'O':
  case 'o':
  case 'U':
  case 'u':
    return 1;
  default:
    return 0;
  }
}

// takes a sequence of chars and return a sequence of chars that does not contain vowels
char *disemvowel(char *str) {
  char *modline;
  int i, j = 0;

  // creating an target char sequence as output
  modline = (char*) calloc((strlen(str) + 1), sizeof (modline));
  for (i = 0; str[i] !='\0'; i++) {
    if (check_vowel(str[i]) == 0) {
      modline[j] = str[i];
      j++;
    }
  }
  modline[j] = '\0';
  return modline;
}

