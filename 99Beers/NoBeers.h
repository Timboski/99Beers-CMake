#pragma once

#include "Verse.h"

class NoBeers : public Verse
{
public:
	NoBeers(int maxBeers);

protected:
	string SingSecondLine() const override;
	string SingThirdLine() const override;
	string SingFourthLine() const override;

private:
	const int m_maxBeers;
};