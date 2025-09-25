#pragma once
#include <memory>
class Resource
{
private:
	shared_ptr<Resource> pointer;
public:
	Resource();
	~Resource();

public:
	void Share(shared_ptr<Resource> _date);
	void TEST();
};

