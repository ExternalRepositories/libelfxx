#pragma once

#include <cstdint>

struct Ehdr
{
  uint ident_class;
  uint ident_endian;
  uint ident_version;
  uint ident_abi;
  uint ident_abiver;
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