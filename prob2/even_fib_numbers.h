#include <stdlib.h>

const int fib() {
    const int cap = 4000000;
    const int sz = 256;

    int* f = (int*) malloc(sz * sizeof(int));

    int sum = 0;
    if (f) {
        f[0] = 0;
        f[1] = 1;

        int i = 1;

        while (f[i++] < cap) {
            /* resize */
            if (i >= sz) {
                f = realloc(f, 2 * i * sizeof(int));
            }
            f[i] = f[i - 1] + f[i - 2];

            if (f[i] < cap && f[i] % 2 == 0) {
                sum += f[i];
            }

        }
    }

    free(f);
    return sum;
}
