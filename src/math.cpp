#include <string>
#include "math.hpp"

using namespace miit::math;

line::line(math::dot left, math::dot right)
{
  this->left = left;
  this->right = right;
}

const dot line::getLeft() const
{
  return this->left;
}

const dot line::getRight() const
{
  return this->right;
}

dot::dot(double x, double y)
{
  this->x = x;
  this->y = y;
}

const double dot::extrapolate(double x2) const
{
  return this->y;
}

const double dot::getX() const
{
  return this->x;
}

const double dot::getY() const
{
  return this->y;
}

const std::string dot::toString() const
{
  return "Dot[" +
    std::to_string(this->x) + ", " +
    std::to_string(this->y) + "]";
}