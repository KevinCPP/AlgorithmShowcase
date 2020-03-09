#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>
#include <time.h>
#include <conio.h>

#include "TextPrompts.h"
#include "Algorithms.h"

using namespace std;

const int arrlen = 3000;
int arr[arrlen];

void randomizearr(int* p, uint16_t len);
void printarr(int* p, uint16_t len);

int main()
{
    TextPrompts::displayGreeting();
    TextPrompts::displayAlgorithmList();

    srand(time(NULL));

    randomizearr(arr, arrlen);

    while(true){
        if(GetAsyncKeyState(VK_F1)){
            printarr(arr, arrlen);
            Algorithms::BubbleSort(arr, arrlen);
            std::cout << "\n\ndone\n\n";
            printarr(arr, arrlen);
            break;
        }
        else if(GetAsyncKeyState(VK_F2)){
            printarr(arr, arrlen);
            Algorithms::SelectionSort(arr, arrlen);
            std::cout << "\n\ndone\n\n";
            printarr(arr, arrlen);
            break;
        }
        else if(GetAsyncKeyState(VK_F3)){
            printarr(arr, arrlen);
            Algorithms::InsertionSort(arr, arrlen);
            std::cout << "\n\ndone\n\n";
            printarr(arr, arrlen);
            break;
        }
        else if(GetAsyncKeyState(VK_F4)){
            printarr(arr, arrlen);
            Algorithms::QuickSort(arr, arrlen);
            std::cout << "\n\ndone\n\n";
            printarr(arr, arrlen);
            break;
        }
        else if(GetAsyncKeyState(VK_F5)){
            Algorithms::SieveOfAtkin(50000);
            break;
        }
    }

    while(!GetAsyncKeyState(VK_ESCAPE)){

    }
}

void randomizearr(int* p, uint16_t len){
    for(int i = 0; i < len; i++){
        p[i] = (rand() % 10000);
    }
}

void printarr(int* p, uint16_t len){
    for(int i = 0; i < len; i++){
        std::cout << p[i] << ", ";
    }
    std::cout << "\n";
}
