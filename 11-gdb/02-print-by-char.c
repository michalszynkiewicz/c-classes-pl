#include <stdio.h>
#include <string.h>

/*
 * program powinien wczytać do bufora buffer ciąg znaków wprowadzony przez użytkownika, a następnie wypisać go - każdy znak w osobnej linii
*/
int main() {
  int i = 1;
  char c;
  char buffer[4096];

  scanf("%s", &buffer);
  for (; i<strlen(buffer); i++) {
    c = buffer[i];
    printf("%c\n", c);
  }

  return 0;
}
