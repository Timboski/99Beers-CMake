#include "VerseFactory.h"

#include "ManyBeers.h"
#include "TwoBeers.h"
#include "OneBeer.h"
#include "NoBeers.h"

VerseFactory::VerseFactory(int maxBeers)
	: m_maxBeers(maxBeers)
{
}

unique_ptr<Verse> VerseFactory::Create(int numBeersOnWall) const
{
	return unique_ptr<Verse>(CreateRaw(numBeersOnWall));
}

Verse* VerseFactory::CreateRaw(int numBeersOnWall) const
{
	if (numBeersOnWall == 0) return new NoBeers(m_maxBeers);
	if (numBeersOnWall == 1) return new OneBeer();
	if (numBeersOnWall == 2) return new TwoBeers();
	return new ManyBeers(numBeersOnWall);
}
