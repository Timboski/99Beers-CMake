#include "Song.h"

Song::Song(int numBeers)
	: m_maxBeers(numBeers), m_verseFactory(numBeers)
{
}

void Song::Sing()
{
	for (int numBeers = m_maxBeers; numBeers >= 0; --numBeers) SingVerse(numBeers);
}

void Song::SingVerse(int numBeers) const
{
	m_verseFactory.Create(numBeers)->SingVerse();
}