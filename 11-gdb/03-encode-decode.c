#include <stdio.h>
#include <string.h>

/*
 * program powinien wczytać ze stdin tekst t oraz liczbę n, 
 * następnie zakodować tekst "przesuwając" jego elementy o n,
 * a później odkodować w podobny sposób i wypisać na ekran
 *
 * Tekst składa się tylko z liter. Program zakłada że litera + n nie przekroczy zakresu char.
 *
 * Sprawdź działanie programu np dla:
 * dfasvzxcv12 12
 */

int n;

void encode(char buffer[]){
  for (int i=0; i<=strlen(buffer); i++) {
    buffer[i] = buffer[i] + n;
  }
}

void decode(char buffer[]) {
  for (int i=0; i<=strlen(buffer); i++) {
    buffer[i] = buffer[i] - n;
  }
}

int main() {
  char buffer[4096];
  scanf("%s", buffer);
  scanf("%d", &n);
  encode(buffer);
  decode(buffer);
  printf("%s", buffer);

  return 0;
}
