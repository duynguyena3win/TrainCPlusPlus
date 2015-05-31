#include "Composite.h"
#include "FileLeaf.h"
#include <conio.h>

void main()
{
	Composite* root = new Composite();
	root->AddComponents(new Composite("Game"));
	root->AddComponents(new Composite("Study"));
	root->AddComponents(new Composite("Music"));

	root->GetFolder("Game")->AddComponents(new FileLeaf("Need_For_Speed.exe", 200));
	root->GetFolder("Game")->AddComponents(new Composite("Sport Game"));
	root->GetFolder("Game")->GetFolder("Sport Game")->AddComponents(new FileLeaf("FIFA_14.exe", 150));
	root->GetFolder("Game")->GetFolder("Sport Game")->AddComponents(new FileLeaf("Tenis.exe", 50));
	
	root->GetFolder("Study")->AddComponents(new FileLeaf("English.doc", 5));
	root->GetFolder("Study")->AddComponents(new FileLeaf("Math.doc", 2));

	root->GetFolder("Music")->AddComponents(new FileLeaf("Home.mp3", 3));
	root->GetFolder("Music")->AddComponents(new FileLeaf("Miss_You.mp3", 5));
	root->Show();
	cout << "Size Music: " << root->GetFolder("Music")->GetSize() << endl;
	cout << "Size root: " << root->GetSize() << endl;
	_getch();
}