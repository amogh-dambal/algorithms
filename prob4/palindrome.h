#include <stdbool.h>

bool is_palindrome(int N) {
    int r = 0, d = 0;
    int n = N;

    while (n > 0) {
        d = n % 10;
        r *= 10;
        r += d;
        n /= 10;
    }

    return (N == r) ? true : false;
}

int largest_palindrome() {
    int i;
    int j;

    int p = -1;
    for (i = 999; i >= 100; i--) {
        for (j = i; j >= 100; j--) {
            int k = i * j;
            if (is_palindrome(k) && k > p) {
                p = k;
            }
        }
    }
    return p;

}
