#include "ManyBeers.h"
#include <string>

using std::to_string;

ManyBeers::ManyBeers(int numBeers) 
	: m_numBeers(numBeers)
{	
}

string ManyBeers::SingSecondLine() const
{
	return to_string(m_numBeers) + " bottles of beer";
}

string ManyBeers::SingFourthLine() const
{
	return to_string(m_numBeers - 1) + " bottles of beer on the wall";
}
