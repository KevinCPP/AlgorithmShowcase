#include "Algorithms.h"

namespace Algorithms{
    void BubbleSort(int* p, uint16_t length){
        for(int i = 0; i < length-1; i++){
            for(int j = 0; j < length-i-1; j++){
               if(p[j] > p[j+1]){
                    int tmp = p[j];
                    p[j] = p[j+1];
                    p[j+1] = tmp;
               }
            }
        }
    }
}
