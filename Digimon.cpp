#include "Digimon.h"

Digimon::Digimon(const string& digimonName, const string& elem) : VirtualPet(digimonName)
{
	element = elem;
}

void Digimon::useSpecialAttack()
{
	// When digimons attack, they get really hungry
	cout << "Digimon: Using Special Attack" << endl;
	increaseHunger(100);
}

string Digimon::getElement() const
{
	return element;
}
