#include <iostream>

int main()
{
	std::cout << (1/0);
}

// class t
// {
// 	int n;
// public :
// 	t(): n(0){}
// 	t(int k) : n(k){}
// 	t&	operator+( const t& other)
// 	{
// 		std::cout << n << std::endl;
// 		n = n + other.n;
// 		return *this;
// 	}
// 	void print_(){std::cout << n << std::endl;}
// };

// int main()
// {
// 	t a(1);
// 	t b(2);
// 	t d(3);
// 	t c;
// 	c = a + b + d;
// 	c.print_();
// }