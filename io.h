#pragma once

#ifndef LAB3_3_IO_H
#define LAB3_3_IO_H

#include <stdio.h>
#include <malloc.h>

void getValues(
        int * array,
        unsigned const int count)
{
    for (unsigned int k = 0; k < count; k++)
        scanf("%d", &array[k]);
}

void printValues(
        int * array,
        unsigned const int count)
{
    for (unsigned int k = 0; k < count; k++)
        printf("%d ", array[k]);
}

#endif //LAB3_3_IO_H
