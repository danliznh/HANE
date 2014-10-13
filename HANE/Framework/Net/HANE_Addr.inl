
// Inline of HANE_Addr.h

inline bool
HANE_Addr::operator == (const HANE_Addr &sap) const
{
    return (sap._addr_type == this->_addr_type &&
        sap._addr_size == this->_addr_size);
}

inline bool
HANE_Addr::operator != (const HANE_Addr &sap) const
{
    return (sap._addr_type != this->_addr_type ||
        sap._addr_size != this->_addr_size);
}

/// Return the size of the address.
inline int 
HANE_Addr::GetSize() const
{
    return this->_addr_size;
}

/// Sets the size of the address.
inline void HANE_Addr::SetSize(int size)
{
    this->_addr_size = size;
}

/// Return the type of the address.
inline int
HANE_Addr::GetType() const
{
    return this->_addr_type;
}

/// Sets the type of the address.
inline void HANE_Addr::SetType(int type)
{
    this->_addr_type = type;
}

inline  HASH_t
HANE_Addr::Hash(void) const
{
    return 0;
}