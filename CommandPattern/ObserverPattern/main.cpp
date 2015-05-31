#include "Dollar.h"
#include <conio.h>

void main()
{
	Dollar* myDollar = new Dollar();
	myDollar->Set_Value(24.5f);

	myDollar->Attach(new MobieApp());
	myDollar->Attach(new WebApp());
	myDollar->Attach(new DesktopApp());

}