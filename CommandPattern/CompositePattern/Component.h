#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Component
{
protected:
	int _sizeComponent;
	string _nameComponent;
public:
	virtual int GetSize() = 0;
	virtual string GetName() = 0;
	virtual void Show() = 0;
};

