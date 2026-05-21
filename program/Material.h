#pragma once
#include <iostream>

using namespace std;

class Material
{
protected:
	const char* name;
	float weight;
	float transparency;

public:
	void Describe();

};

