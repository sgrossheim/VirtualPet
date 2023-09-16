#ifndef GATOMAN_H
#define GATOMAN_H
#include "Digimon.h"

class Gatoman : public Digimon
{
	private:
		int catClawSharpness
	public:
		Digimon(const string& gatomanName, const string& elemType, int clawSharpness);
		void useCatClawAttack();
};

#endif
