#ifndef HANE_MAKE_MACRO_H__
#define HANE_MAKE_MACRO_H__

/**
  * this file defines the macro from make file command,
  * like CPPFLAG= -g -Wall -DHANE_HAS_EPOLL
  */

#if defined(HANE_EPOLL)
#define HANE_HAS_EPOLL
#elif defined(HANE_POLL)
#define HANE_HAS_POLL
#else
#define HANE_HAS_SELECT
#endif

// debug version macro
#if defined(_DEBUG)
#define HANE_DEBUG
#endif


#endif // !HANE_MAKE_MACRO_H__
