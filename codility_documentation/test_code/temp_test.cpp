#include <iostream>

class MathUtils
{
public:
    static double average(int a, int b)
    {
        return a + b / 2;
    }
};

#ifndef RunTests
int main()
{
    std::cout << MathUtils::average(2, 1);
}
#endif