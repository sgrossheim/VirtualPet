#include "VirtualPet.h"
#include "Pokemon.h"
#include "Digimon.h"
#include "Pikachu.h"
#include "Gatoman.h"

int main() {
	cout << "------------------" << endl;
	// Make instance of Virtual Pet and show details
	VirtualPet myLittleBoringPet("Basic Pet");
	myLittleBoringPet.feed();
	myLittleBoringPet.play();

	cout << "Name: " << myLittleBoringPet.getName() << endl;
	cout << "Happiness: " << myLittleBoringPet.getHappiness() << endl;
	cout << "Hunger: " << myLittleBoringPet.getHunger() << endl;
	myLittleBoringPet.makeSound();
	cout << "--------------------" << endl;
	
	// Make instance of Pokemon and show details
	Pokemon pokemanz("Pokemanz", "Pokespeez");
	pokemanz.feed();
	pokemanz.play();

	cout << "Name: " << pokemanz.getName() << endl;
	cout << "Happiness: " << pokemanz.getHappiness() << endl;
	cout << "Hunger: " << pokemanz.getHunger() << endl;
	cout << "Health: " << pokemanz.getHealth() << endl;
	cout << "Species: " << pokemanz.getSpecies() << endl;
	pokemanz.makeSound();
	cout << "---------------------" << endl;

	// Make instance of Digimon and show details
	Digimon digimanz("Digimanz", "Fire");

	cout << "Name: " << digimanz.getName() << endl;
	cout << "Happiness: " << digimanz.getHappiness() << endl;
	cout << "Hunger: " << digimanz.getHunger() << endl;
	cout << "Element: " << digimanz.getElement() << endl;
	digimanz.useSpecialAttack();
	cout << "---------------------" << endl;

	// Make instance of Pikachu and show details
	Pikachu pikaPika("Pikachu", "Electric Rodent", 25);
	cout << "Name: " << pikaPika.getName() << endl;
	cout << "Species: " << pikaPika.getSpecies() << endl;
	cout << "Health: " << pikaPika.getHealth() << endl;
	cout << "Electric Power: " << pikaPika.getElectricPower() << endl;
	pikaPika.useElectricShock();
	cout << "----------------------" << endl;
	
	// Make instance of Gatoman and show details
	Gatoman gato("Gatoman", "Water", 25);
	cout << "Name: " << gato.getName() << endl;
	cout << "Happiness: " << gato.getHappiness() << endl;
	cout << "Hunger: " << gato.getHunger() << endl;
	cout << "Element: " << gato.getElement() << endl;
	gato.useCatClawAttack();
	cout << "----------------------" << endl;

	return 0;
}
