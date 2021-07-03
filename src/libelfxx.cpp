#include <libelfxx.hpp>
#include <libelfxx/binary_reader.hpp>
#include <iostream>
#include <cassert>

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
    ehdr.ident.classtype = st->read_int(1) == 1 ? Ehdr::Ident::class32 : Ehdr::Ident::class64;
    ehdr.ident.endian = st->read_int(1) == 1 ? Ehdr::Ident::Endian::Little : Ehdr::Ident::Endian::Big;
    assert(st->read_int(1) == 1);
    ehdr.ident.abi = st->read_int(2);
    ehdr.ident.abiver = st->read_int(1);
    st->skip(6); // padding
    std::cout << ehdr;
}