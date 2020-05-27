#pragma once

#include "Verse.h"

class ManyBeers : public Verse
{
public:
	ManyBeers(int numBeers);

protected:
	string SingSecondLine() const override;
	string SingFourthLine() const override;

private:
	const int m_numBeers;
};