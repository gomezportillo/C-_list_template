#include "ListException.hpp"

ListException::ListException(const std::string &msg): _message(msg) {}

const std::string ListException::what() const
{
  return _message;
}
