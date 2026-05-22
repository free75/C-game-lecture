#include "Emerald.h"

Emerald::Emerald()
{
	name = "Emerald";
	weight = 100.0f;
	transparency = 9.0f;
}

void Emerald::Describe()
{ 
	Material::Describe();
	cout << "Name : " << name << endl;
	cout << "Weight : " << weight << "g" << endl;
	cout << "transparency : " << transparency << "\n" << endl;
}

void Emerald::Promote()
{
	cout << "Up rank : Emerald" << endl;
	cout << "Reward : Profile Banner Unlock\n" << endl;
}

