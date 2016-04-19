#ifndef HANE_TYPE_H__
#define HANE_TYPE_H__

/** 
  * the file will make the C++ basic types in different platform unified.
  * and the system using our library need to use the types we defined.
  */

#include "HANE_MakeMacro.h"
#include "HANE_Pre.h"

#include <iostream>
#include <assert.h>
#include <errno.h>
using namespace std;

#ifdef WIN32  // the windows platform
#include <WinSock2.h>
#include <Windows.h>

#else
#include <pthread.h>
#include <unistd.h>
#include <fcntl.h>
#include <time.h>
#include <sys/types.h>
#endif

/// the following lines will define the Data Type
/*************Data Type AREA Begin*************************************************/
typedef unsigned char           UINT8_t;
typedef char                    INT8_t;
typedef unsigned short          UINT16_t;
typedef short                   INT16_t;
typedef unsigned int            UINT32_t;
typedef int                     INT32_t;

typedef void*                   PVOID;

typedef void*                   LPVOID;

typedef signed __int64          INT64_t;
typedef unsigned __int64        UINT64_t;

typedef unsigned long           HASH_t;

#if !defined(BOOL)
typedef int BOOL;
#endif

#if !defined(TRUE)
#define TRUE 1
#endif

#if !defined(FALSE)
#define TRUE 0
#endif


#ifndef NULL
#define NULL ((void*)&0)
#endif
/*************Data Type AREA End***************************************************/



#if defined HANE_HAS_POLL
#include <poll.h>
#endif


#if defined HANE_HAS_EPOLL
#include <sys/epoll.h>
#endif

#if defined HANE_HAS_SELECT
#ifndef WIN32
#include <sys/select.h>
#endif
#endif

#endif // !HANE_TYPE_H__
