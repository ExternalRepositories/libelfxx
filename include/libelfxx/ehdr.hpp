#pragma once

#include <cstdint>

struct Ehdr
{
  struct Ident
  {
    uint8_t classtype;
    uint8_t endian;
    uint8_t version;
    uint8_t abiver;
    uint16_t abi;
  } ident;

  uint e_type;
  uint e_machine;
  uint e_version;
  uint e_entry;
  uint e_phoff;
  uint e_shoff;
  uint e_flags;
  uint e_ehsize;
  uint e_phentsize;
  uint e_phnum;
  uint e_shentsize;
  uint e_shnum;
  uint e_shstrndx;
};