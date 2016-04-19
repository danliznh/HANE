#ifndef HANE_MACRO_DEFINE_H__
#define HANE_MACRO_DEFINE_H__

#include "HANE_Type.h"


inline int get_errno_from_last_error()
{
#ifdef WIN32
    errno = ::GetLastError();
#endif
    return errno;
}

#define SYS_ALLOCATOR_RETURN(POINTER,ALLOCATOR,RET_VAL)         \
do {                                                            \
    POINTER = ALLOCATOR;                                        \
    if (POINTER == 0) { errno = ENOMEM; return RET_VAL; }       \
} while (0)





//////////////////////////////////////////////////////////////////////////
// the socket related begin
inline int get_errno_from_wsa_last_error()
{
#ifdef WIN32
    errno = ::WSAGetLastError();
#endif
    return errno;
}

// the socket related end
//////////////////////////////////////////////////////////////////////////

#endif // !HANE_MACRO_DEFINE_H__
