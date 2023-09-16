#include "Pikachu.h"

Pikachu::Pikachu(const string& pikachuName, const string& speciesType, int ePower) : Pokemon(pikachuName, speciesType)
{ 
	electricPower = ePower;
}

void Pikachu::useElectricShock()
{
	cout << "Using electric shock" << endl;
}

