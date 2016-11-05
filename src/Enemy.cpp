#include "Enemy.hpp"

Enemy::Enemy(std::string name, int evil) {
  _name = name;
  _evilness = evil;
}

Enemy::~Enemy() {}

int Enemy::getEvilness()
{
  return _evilness;
}
