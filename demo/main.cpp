#include <iostream>
#include "math.hpp"

using namespace miit::math;

int main()
{
    dot startDot = dot(2, 3);

    std::cout << startDot.extrapolate(1) << std::endl;
    std::cout << startDot << std::endl;

    return 0;
}