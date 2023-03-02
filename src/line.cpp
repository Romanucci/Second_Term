#include <string>
#include "line.h"

using namespace miit::math;

line::line(math::point left, math::point right)
{
  this->left = left;
  this->right = right;
}

const point line::getLeft() const
{
  return this->left;
}

const point line::getRight() const
{
  return this->right;
}