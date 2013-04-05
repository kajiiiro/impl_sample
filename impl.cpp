#include <iostream>
#include "impl.h"

using namespace std;

// impl class has all private member.
// This way, we can change I/F without changing .h file.

class impl_sample::impl
{
public:
	impl();
	~impl();
	void print()
	{
		cout << "impl sample" << endl;
	}
};

void impl_sample::execSomething2Do()
{
	p_impl->print();
}

impl_sample::impl_sample() : p_impl(new impl_sample::impl())
{

}

impl_sample::~impl_sample()
{
	delete p_impl;
}


