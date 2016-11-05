#pragma once

#include <string>
#include "Entity3D.hpp"

using namespace std;

class Player : public Entity3D
{
public:
  Player(string name, string my_class);
  ~Player();
  string getClass();

private:
  string _class;
};
