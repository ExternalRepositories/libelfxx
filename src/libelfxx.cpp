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
    ehdr.ident.classtype = st->read_int(1);
    ehdr.ident.endian = st->read_int(1);
    ehdr.ident.version = st->read_int(1);
    ehdr.ident.abi = st->read_int(2);
    ehdr.ident.abiver = st->read_int(1);
    st->skip(6); // padding
}