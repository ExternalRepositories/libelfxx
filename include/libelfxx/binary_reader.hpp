#pragma once
#include <fstream>

class BinaryReader
{
  std::ifstream st;
  int bits;

public:
  BinaryReader(const char fname[]);

  template <typename T, size_t n>
  void read_chars(T dest[n])
  {
    st.read((char *)dest, n);
  }
};