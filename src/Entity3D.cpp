#include <iostream>
#include "Entity3D.hpp"


string Entity3D::getPosition()
{
  string str = "X: " + to_string(_x) + ", Y: " + to_string(_y) + ", Z: " + to_string(_z);
  return str;
}

void Entity3D::setPosition(int x, int y, int z)
{
  _x = x;
  _y = y;
  _z = z;
}

string Entity3D::getName() const
{
  return _name;
}

int Entity3D::getHP() const
{
  return _hp;
}
