#include <stdint.h>
#include <stdbool.h>

typedef unsigned long foo;

typedef struct {
    uint32_t id;
    foo x;
    float y;
    bool visited;
    int *p;
} point_t;

int main ()
{
    int y = 8;
    point_t x = { .id = 1,
                  .x  = 2.0,
                  .y  = 3.5,
                  .visited = false };
    x.visited = true;
    x.p = &y;
    *(x.p) = 42;
    return 0;
}
