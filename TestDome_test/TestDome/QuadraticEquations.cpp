
/*
Implement the function findRoots to find the roots of the quadratic equation: ax2 + bx + c = 0.

The roots of the quadratic equation can be found with the following formula: A quadratic equation.

For example, the roots of the equation 2x2 + 10x + 8 = 0 are -1 and -4.

*/

#include <tuple>
#include <stdexcept>
#include <iostream>
#include <string>

std::pair<double, double> findRoots(double a, double b, double c)
{
    throw std::logic_error("Waiting to be implemented");
}

#ifndef RunTests
int main()
{
    std::pair<double,double> roots = findRoots(2, 10, 8);
    std::cout << "Roots: " + std::to_string(roots.first) + ", " + std::to_string(roots.second);
}
#endif
