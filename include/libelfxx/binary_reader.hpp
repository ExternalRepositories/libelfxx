#pragma once
#include <fstream>
#include <string>

class BinaryReader
{
  std::ifstream st;
  int bits;
  enum Endian
  {
    big,
    little
  } endian;

public:
  BinaryReader(std::string);

  template <typename T, size_t n>
  void read_chars(T (&dest)[n])
  {
    st.read((char *)dest, n);
  }
};