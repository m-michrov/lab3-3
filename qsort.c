#include "sort.h"

void swapValues(
        int *x,
        int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}

void quickSort(
        int * array,
        int left,
        int right)
{
    if (left < right) {

        int i = left,
            j = right;

        int pivot = array[(left + right) / 2];

        while (1) {
            while (array[i] < pivot)
                i++;

            while (array[j] > pivot)
                j--;

            if (i > j)
                break;

            if (array[i] > array[j])
                swapValues(&array[i], &array[j]);

            i++;
            j--;
        }

        if (i < right)
            quickSort(array, i, right);
        if (j > left)
            quickSort(array, left, j);

    }
}
