#include "Pikachu.h"

Pikachu::Pikachu(const string& pikachuName, const string& speciesType, int ePower) : Pokemon(pikachuName, speciesType)
{ 
	electricPower = ePower;
}

void Pikachu::useElectricShock()
{
	// When Pikachus attack they have to regenerate their electric power
	cout << "Pikachu: Using Electric Shock" << endl;
	electricPower -= 20;
}

int Pikachu::getElectricPower()
{
	return electricPower;
}
