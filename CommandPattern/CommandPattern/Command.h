#pragma once
class Command
{
public:
	virtual void Redo() = 0;
	virtual void Undo() = 0;
};
