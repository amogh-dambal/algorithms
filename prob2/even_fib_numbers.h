#include <stdlib.h>

const int fib() 
{
    const int N = 4000000;

    int size = 256;
    int* f = (int*)malloc(size * sizeof(int));

    if (f)
    {
        f[0] = 0;
        f[1] = 1;

        int i = 1;
        while (f[i] <= N) 
        {
            ++i;
            f[i] = f[i-1] + f[i-2];

            if (i >= size) 
            {
                f = (int*)realloc(f, size * 2 * sizeof(int));
                size *= 2;
            } 
        }
    }

    int sum;
    int i;
    for (i = 0; i < size; i++)
    {
        if (f[i] % 2 == 0)
        {
            sum += f[i];
        }
        
    }
    free(f);
    return sum;
}