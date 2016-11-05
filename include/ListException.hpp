#pragma once

#include <string>

class ListException
{
public:
  ListException(const std::string &reason);
  const std::string what() const;

private:
  const std::string _message;
};
