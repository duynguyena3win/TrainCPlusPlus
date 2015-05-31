#include <conio.h>
#include "DocumentInvoker.h"

void main()
{
	DocumentInvoker* myDoc = new DocumentInvoker();
	myDoc->Write("My name is Nguyen.");
	myDoc->Write("I'm 21 years old.");
	myDoc->Write("I'm a student of University of Science HCM.");
	myDoc->ShowDocument();
	cout << endl;
	myDoc->Undo(2);
	myDoc->ShowDocument();
	cout << endl;
	myDoc->Redo(2);
	myDoc->ShowDocument();
	cout << endl;
	myDoc->Undo(1);
	myDoc->ShowDocument();
	cout << endl;
	_getch();
}