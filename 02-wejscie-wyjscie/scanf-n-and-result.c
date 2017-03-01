#include <stdio.h>

int main() {
	int i,r,n;
	r = scanf("%d%n", &i, &n);
	printf("wynik scanf: %d wczytano liczbę: %d liczba wczytanych znaków: %d\n", r, i, n);
}
