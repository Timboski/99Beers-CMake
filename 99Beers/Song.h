#pragma once

#include "VerseFactory.h"

class Song
{
public:
	Song(int numBeers);
	void Sing();

private:
	void SingVerse(int numBeers) const;

	const VerseFactory m_verseFactory;
	const int m_maxBeers;
};