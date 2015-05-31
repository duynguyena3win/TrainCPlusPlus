#pragma once
#include "Component.h"

class FileLeaf : public Component
{
public:
	int GetSize()
	{
		return _sizeComponent;
	}

	string GetName()
	{
		return _nameComponent;
	}

	FileLeaf(string name, int size)
	{
		_nameComponent = name;
		_sizeComponent = size;
	}

	void Show()
	{
		cout << " ----> " << _nameComponent << endl;
	}
	~FileLeaf();
};

