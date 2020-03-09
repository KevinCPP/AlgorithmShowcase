#include "Algorithms.h"

namespace Algorithms{
    void SelectionSort(int* p, uint16_t length){
        if(length < 1)
            return;

        for(int i = 0; i < length-1; i++){
            int mindex = i;
            for(int k = i+1; k < length; k++){
                if(p[k] < p[mindex])
                    mindex = k;
            }
            int tmp = p[mindex];
            p[mindex] = p[i];
            p[i] = tmp;
        }
    }
}
