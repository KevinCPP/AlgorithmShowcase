#include "Algorithms.h"

namespace Algorithms{
    void InsertionSort(int* p, uint16_t length){
        for(int i = 0; i < length; i++){
            int k = p[i];
            int j = i - 1;
            while(j >= 0 && p[j] > k){
                p[j+1] = p[j];
                j--;
            }
            p[j+1] = k;
        }
    }
}
