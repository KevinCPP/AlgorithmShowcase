#include "TextPrompts.h"

namespace TextPrompts{

    const uint16_t nAlgorithms = 6;

    std::string algorithmList[nAlgorithms] = {
        "F1 - Bubble Sort",
        "F2 - Selection Sort",
        "F3 - Insertion Sort",
        "F4 - QuickSort",
        "F5 - Sieve of Atkin",
        "F6 - under construction"
    };

    std::string greeting = "Algorithm Showcase by Kevin Cosby. Press a function key to demonstrate a listed algorithm:";

    void displayAlgorithmList(){
        for(int i = 0; i < nAlgorithms; i++)
            std::cout << algorithmList[i] << '\n';
    }

    void displayGreeting(){
        std::cout << greeting << '\n';
    }
}
