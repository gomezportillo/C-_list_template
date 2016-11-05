#pragma once

#include <string>
#include <stdio.h>

using namespace std;

class Entity3D
{
public:
  virtual string getPosition();
  virtual void setPosition(int x, int y, int z);
  virtual string getName() const;
  virtual int getHP() const;

protected:
  string _name;
  int _hp, _x, _y, _z;
};
