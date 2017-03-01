#include <stdio.h>

int main() {

	printf("%x\n", 10);  	/* "a"		x - szestnastkowo - małe litery */
	printf("%#X\n", 10); 	/* "0XA" 	X - szestnastkowo, duże litery, # - dodaje prefix 0x */

	printf("%+05d\n", 12); 	/* "+0012"	+ - dodaje znak, 0 - uzupełnij zerami, 5 - wypisz co najmniej pięć znaków */
	printf("%-5d\n", 12);	/* "12   "	- - wyrównaj do lewej, 5 - co najmniej 5 znaków */
	printf("%5d\n", 12);	/* "   12"	- powyższe z wyrównaniem do prawej */
	return 0;
}
