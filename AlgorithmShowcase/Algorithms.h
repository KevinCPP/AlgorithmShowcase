#ifndef ALGORITHMS_H_INCLUDED
#define ALGORITHMS_H_INCLUDED

#include <stdint.h>

namespace Algorithms{
    void BubbleSort(int* p, uint16_t length);
    void QuickSort(int* p, uint16_t length);
    void InsertionSort(int* p, uint16_t length);
    void SelectionSort(int* p, uint16_t length);
    void FindDuplicate(int* p, uint16_t length);
    void SieveOfAtkin(int stopAfterHowMany);
}

#endif // ALGORITHMS_H_INCLUDED
