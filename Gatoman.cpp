#include "Gatoman.h"

Gatoman::Gatoman(const string& gatomanName, const string& elemType, int clawSharpness) : Digimon(gatomanName, elemType)
{
	catClawSharpness = clawSharpness;
}

void Gatoman::useCatClawAttack()
{
	// When Gatomans attack, it hurts them instead!!
	cout << "Gatoman: Using Cat Claw Attack" << endl;
	decreaseHappiness(40);
	catClawSharpness = 0;
}

int Gatoman::getSharpnessLevel() const
{
	return catClawSharpness;
}
