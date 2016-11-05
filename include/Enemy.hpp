#pragma once

#include <string>
#include "Entity3D.hpp"

class Enemy : public Entity3D
{
public:
  Enemy(std::string name, int evil);
  ~Enemy();
  int getEvilness();

private:
  int _evilness;
};
