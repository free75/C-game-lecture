#include "Emerald.h"

Emerald::Emerald()
{
	name = "Emerald";
	weight = 100.0f;
	transparency = 9.0f;
}

void Emerald::Describe()
{ 
	cout << "Name : " << name << endl;
	cout << "Weight : " << weight << "g" << endl;
	cout << "transparency : " << transparency << "\n" << endl;
}
