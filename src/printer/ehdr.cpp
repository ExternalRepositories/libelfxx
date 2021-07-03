#include <libelfxx/ehdr.hpp>
#include <iomanip>

std::ostream &operator<<(std::ostream &st, const Ehdr &hdr)
{
  auto flags = st.flags();

  st.fill('0');
  st << std::hex;

  st << "Elf header" << std::endl;
  st << "  ELF Identifier" << std::endl;
  st << "    abi        : " << std::setw(4) << hdr.ident.abi << std::endl;
  st << "    abi version: " << std::setw(2) << (int)hdr.ident.abiver << std::endl;
  if (hdr.ident.endian == Endian::Big)
    st << "    Endian     : Big" << std::endl;
  else
    st << "    Endian     : Little" << std::endl;
  if (hdr.ident.classtype == ClassType::class32)
    st << "    class      : 32bit" << std::endl;
  else
    st << "    class      : 64bit" << std::endl;
  st << std::setw(8);
  st.fill('0');
  st << "  Section header informations" << std::endl;
  st << "    offset   : " << (uint)hdr.e_shoff << std::endl;
  st << "    entrysize: " << (uint)hdr.e_shentsize << std::endl;
  st << "    hdrcount : " << hdr.e_shnum << std::endl;
  st << "  Segment header informations" << std::endl;
  st << "    offset   : " << (uint)hdr.e_phoff << std::endl;
  st << "    entrysize: " << (uint)hdr.e_phentsize << std::endl;
  st << "    hdrcount : " << hdr.e_phnum << std::endl;
  st << "  type     : " << (uint)hdr.e_type << std::endl;
  st << "  machine  : " << (uint)hdr.e_machine << std::endl;
  st << "  version  : " << (uint)hdr.e_version << std::endl;
  st << "  entry    : " << (uint)hdr.e_entry << std::endl;
  st << "  flags    : " << (uint)hdr.e_flags << std::endl;
  st << "  ehsize   : " << (uint)hdr.e_ehsize << std::endl;
  st << "  shstrndx : " << (uint)hdr.e_shstrndx << std::endl;

  st.flags(flags);
  return st;
}