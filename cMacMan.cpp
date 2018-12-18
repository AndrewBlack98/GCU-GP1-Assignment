/*
=================
- cMacMan.cpp
- Header file for class definition - IMPLEMENTATION
=================
*/
#include "cMacMan.h"

/*
=================================================================
Defualt Constructor
=================================================================
*/
cMacMan::cMacMan()
{
	this->setMapPosition( 0, 0 );
}

void cMacMan::update(int row, int column)
{
	this->setMapPosition(column, row );
}

void cMacMan::setMapPosition(int row, int column)
{
	this->macPos = { column, row };
}

MapRC cMacMan::getMapPosition()
{
	return this->macPos;
}

void cMacMan::setMacRotation(float angle)
{
	this->macRotation = angle;
	this->setSpriteRotAngle(angle);
}

float cMacMan::getMacRotation()
{
	return this->macRotation;
}

/*
=================================================================
Defualt Destructor
=================================================================
*/
cMacMan::~cMacMan()
{
}
