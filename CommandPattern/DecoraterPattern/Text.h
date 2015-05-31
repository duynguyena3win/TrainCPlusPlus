#pragma once
#include "Component.h"

class Text : public Component
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

	Text(string name, int size)
	{
		_nameComponent = name;
		_sizeComponent = size;
	}

	void Show()
	{
		cout << " ----> " << _nameComponent << endl;
	}
	~Text();
};

