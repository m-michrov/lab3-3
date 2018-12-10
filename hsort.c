#include "sort.h"

void sift(
        int *array,
        unsigned int i,
        unsigned int length)
{
    unsigned int max_child;

    while (i * 2 + 1 < length) {

        if ((i * 2 + 1 == length - 1) || (array[i * 2 + 1] > array[i * 2 + 2]))
            max_child = i * 2 + 1;

        else
            max_child = i * 2 + 2;

        if (array[i] < array[max_child]) {
            swapValues(&array[i], &array[max_child]);
            i = max_child;
        }

        else
            break;
    }
}

void heapSort(
        int * array,
        unsigned int length)
{
    for (int i = length / 2 - 1; i >= 0; i--) {
        sift(array, (unsigned int) i, length);
    }

    for (int i = length - 1; i > 0; i--) {
        swapValues(&array[0], &array[i]);
        sift(array, 0, (unsigned int) i);
    }
}
