#include <string>
#include "point.h"

using namespace miit::math;

point::point(double x, double y)
{
  this->x = x;
  this->y = y;
}

double point::extrapolate(double x2) const
{
  return this->y;
}

const double point::getX() const
{
  return this->x;
}

const double point::getY() const
{
  return this->y;
}

const std::string point::toString() const
{
  return "Point[" +
    std::to_string(this->x) + ", " +
    std::to_string(this->y) + "]";
}