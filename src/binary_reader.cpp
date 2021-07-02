#include <libelfxx/binary_reader.hpp>

BinaryReader::BinaryReader(std::string fname)
    : st(fname, std::ios::binary)
{
}