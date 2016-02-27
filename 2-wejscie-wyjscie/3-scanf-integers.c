#include <stdio.h>

int main() {
	int i;
	unsigned int u;

	printf("ósemkowo: "); 
	scanf("%o", &u); printf("podana liczba: %u\n", u);

	printf("szestnastkowo: "); 
	scanf("%x", &u); printf("podana liczba: %u\n", u);

	printf("dziesiątkowo: "); 
	scanf("%d", &i); printf("podana liczba: %d\n", i);

	printf("szestnastkowo(0x423), ósemkowo(0234) lub dziesiątkowo(231): "); 
	scanf("%i", &i); printf("podana liczba: %d\n", i);
	return 0;
}

