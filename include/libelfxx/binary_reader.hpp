#pragma once
#include <fstream>
#include <string>

class BinaryReader
{
public:
  std::ifstream st;

public:
  enum Bits
  {
    CLASS32,
    CLASS64
  } bits;
  enum Endian
  {
    big,
    little
  } endian;

public:
  BinaryReader(std::string);

  template <typename T, size_t N>
  void read_chars(T (&dest)[N])
  {
    st.read((char *)dest, N);
  }

  uint64_t read_int(int size);
  uint64_t read_word();
  uint32_t read_half();
  void skip(int size);
};