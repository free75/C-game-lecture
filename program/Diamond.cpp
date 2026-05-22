#include "Diamond.h"

Diamond::Diamond()
{
	name = "Diamond";
	weight = 600.0f;
	hardness = 10.0f;
}

void Diamond::Describe()
{
	Material::Describe();
	cout << "Name : " << name << endl;
	cout << "Weight : " << weight << "g" << endl;
	cout << "hardness : " << hardness << endl;
}

void Diamond::Promote()
{
	cout << "Up rank : Diamond" << endl;
	cout << "Reward : Character Unlock\n " << endl;
}

