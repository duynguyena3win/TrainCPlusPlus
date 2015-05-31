#pragma once

#include "Observer.h"

class Dollar
{
	float _value;
public:
	static vector<Observer*> ListObserver;
	Dollar();
	void Attach(Observer* concreteObserver)
	{
		ListObserver.push_back(concreteObserver);
	}

	void Detach(Observer* concreteObserver)
	{
		for (int i = 0; i < ListObserver.size(); i++)
			if (ListObserver[i]->GetType().compare(concreteObserver->GetType()) == 0)
				ListObserver.erase(ListObserver.begin() + i);
	}

	float ShowValueDevice()
	{
		return _value;
	}

	void Set_Value(float value)
	{
		_value = value;
	}

	void DataChange()
	{
		for (int i = 0; i < ListObserver.size(); i++)
		{
			ListObserver[i]->Update();
		}
	}
	~Dollar();
};

