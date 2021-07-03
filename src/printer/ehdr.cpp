#include <libelfxx/ehdr.hpp>
std::ostream &operator<<(std::ostream &st, const Ehdr &hdr)
{
  st << "EHDR";
}