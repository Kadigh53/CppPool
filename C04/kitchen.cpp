#include <iostream>

class A
{
public:
	virtual void func (){ std::cout << " class A" << std::endl;}
};

class B : public A
{
public:
	void func (){ std::cout << " class B" << std::endl;}
};

// class C: public B
// {
// public:
// 	void func33 (){ std::cout << " class C" << std::endl;}
// };

// class D: public C
// {
// public:
// 	void func22 (){ std::cout << " class D" << std::endl;}
// };



int main()
{
	B b;
	A *a = &b;

	a->func();

	return 0;
}