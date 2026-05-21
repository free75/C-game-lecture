#include "Diamond.h"

Diamond::Diamond()
{
	name = "Diamond";
	weight = 600.0f;
	hardness = 10.0f;
}

void Diamond::Describe()
{
	cout << "Name : " << name << endl;
	cout << "Weight : " << weight << "g" << endl;
	cout << "hardness : " << hardness << endl;
}