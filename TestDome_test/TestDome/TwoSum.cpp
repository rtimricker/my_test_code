
/*
Write a function that, when passed a list and a target sum, returns, efficiently with respect to time used, two distinct zero-based indices of any two of the numbers, whose sum is equal to the target sum. If there are no two numbers, the function should return (-1, -1).

For example, findTwoSum({ 3, 1, 5, 7, 5, 9 }, 10) should return a std::pair<int, int> containing any of the following pairs of indices:

    0 and 3 (or 3 and 0) as 3 + 7 = 10
    1 and 5 (or 5 and 1) as 1 + 9 = 10
    2 and 4 (or 4 and 2) as 5 + 5 = 10

*/

#include <stdexcept>
#include <iostream>
#include <vector>
#include <utility>

std::pair<int, int> findTwoSum(const std::vector<int>& list, int sum)
{
    throw std::logic_error("Waiting to be implemented");
}

#ifndef RunTests
int main()
{
    std::vector<int> list = {3, 1, 5, 7, 5, 9};
    std::pair<int, int> indices = findTwoSum(list, 10);
    std::cout << indices.first << '\n' << indices.second;
}
#endif
