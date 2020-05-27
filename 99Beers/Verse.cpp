#include "Verse.h"
#include <iostream>

using std::cout;
using std::endl;

void Verse::SingVerse() const
{
	cout << SingFirstLine() << endl;
	cout << SingSecondLine() << endl;
	cout << SingThirdLine() << endl;
	cout << SingFourthLine() << endl;
	cout << endl;
}

string Verse::SingFirstLine() const
{
	return SingSecondLine() + " on the wall";
}

string Verse::SingThirdLine() const
{
	return "Take one down, pass it around";
}
