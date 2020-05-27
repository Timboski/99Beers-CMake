#pragma once

#include "Verse.h"

using std::unique_ptr;

class VerseFactory
{
public:
	VerseFactory(int maxBeers);
	unique_ptr<Verse> Create(int numBeersOnWall) const;

private:
	Verse* CreateRaw(int numBeersOnWall) const;

	const int m_maxBeers;
};