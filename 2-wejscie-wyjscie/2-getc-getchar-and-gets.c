#include <stdio.h>

int main() {
	int c;
	char buffer[4096];
	printf("podaj znak do wczytania przez getc: ");
	c = getc(stdin); /* to samo co getchar() */
	getchar(); /* żeby wczytać znak końca linii ! */
	printf("podany znak: '%c'\n", c);

	printf("podaj ciąg znaków do wczytania przez gets: ");
	gets(buffer); /* przestarzałe - niezalecane - nie ma limitu na ilość wczytywanych znaków! */
	printf("podany ciąg znaków: '%s'\n", buffer);

	printf("podaj ciąg znaków do wczytania przez fgets: ");
	fgets(buffer, 4095, stdin);
	printf("Zwróć uwagę na znak końca linii. Podany ciąg znaków: '%s'\n", buffer);
	
	return 0;
}
