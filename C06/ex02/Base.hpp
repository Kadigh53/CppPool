#ifndef BASE_HPP
#define BASE_HPP

class Base
{
private :
public :
	Base();
	Base(const Base& other);
	Base& operator=(const Base& other);
	~Base();
};

#endif
