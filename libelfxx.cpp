#include <libelfxx.hpp>

Elf::Elf(const char fname[])
    : st(fname, std::ios::binary)
{
}