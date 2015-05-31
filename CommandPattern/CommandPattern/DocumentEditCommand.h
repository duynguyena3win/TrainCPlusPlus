#pragma once
#include "Document.h"
#include "Command.h"

class DocumentEditCommand : public Command
{
	Document* _editdocument;
	string _text;
public:
	void Redo()
	{
		_editdocument->Write(_text);
	}

	void Undo()
	{
		_editdocument->Erase(_text);
	}

	DocumentEditCommand(Document* doc, string text)
	{
		_editdocument = doc;
		_editdocument->Write(text);
		_text = text;
	}

	~DocumentEditCommand();
};

