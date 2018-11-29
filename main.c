#include "io.h"
#include "sort.h"

int main(void)
{
    unsigned int count;

    scanf("%u", &count);

    int * array = malloc(count * sizeof(int));

    getValues(array, count);

    quickSort(array, 0, count - 1);

    printValues(array, count);


    return 0;
}
