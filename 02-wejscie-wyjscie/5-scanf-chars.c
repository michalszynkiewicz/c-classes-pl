#include <stdio.h>

int main() {
	char string[4096];
	unsigned char ch;
	printf("pojedynczy znak: ");
	scanf("%c", &ch); printf("podano: '%c'\n", ch);

	printf("5 znaków: ");
	scanf(" %5c", string); printf("podano: '%s'\n", string);

	printf("ciąg znaków do znaku końca pliku lub białego znaku: ");
	scanf("%s", string); printf("podano: '%s'\n", string);
	
	
	return 0;
}
