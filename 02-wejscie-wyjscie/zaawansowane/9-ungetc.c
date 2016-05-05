#include <stdio.h>

int main() {
	int i;
	ungetc('1', stdin);
	printf("podaj liczbę: ");
	scanf("%d", &i);
	printf("wczytana wartość: %d\n", i); /* jedynka zostanie dodana na początku podanej liczby */ 
	return 0;
}
