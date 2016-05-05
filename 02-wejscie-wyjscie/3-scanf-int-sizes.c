#include <stdio.h>
/* analogicznie dla i, o, u, x */
int main() {
	char c; short s; int i; long l; long long ll;
	printf("char: ");
	scanf("%hhd", &c); printf("podano: %hhd\n", c);	
	printf("short: ");
	scanf("%hd", &s); printf("podano: %hd\n", s);	
	printf("int: ");
	scanf("%d", &i); printf("podano: %d\n", i);	
	printf("long: ");
	scanf("%ld", &l); printf("podano: %ld\n", l);	
	printf("long long: ");
	scanf("%lld", &ll); printf("podano: %lld\n", ll);	
	return 0;
}
