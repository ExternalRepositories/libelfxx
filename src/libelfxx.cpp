#include <libelfxx.hpp>
#include <iostream>
Elf::Elf(const char fname[])
    : st(fname, std::ios::binary)
{
    char ident[16];
    st.read(ident, 16);
    for (auto &&ch : ident)
    {
        std::cout << (int)ch << std::endl;
    }
}