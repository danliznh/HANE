#ifndef HANE_PRE_H__
#define HANE_PRE_H__

/**
  * this file to adapter the platform, we are support the windows,
  * IBM AIX, Linux(especially SuSE), SUN Solaris, HP Unix  and so on.
  * and only support the C++ compiler.
  */
#define HANE_LACKS_PRAGMA_ONCE 1

// the windows platform
#ifdef WIN32

#elif defined(Linux) || defined(linux)|| defined(__linux) || \
	defined(SuSE) || defined(suse) || defined(SuSe) // Linux, SuSE platform
#define HANE_LINUX
#elif defined(sun) || defined(SUN) || defined(__sun) || defined(SOLARIS) || \
	defined(SUN_UNIX) || defined(_SUN_UNIX)      // the SUN Unix
#define HANE_SOLARIS
#elif defined(aix) || defined(AIX) || defined(_AIX) || defined(ibm) || defined(IBM)
#define HANE_AIX       // the IBM Unix(AIX)
#elif defined(__hpux) ||defined(hpux) ||defined(HPUX) ||defined(_HPUX) || \
	defined(HP_UX) || defined(_HP_UX)  // the HP Unix
#define HANE_HP_UNIX
#else
#error Sorry, the platform is not support
#endif

#if !defined(__cplusplus) 
#error C++ compiler required 
#endif

#pragma once
#endif // !HANE_PRE_H__
