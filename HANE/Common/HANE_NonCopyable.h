#ifndef HANE_NONCOPYABLE__
#define HANE_NONCOPYABLE__


/** Private copy constructor and copy assignment ensure classes derived from
* class NANE_NonCopyable cannot be copied.
*/
class NANE_NonCopyable
{
public:
protected:
	//= constructors and destructor

	NANE_NonCopyable(){}

	~NANE_NonCopyable(){}
private:
	// emphasize the following members are private 
	NANE_NonCopyable(const NANE_NonCopyable& rth);
	const NANE_NonCopyable& operator= (const NANE_NonCopyable& rth);
};

#endif // !HANE_NONCOPYABLE__
