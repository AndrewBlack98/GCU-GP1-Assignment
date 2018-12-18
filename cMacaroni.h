/*
=================
- cMacaroni.cpp
- Header file for class definition - IMPLEMENTATION
=================
*/
#pragma once
#include "cSprite.h"
#include <random>

class cMacaroni :	public cSprite
{
private:
	MapRC macaroniPos;
	float macaroniRotation;
	/* Let the computer pick a random number */
	random_device rd;    // non-deterministic engine 
	mt19937 gen{ rd() }; // deterministic engine. For most common uses, std::mersenne_twister_engine, fast and high-quality.
	uniform_int_distribution<> spriteRandom{ 0, 9 };

public:
	cMacaroni();
	virtual ~cMacaroni();
	void update(int row, int column);
	void setMapPosition(int row, int column);
	MapRC getMapPosition();
	void setMacaroniRotation(float angle);
	float getMacaroniRotation();
	void genRandomPos(int row, int column);
};

