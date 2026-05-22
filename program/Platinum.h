#pragma once

#include "Material.h"

class Platinum : public Material
{
public:
	Platinum();

	virtual void Promote() override;
};

