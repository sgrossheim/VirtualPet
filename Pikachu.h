#ifndef PIKACHU_H
#define PIKACHU_H
#include "Pokemon.h"

class Pikachu : public Pokemon
{
	private:
		int electricPower;
	public:
		Pikachu(const string& pikachuName, const string& speciesType, int ePower);
		void useElectricShock();
		int getElectricPower();
};

#endif
