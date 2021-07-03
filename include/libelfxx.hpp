#pragma once
#include <fstream>
#include "libelfxx/ehdr.hpp"
#include <memory>
class BinaryReader;

class Shdr
{
};
class Phdr
{
};
class Elf
{
private:
  std::shared_ptr<BinaryReader> st;
  Ehdr ehdr;

  void read_ehdr();

public:
  Elf(const char fname[]);
};