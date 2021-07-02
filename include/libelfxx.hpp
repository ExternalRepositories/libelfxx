#pragma once
#include <fstream>
#include "libelfxx/ehdr.hpp"
class Shdr
{
};
class Phdr
{
};
class Elf
{
private:
  std::ifstream st;
  Ehdr ehdr;

public:
  Elf(const char fname[]);
};