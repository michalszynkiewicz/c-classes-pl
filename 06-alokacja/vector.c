#include <stdlib.h>
#include <stdio.h>

int *array;
int size = 0;
int capacity;

void init(int initialCapacity) {
}

void add(int value) {
}

void print();


int main() {
    init(2);
    add(0);
    add(12);
    add(1);
    add(13);
    print(); /* [0, 12, 1, 13] */

    return 0;
}

void print() {
    int i;
    printf("[");
    for (i = 0; i < size; ++i) {
        if (i != 0) {
            printf(", ");
        }

        printf("%d", array[i]);
    }
    printf("]\n");
}
