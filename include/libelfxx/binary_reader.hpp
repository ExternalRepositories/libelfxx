#pragma once
#include <fstream>

class BinaryReader
{
  std::ifstream st;
  int bits;

public:
  BinaryReader(const char fname[]);
};