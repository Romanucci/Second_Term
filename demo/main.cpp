#include <iostream>
#include "line.h"

using namespace miit::math;

int main()
{
    point startPoint(2, 3);

    std::cout << startPoint.extrapolate(1) << std::endl;
    std::cout << startPoint << std::endl;

    return 0;
}