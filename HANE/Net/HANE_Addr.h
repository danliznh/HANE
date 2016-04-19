#ifndef HANE_ADDR_H__
#define HANE_ADDR_H__

#include "../Platform/HANE_Type.h"

#if !defined (HANE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* HANE_LACKS_PRAGMA_ONCE */


/**
* @class HANE_Addr
*
* @brief Defines the base class for the "address family independent"
* address format.
*/
class HANE_Addr
{
public:
    // = Initialization and termination methods.
    /// Initializes instance variables.
    HANE_Addr(int type, int size);

    virtual ~HANE_Addr();

    // Get/set the size of the address

    /// Return the size of the address.
    int GetSize() const;

    /// Sets the size of the address.
    void SetSize(int size);


    // = Get/set the type of the address.

    /// Get the type of the address.
    int GetType() const;

    /// Set the type of the address.
    void SetType(int type);


    /// Return a pointer to the address.
    virtual void *GetAddr(void) const;

    /// Set a pointer to the address.
    virtual void SetAddr(void *, int len);


    // = Equality/inequality tests
    /// Check for address equality.
    bool operator == (const HANE_Addr &sap) const;

    /// Check for address inequality.
    bool operator != (const HANE_Addr &sap) const;

    /// Initializes instance variables.
    void BaseSet(int type, int size);

    /// Returns a hash value.  This should be overwritten by a subclass
    /// that can produce a better hash value.
    virtual HASH_t Hash(void) const;

    /// Wild-card address.
    static const HANE_Addr ANYAddr;
protected:
    /// e.g., AF_UNIX, AF_INET, AF_SPIPE, etc.
    int _addr_type;

    /// Number of bytes in the address.
    size_t _addr_size;

private:
    
};

#include "HANE_Addr.inl"

#endif // !HANE_ADDR_H__
