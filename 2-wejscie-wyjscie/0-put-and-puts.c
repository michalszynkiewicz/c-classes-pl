#include <stdio.h>

int main() {
        puts("info to print"); /* dodaje znak końca linii */
	fputs("error to print", stderr); /* brak znaku końca linii! */

        putc('c', stdout);
        putc('\n', stdout);
        return 0;
}

