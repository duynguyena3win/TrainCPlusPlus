#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Document
{
	vector<string> text;
public:
	void ShowDocument()
	{
		for (int i = 0; i < text.size(); i++)
			cout << text[i];
	}

	void Write(string myText)
	{
		if (!myText.empty())
			text.push_back(myText);
	}

	void Erase(int inx)
	{
		if (inx < 0 && inx >= text.size())
			text.erase(text.begin() + inx);
	}

	void Erase(string str)
	{
		for (int i = 0; i < text.size(); i++)
			if (str.compare(text[i]) == 0)
				text.erase(text.begin() + i);
	}

	Document();
	~Document();
};

