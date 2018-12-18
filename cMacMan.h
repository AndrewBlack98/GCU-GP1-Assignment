#pragma once
#include "cSprite.h"
class cMacMan : public cSprite
{
private:
	MapRC macPos;
	float macRotation;

public:
	cMacMan();
	virtual ~cMacMan();
	void update(int row, int column);
	void setMapPosition(int row, int column);
	MapRC getMapPosition();
	void setMacRotation(float angle);
	float getMacRotation();
};

