#pragma once
#include <fstream>
class Shdr
{
};
class Phdr
{
};
class Elf
{
private:
  class Ehdr
  {
  };

private:
  std::ifstream st;
  Ehdr ehdr;

public:
  Elf(const char fname[])
      : st(fname, std::ios::binary)
  {
  }
};