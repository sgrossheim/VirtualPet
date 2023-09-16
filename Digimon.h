#ifndef DIGIMON_H
#define DIGIMON_H
#include "VirtualPet.h"

class Digimon : public VirtualPet
{
	private:
		string element;
	public:
		Digimon(const string& digimonName, const string& elem);
		void useSpecialAttack();
		string getElement() const;
};
#endif
