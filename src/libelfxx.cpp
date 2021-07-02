#include <libelfxx.hpp>
#include <libelfxx/binary_reader.hpp>
#include <iostream>
Elf::Elf(const char fname[])
    : st(new BinaryReader(fname))
{
    char ident[16];
    st->read_chars(ident);
    for (auto &&ch : ident)
    {
        std::cout << (int)ch << std::endl;
    }
}