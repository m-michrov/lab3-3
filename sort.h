#pragma once

#ifndef LAB3_3_SORT_H
#define LAB3_3_SORT_H

void swapValues(
        int *x,
        int *y);

void shift(
        int *array,
        unsigned int i,
        unsigned int length);

void quickSort(
        int * array,
        int left,
        int right);

void heapSort(
        int * array,
        unsigned int length);


#endif //LAB3_3_SORT_H