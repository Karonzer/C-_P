#pragma once
#include "Furniture.h"
class wardrobe : public Furniture
{

public:
	wardrobe();
	~wardrobe();
public:
	virtual void Intercat() override;
};

