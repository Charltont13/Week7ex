#ifndef PERFECT_CHECKER_H
#define PERFECT_CHECKER_H

#include <vector>
#include <functional>

class PerfectChecker {
public:
    
    static void checkPerfectNumbers(const std::vector<int>& numbers, const std::function<void(int, bool)>& resultHandler);
};

#endif 
