#include <iostream>
#include <string>
#include "MyList.hpp"
#include "ListException.hpp"

int main ()
{
  MyList<std::string> listStr;
  MyList<int> listInt;

  listStr.push("Hello");
  listStr.push("world!");

  listInt.push(1);
  listInt.push(2);
  listInt.push(3);

  while (!listStr.isEmpty())
  {
    std::cout << listStr.pop() << "\n";
  }

  while (!listInt.isEmpty())
  {
    std::cout << listInt.pop() << "\n";
  }

  try
  {
    listInt.pop();
  }
  catch (ListException& e)
  {
    std::cout << e.what() << std::endl;
  }

  return 0;
}
