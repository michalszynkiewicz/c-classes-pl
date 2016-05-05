#include <stdio.h>

int main() {
	int i,r,n;
	r = scanf("%d%n", &i, &n);
	printf("scanf result: %d wczytano liczbę: %d liczba wczytanych znaków: %d\n", r, i, n);
}
