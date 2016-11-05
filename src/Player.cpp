#include "Player.hpp"

Player::Player(std::string name, string my_class) {
  _name = name;
  _class = my_class;
}

Player::~Player() {}

string Player::getClass()
{
  return _class;
}
