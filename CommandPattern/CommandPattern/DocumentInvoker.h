#pragma once
#include "DocumentEditCommand.h"

class DocumentInvoker
{
	vector<Command*> _commands;
	Document* _doc;
public:
	void Redo(int level)
	{
		_commands[level]->Redo();
	}

	void Undo(int level)
	{
		_commands[level]->Undo();
	}

	void Write(string text)
	{
		Command* myDocEC = new DocumentEditCommand(_doc, text);
		_commands.push_back(myDocEC);
	}

	void ShowDocument()
	{
		_doc->ShowDocument();
	}

	DocumentInvoker()
	{
		_doc = new Document();
	}

	~DocumentInvoker()
	{
		for (int i = 0; i < _commands.size(); i++)
			delete _commands[i];
		_commands.clear();
	}
};

