#include "VirtualPet.h"
#include "Pokemon.h"
#include "Digimon.h"
#include "Pikachu.h"
#include "Gatoman.h"

int main() {

	// DIGIMON
	// Make instance of Digimon and show name
	cout << "-------------------------------------------------------------------" << endl;
	Digimon digimanz("Digimanz", "Fire");
	cout << "Name: " << digimanz.getName() << endl;
	cout << "You have just created a generic Digimon character." << endl << endl;
	
	// Show stats
	cout << "Here are his stats: " << endl;
	cout << "Element: " << digimanz.getElement() << endl;
	cout << "Happiness: " << digimanz.getHappiness() << endl;
	cout << "Hunger: " << digimanz.getHunger() << endl << endl;
	
	// Simulate digimon attack
	cout << "You make a joke about his mama." << endl;
	cout << "This makes him really mad!" << endl;
	digimanz.useSpecialAttack();
	cout << endl;

	// Show that he is a really hungry guy
	cout << "That special attack sure did work up his appetite." << endl;
	cout << "Hunger: " << digimanz.getHunger() << endl;
	cout << "-------------------------------------------------------------------" << endl;
	
	// PIKACHU
	// Make instance of Pikachu and show details and attacks
	Pikachu pikaPika("Pikachu", "Electric Rodent", 20);
	cout << "Name: " << pikaPika.getName() << endl;
	cout << pikaPika.getName() << "s really like red berries. " << endl << endl;
	
	// Show stats
	cout << "Lets check the stats on this little guy: " << endl;
	cout << "Species: " << pikaPika.getSpecies() << endl;
	cout << "Electric Power: " << pikaPika.getElectricPower() << endl;
	cout << "Health: " << pikaPika.getHealth() << endl << endl;
	
	// Simulate Pikachu attack
	cout << pikaPika.getName() << " demands berries NOW! " << endl;
	cout << "You check your backpack for berries and find none." << endl;
	pikaPika.useElectricShock();
	cout << endl;

	// Show that Pikachu will have to regenerate his electric power after using attack
	cout << "That electric shock had some heat behind it. " << endl;
	cout << "The " << pikaPika.getName() << " will need some time to regenerate it's power." << endl;
	cout << "Electric Power: " << pikaPika.getElectricPower() << endl;
	cout << "-------------------------------------------------------------------" << endl;
	
	// GATOMAN
	// Make instance of Gatoman and show name
	Gatoman gato("Gatoman", "Water", 30);
	cout << "Name: " << gato.getName() << endl;
	cout << gato.getName() << "s are generally very peaceful Digimons unless they are disturbed." << endl << endl;
	
	// Show other stats
	cout << "Lets check the stats on this bad boy: " << endl;
	cout << "Element: " << gato.getElement() << endl;
	cout << "Claw Sharpness Level: " << gato.getSharpnessLevel() << endl;
	cout << "Happiness: " << gato.getHappiness() << endl;
	cout << "Hunger: " << gato.getHunger() << endl << endl;
	
	// Simulate Gatoman's attack
	cout << "You step on a branch and break it in half. " << endl;
	cout << "You have disturbed the wild Gatoman, here comes his attack... " << endl;
	gato.useCatClawAttack();
	cout << endl;
	
	// Display how Gatoman's hurt themselves mentally and physically when they attack
	cout << "It hurt a little, but it hurt him more to hurt you." << endl;
	cout << "They are very sensitive creatures." << endl;
	cout << "Happiness: " << gato.getHappiness() << endl;
	cout << "Claw Sharpness Level: " << gato.getSharpnessLevel() << endl;
	cout << "-------------------------------------------------------------------" << endl;

	return 0;
}
