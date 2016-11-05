#include <iostream>
#include "Enemy.hpp"
#include "Player.hpp"

using namespace std;

int main()
{
  Enemy e = Enemy("Enemy", 2);
  e.setPosition(1, 2, 3);

  cout << e.getName() << "\n";
  cout << e.getPosition() << "\n";
  cout << e.getEvilness() << "\n";

  Entity3D* e3d = &e;
  e3d->getPosition();

  Player p = Player("Friend", "Witcher");
  e.setPosition(4, 5, 6);
  cout << p.getName() << "\n";
  cout << e.getPosition() << "\n";
  cout << p.getClass() << "\n";

  return 0;
}
