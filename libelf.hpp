#pragma once
#include <fstream>
class Ehdr
{
};
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

public:
  Elf(const char fname[])
      : st(fname, std::ios::binary)
  {
  }
};