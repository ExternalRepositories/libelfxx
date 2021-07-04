#pragma once
#include <fstream>
#include <string>
#include "sys_types.hpp"

class BinaryReader
{
public:
  std::ifstream st;

public:
  ClassType bits;
  Endian endian;

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
  uint64_t read_plat_word();
  void skip(int size);
};