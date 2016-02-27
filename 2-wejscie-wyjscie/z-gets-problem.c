#include <stdio.h>

int main() {
	char s1[3];
	char s2[40];
	puts("wpisz około 40 znaków: ");
	gets(s1);
	printf("s1: '%s' s2: '%s'\n", s1, s2);
	return 0;
}
