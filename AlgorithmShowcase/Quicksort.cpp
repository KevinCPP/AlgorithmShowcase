#include "Algorithms.h"

namespace Algorithms{

    int part(int* p, int l, int h){
        int pivot = p[h];
        int i = (l-1);

        for(int f = l; f < h; f++){
            if(p[f] < pivot){
                i++;
                int tmp = p[i];
                p[i] = p[f];
                p[f] = tmp;
            }
        }
        int tmp = p[i+1];
        p[i+1] = p[h];
        p[h] = tmp;
        return (i+1);
    }

    void qs(int* p, int l, int h){
        if(l < h){
            int pivot = part(p, l, h);

            qs(p, l, pivot - 1);
            qs(p, pivot + 1, h);
        }
    }

    void QuickSort(int* p, uint16_t length){
        qs(p, 0, length);
    }
}
