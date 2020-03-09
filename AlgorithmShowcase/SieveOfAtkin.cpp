#include "Algorithms.h"
#include <iostream>

namespace Algorithms{
    void SieveOfAtkin(int stopAfterHowMany){

        if(stopAfterHowMany > 1)
            std::cout << "2, ";
        if(stopAfterHowMany > 2)
            std::cout << "3, ";
        if(stopAfterHowMany > 4)
            std::cout << "5, ";

        const int wheelonesize = 8;
        const int wheeltwosize = 4;
        const int wheelthreesize = 4;

        int wheelone[wheelonesize] = {1, 13, 17, 29, 37, 41, 49, 53};
        int wheeltwo[wheeltwosize] = {7, 19, 31, 43};
        int wheelthree[wheelthreesize] = {11, 23, 47, 59};

        for(int i = 5; i < stopAfterHowMany; i++){
            bool isPrime = false;

            int mod60 = i % 60;

            if(mod60 % 2 == 0 || mod60 % 3 == 0 || mod60 % 5 == 0)
                continue;

            bool wheelonecheck = false;
            bool wheeltwocheck = false;
            bool wheelthreecheck = false;

            for(int f = 0; f < wheelonesize; f++){
                if( mod60 == wheelone[f] ){
                    if(mod60 % 4 == 1){
                        wheelonecheck = true;
                        break;
                    }
                }
            }

            for(int f = 0; f < wheeltwosize; f++){
                if( mod60 == wheeltwo[f] ){
                    if(mod60 % 6 == 1){
                        wheeltwocheck = true;
                        break;
                    }
                }

            }

            for(int f = 0; f < wheelthreesize; f++){
                if( mod60 == wheelthree[f] ){
                    if(mod60 % 12 == 11){
                        wheelthreecheck = true;
                        break;
                    }
                }
            }

            bool equationCheck = false;

            for(int x = 1; x*x < stopAfterHowMany; x++){
                for(int y = 1; y*y < stopAfterHowMany; y++){
                    if(wheelonecheck){
                        if( ((4*x*x) + (y*y)) == i )
                            equationCheck = !equationCheck;
                    }
                    else if(wheeltwocheck){
                        if( ((3*x*x) + (y*y)) == i)
                            equationCheck = !equationCheck;
                    }
                    else if(wheelthreecheck){
                        if( ((3*x*x) - (y*y)) == i)
                            equationCheck = !equationCheck;
                    }
                }
            }

            isPrime = equationCheck;

            if(isPrime)
                std::cout << i << ", ";
        }

    }
}

