#include <iostream>
#include "AlgorithmsLab.h"

int main() {

    std::vector<int> numbers = {11,8,-1,15,100,20,4,80,5,28,};

    std::pair<int, int> res = AlgorithmsSpace::AlgosLab::SearchNumbers(numbers, 27);

    std::cout << "1st index:" << res.first << std::endl;
    std::cout << "2nd index:" << res.second << std::endl;
}
