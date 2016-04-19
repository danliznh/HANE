#include "HANE_Addr.h"


// Initializes instance variables.Note that 0 is an unspecified
// protocol family type...

const HANE_Addr HANE_Addr::ANYAddr(-1, -1);

HANE_Addr::HANE_Addr(int type, int size) :
_addr_type(type),
_addr_size(size)
{
}

HANE_Addr::~HANE_Addr(void)
{
}

void *
HANE_Addr::GetAddr(void) const
{
    return 0;
}

void
HANE_Addr::SetAddr(void *, int)
{
}

void
HANE_Addr::BaseSet(int type, int size)
{
    this->_addr_type = type;
    this->_addr_size = size;
}