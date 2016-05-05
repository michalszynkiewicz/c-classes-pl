#include <stdio.h>

int main() {
	int i;
	char s[4097];
	printf("Proszę podać kilka liczb całkowitych, a następnie zakończyć znakiem końca pliku (w linuksie Ctrl+D)\n");
	while (scanf("%d", &i) != EOF) {
		printf("wczytano: %d\n", i);
	}
	printf("osiągnięto koniec pliku\n");
	
	printf("Proszę podać kilka linii tekstu i zakończyć znakiem końca pliku\n");
	while (fgets(s, 4096, stdin) != NULL) {
                printf("wczytano: %s\n", s);
        }
        printf("osiągnięto koniec pliku\n");

	return 0;
}
