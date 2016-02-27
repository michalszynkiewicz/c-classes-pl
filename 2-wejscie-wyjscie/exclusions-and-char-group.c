#include <stdio.h>

int main() {
	char s[4096];
	scanf("%*[a-zA-Z]%[^a-zA-Z\n]", s);
	printf("%s\n", s);
	return 0;
}
