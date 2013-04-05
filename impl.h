#pragma once

// this class has 1 public function, but...(to .cpp)

class impl_sample
{
public:
	void execSomething2Do();

public:
	impl_sample();
	~impl_sample();
	impl_sample(const impl_sample& copy) = delete;
	impl_sample& operator=(const impl_sample& copy) = delete;
private:
	class impl;
	impl* p_impl;
};
