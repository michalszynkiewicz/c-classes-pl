#include <stdio.h>

void square(... /* przyjmij wskaźnik na zmienną typu long */) {
    /* przypisz do zmiennej wartość jej kwadratu */
}

int main() {
    long a = 3;
    square(...); /* przekaż wskaźnik do a */
    printf("%ld\n", a); /* == 9 */

    return 0;
}
