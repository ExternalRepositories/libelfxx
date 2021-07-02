#include <libelfxx/binary_reader.hpp>

BinaryReader::BinaryReader(const char fname[])
    : st(fname, std::ios::binary)
{
}