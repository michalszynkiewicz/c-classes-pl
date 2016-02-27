#include <stdio.h>

int main() {
	float f; double d; long double ld;
	printf("float: ");
	scanf("%f", &f); printf("podano: %f\n", f);
	printf("double: ");
	scanf("%lf", &d); printf("podano: %lf\n", d);
	printf("long double: ");
	scanf("%Lf", &ld); printf("podano: %Lf\n", ld);
	return 0;
}

