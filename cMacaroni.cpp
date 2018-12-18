#include "cMacaroni.h"


/*
=================================================================
Defualt Constructor
=================================================================
*/
cMacaroni::cMacaroni()
{
	this->setMapPosition(this->spriteRandom(gen), this->spriteRandom(gen));
}
void cMacaroni::update(int row, int column)
{
	this->setMapPosition(column, row);
}

void cMacaroni::setMapPosition(int row, int column)
{
	this->macaroniPos = { column, row };
}

MapRC cMacaroni::getMapPosition()
{
	return this->macaroniPos;
}

void cMacaroni::setMacaroniRotation(float angle)
{
	this->macaroniRotation = angle;
	this->setSpriteRotAngle(angle);
}

float cMacaroni::getMacaroniRotation()
{
	return this->macaroniRotation;
}

void cMacaroni::genRandomPos(int row, int column)
{

	while (this->getMapPosition().C == column && this->getMapPosition().R == row)
	{
		this->setMapPosition(this->spriteRandom(gen), this->spriteRandom(gen));
	}
}

/*
=================================================================
Defualt Destructor
=================================================================
*/


cMacaroni::~cMacaroni()
{
}
