#include "io.h"
#include "sort.h"

int main(void)
{
    unsigned int count;

    scanf("%u", &count);

    int * array = malloc(count * sizeof(int));

    getValues(array, count);

    heapSort(array, count);

    printValues(array, count);


    return 0;
}
