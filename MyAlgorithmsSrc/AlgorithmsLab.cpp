#include "AlgorithmsLab.h"

#include <unordered_map>

using namespace AlgorithmsSpace;

std::pair<int, int> AlgosLab::SearchNumbers(const std::vector<int>& numbers, int targetNum)
{
    std::pair<int, int> result = {-1,-1};

    if (numbers.empty()) return result;

    for(size_t i = 0; i < numbers.size(); ++i)
    {
        for (size_t j = i + 1; j < numbers.size(); ++j)
        {
            if (numbers[i] + numbers[j] == targetNum)
            {
                result.first = i;
                result.second = j;
            }
        }
    }

    return result;
}

std::pair<int, int> AlgosLab::SearchNumbersModified(const std::vector<int>& numbers, int targetNum)
{
    if (numbers.empty()) return {-1,-1};

    std::unordered_map<int, int> cachedNumbers;

    for(size_t i = 0; i < numbers.size(); ++i)
    {
        int key = targetNum - numbers[i];
        auto iter = cachedNumbers.find(key);

        if (iter != cachedNumbers.end())
        {
            return {iter->second, static_cast<int>(i)};
        }
        else
        {
            cachedNumbers.try_emplace(numbers[i], static_cast<int>(i));
        }
    }

    return {-1,-1};
}
