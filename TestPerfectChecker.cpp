#include "PerfectChecker.h"
#include <cassert>
#include <vector>
#include <iostream>

int main() {
    // Test data
    std::vector<int> testNumbers = {6, 28, 496, 12, 20}; 
    std::vector<bool> expectedResults = {true, true, true, false, false};

    int index = 0;
    PerfectChecker::checkPerfectNumbers(testNumbers, [&expectedResults, &index](int number, bool isPerfect) {
        std::cout << "Number " << number << " is " << (isPerfect ? "perfect" : "not perfect") << "." << std::endl;
        assert(isPerfect == expectedResults[index++]); 
    });

    std::cout << "All tests passed successfully." << std::endl;
    return 0;
}
