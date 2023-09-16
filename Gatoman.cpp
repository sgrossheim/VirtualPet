#include "Gatoman.h"

Gatoman::Gatoman(const string& gatomanName, const string& elemType, int clawSharpness) : Digimon(gatomanName, elemType)
{
	catClawSharpness = clawSharpness;
}

void Gatoman::useCatClawAttack()
{
	cout << "Using cat claw attack" << endl;
}

