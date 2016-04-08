#include <stdio.h>
#include <stdlib.h>

void doSomeWork() {
    long *smallArray = (long*)calloc(10240, sizeof(long)); /* only 80KB! */
    if(smallArray == NULL) {
        fprintf(stderr, "unable to allocate memory\n");
        exit(1);
    }
    smallArray[0] = 12;
}

int main() {
    /* limit max memory to 40M - linux: ulimit -Sv 40000
     how to make it work?*/
    int i;
    for (i = 0; i < 1000; ++i) {
        doSomeWork();
    }
    return 0;
}
