#pragma once

#include "Verse.h"

class OneBeer : public Verse
{
protected:
	string SingSecondLine() const override;
	string SingFourthLine() const override;
};