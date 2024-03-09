#include "PerfectChecker.h"
#include <numeric>
#include <algorithm>
#include <iostream>

void PerfectChecker::checkPerfectNumbers(const std::vector<int>& numbers, const std::function<void(int, bool)>& resultHandler) {
    std::for_each(numbers.begin(), numbers.end(), [&resultHandler](int number) {
        int sum = 1;
        for (int i = 2; i <= number / 2; ++i) {
            if (number % i == 0) {
                sum += i;
            }
        }
        bool isPerfect = (sum == number) && (number != 1); 
        resultHandler(number, isPerfect);
    });
}
