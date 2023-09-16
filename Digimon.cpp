#include "Digimon.h"

Digimon::Digimon(const string& digimonName, const string& elem) : VirtualPet(digimonName)
{
	element = elem;
}

void Digimon::useSpecialAttack()
{
	cout << "Using Special Attack" << endl;	
}

string Digimon::getElement() const
{
	return element;
}
