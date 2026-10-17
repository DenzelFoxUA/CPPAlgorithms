
#ifndef AlgorithmsLab_h
#define AlgorithmsLab_h

#include <vector>

namespace AlgorithmsSpace
{
    class AlgosLab
    {
    public:
        //function returns two indexes of a collection sum of those will be equal to target
        static std::pair<int, int> SearchNumbers(const std::vector<int>& numbers, int targetNum);

        //function returns two indexes of a collection sum of those will be equal to target
        static std::pair<int, int> SearchNumbersModified(const std::vector<int>& numbers, int targetNum);
    };

}

#endif
