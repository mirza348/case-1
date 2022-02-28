#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int lower = 1, upper = 6, count = 10;
    double x, y;

    srand(time(0));

    printf("The random points are: ");
    for (int i = 0; i < count; i++) {
        int x  = (rand() % (upper - lower + 1)) + lower;
        int y = (rand() % (upper - lower + 1)) + lower;
        printf("%d,""%d ", x,y);
    }

    return 0;
}