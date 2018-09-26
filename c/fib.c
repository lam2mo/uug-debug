#include <stdio.h>

int nums[10];

int next (int x, int y)
{
    return x + y;
}

int main ()
{
    int i = 1, j = 1;
    int k = 0;
    int t;
    while (k < 10) {
        nums[k] = i;
        t = next(i, j);
        i = j;
        j = t;
        k++;
    }
    return 0;
}
