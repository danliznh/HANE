#ifndef HANE_RUNNABLE_H__
#define HANE_RUNNABLE_H__


#if !defined (HANE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* HANE_LACKS_PRAGMA_ONCE */

/**
* @class HANE_Runnable
*
* @brief Defines the base class for the "all runnable threads or functions"
* it is a pure virtual class, all runnable classes must inherit it.
*/


class HANE_Runnalbe
{
public:
    // = Initialization and termination methods.

    /// Constructor
    HANE_Runnalbe( );

    /// Destructor
    virtual ~HANE_Runnalbe( );

    virtual int Run( ) = 0;

};





#endif // !HANE_RUNNABLE_H__
