#include <libelfxx.hpp>
#include <libelfxx/binary_reader.hpp>
#include <iostream>
Elf::Elf(const char fname[])
    : st(new BinaryReader(fname))
{
    read_ehdr();
}
void Elf::read_ehdr()
{
    std::string magic;
    st->st.read((char *)magic.c_str(), 4);
    if (magic != "\x7f\x45LF")
    {
        //TODO: warning
    }
    ehdr.ident_class = st->read_int(1);
    ehdr.ident_endian = st->read_int(1);
    ehdr.ident_version = st->read_int(1);
    ehdr.ident_abi = st->read_int(2);
    ehdr.ident_abiver = st->read_int(1);
    st->skip(6); // padding
}