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
    ehdr.ident.classtype = (ClassType)st->read_int(1);
    ehdr.ident.endian = (Endian)st->read_int(1);
    assert(st->read_int(1) == 1); // version
    ehdr.ident.abi = st->read_int(2);
    ehdr.ident.abiver = st->read_int(1);
    st->skip(6); // padding
    std::cout << st->st.tellg() << std::endl;

    st->bits = ehdr.ident.classtype;
    st->endian = ehdr.ident.endian;

    ehdr.e_type = st->read_half();
    ehdr.e_machine = st->read_half();
    ehdr.e_version = st->read_word();
    ehdr.e_entry = st->read_plat_word();
    ehdr.e_phoff = st->read_plat_word();
    ehdr.e_shoff = st->read_plat_word();
    ehdr.e_flags = st->read_word();
    ehdr.e_ehsize = st->read_half();
    ehdr.e_phentsize = st->read_half();
    ehdr.e_phnum = st->read_half();
    ehdr.e_shentsize = st->read_half();
    ehdr.e_shnum = st->read_half();
    ehdr.e_shstrndx = st->read_half();
    std::cout << ehdr;
}