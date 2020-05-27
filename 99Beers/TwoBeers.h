#pragma once

#include "Verse.h"

class TwoBeers : public Verse
{
protected:
	string SingSecondLine() const override;
	string SingFourthLine() const override;
};