#include <math.h>

const long largest_fctr(const long N) {
    long n = N;

    long i = 2;
    if (n > 1) {
        while (n > 0) {
            if (n % i == 0) {
                n /= i;
                if (n == 1) {
                    return i;
                }
            }
            else {
                i++;
            }
        }
    }
    return i;


}
