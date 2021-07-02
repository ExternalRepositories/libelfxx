#include <libelfxx.h>

Elf::Elf(const char fname[])
    : st(fname, std::ios::binary)
{
}