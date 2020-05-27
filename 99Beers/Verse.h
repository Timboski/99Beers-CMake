#pragma once

#include <iostream>

using std::string;

class Verse
{
public:
	void SingVerse() const;

protected:
	virtual string SingFirstLine() const;
	virtual string SingSecondLine() const = 0;
	virtual string SingThirdLine() const;
	virtual string SingFourthLine() const = 0;
};