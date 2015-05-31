#pragma once
#include "Component.h"
class Composite : public Component
{
	vector<Component*> Components;
public:
	int GetSize()
	{
		int totalSize = 0;
		for (int i = 0; i < Components.size(); i++)
			totalSize += Components[i]->GetSize();
		return totalSize;
	}

	vector<Component*> GetComponents()
	{
		return Components;
	}

	Composite* GetFolder(string name)
	{
		for (int i = 0; i < Components.size(); i++)
			if (Components[i]->GetName().compare(name) == 0)
				return (Composite*) Components[i];
		return NULL;
	}

	void Show()
	{
		cout << " >> " << _nameComponent << ": " << endl;
		for (int i = 0; i < Components.size(); i++)
			Components[i]->Show();
	}

	string GetName()
	{
		return _nameComponent;
	}

	void AddComponents(Component* _component)
	{
		Components.push_back(_component);
	}

	Composite(string name)
	{
		_nameComponent = name;
	}

	Composite();
	~Composite();
};

