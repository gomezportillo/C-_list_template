#include <iostream>
#include "MyList.hpp"
#include "ListException.hpp"
#include "Entity3D.hpp"
#include "Enemy.hpp"
#include "Player.hpp"

int main ()
{
  MyList<Entity3D> list;

  list.push(Enemy("Enemy1", 1));
  list.push(Player("Player1", "Witcher"));
  list.push(Enemy("Enemy2", 2));
  list.push(Player("Player2", "Warrior"));

  Entity3D aux;
  while (!list.isEmpty())
  {
    aux = list.pop();
    std::cout << aux.getName() << "\n";
  }

  return 0;
}
