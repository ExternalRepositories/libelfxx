#pragma once

#include <cstdint>

struct Ehdr
{
  uint8_t ident_class;
  uint8_t ident_endian;
  uint8_t ident_version;
  uint8_t ident_abiver;
  uint16_t ident_abi;

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