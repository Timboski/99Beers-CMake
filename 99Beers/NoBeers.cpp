#include "NoBeers.h"
#include <string>

using std::to_string;

NoBeers::NoBeers(int maxBeers)
	: m_maxBeers(maxBeers)
{
}

string NoBeers::SingSecondLine() const
{
	return "No bottles of beer";
}

string NoBeers::SingThirdLine() const
{
	return "Go to the store, buy some more";
}

string NoBeers::SingFourthLine() const
{
	return to_string(m_maxBeers) + " bottles of beer on the wall";
}
