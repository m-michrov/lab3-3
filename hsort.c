#include "sort.h"

void shift(
        int *array,
        int i,
        unsigned int length)
{
    int max_child;

    while (i * 2 + 1 < (int)length) {

        if ((i * 2 + 1 == (int)length - 1) || (array[i * 2 + 1] > array[i * 2 + 2]))
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
        shift(array, i, length);
    }

    for (int i = length - 1; i > 0; i--) {
        swapValues(&array[0], &array[i]);
        shift(array, 0, i);
    }
}