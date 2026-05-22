#pragma once
#include <iostream>

using namespace std;

class Material
{
protected:
	const char* name;
	float weight;
	float transparency;
	float Reward;

public:
	void Describe();

	virtual void Promote();

};

