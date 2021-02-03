#include <iostream>
#include "Character.h"
#include "Weapon.h"
#include "Dummy.h"
using namespace std;

// create wepons in main create a pointer in character. h that points to created weapon in main. 
int main()
{
	int option;

	string bow [3] = {"Headshot","Barrage","Concussion Shot"};
	string warhammer [3] = {"Healing Light","Revive ","Protection"};
	string staff [3] = {"Headshot","Barrage","Concussion Shot"};

	Weapon weaponOne("Dragon Bow", "A rare bow made from the bones of a Eldar Dragon", 10,bow, "Dummy Text");
	Weapon weaponTwo("Holy Warhammer", "A warhammer blessed by the divine", 10, bow, "Dummy Text");
	Weapon weaponThree("Eldar Staff", "A staff given to a graduate of the wizard academy", 10, bow, "Dummy Text");

	Character classOne("Ranger", 20, "Bow", "Dummy function",weaponOne);
	Character classTwo("Paladin", 30, "Warhammer", "Dummy function",weaponTwo);
	Character classThree("Wizard", 10, "Staff", "Dummy function", weaponThree);

	/*Dummy one;
	one.text = "random text";*/


	do
	{

	system("CLS");
	cout << endl;




	cout << "         --- Character Creator ---\n\n" << endl;
	cout << "1 - Display Character types \n\n";
	cout << "2 - Pick Character \n\n";
	cout << "3 - Display your chosen Character(s)\n\n";
	cout << "4 - Delete your character(s)\n\n";
	cout << "5 - Exit\n\n";
	cout << "Option(1-4): ";
	cin >> option;

	if (option == 1)
	{
		system("CLS");

		cout << " -- Display Character Types -- \n\n" << endl;
		
		cout << "Class - " << classOne.getClassName() << "\nH.P - " << classOne.getHealthValue() << "\nWeapon - " << endl << endl;
		cout << "Class - " << classTwo.getClassName() << "\nH.P - " << classTwo.getHealthValue() << "\nWeapon - " <<   ""  <<endl << endl;
		cout << "Class - " << classThree.getClassName() << "\nH.P - " << classThree.getHealthValue() << "\nWeapon - " << "" << endl << endl;

		system("pause");

	}

	if (option == 2)
	{
		system("CLS");
		cout << " -- Pick Character -- \n\n" << endl;
	
		
		system("pause");

	}

	if (option == 3)
	{
		system("CLS");
		cout << " -- Display your chosen Character(s) -- \n\n" << endl;

		
		system("pause");
	}

	if (option == 4)
	{
		system("CLS");
		cout << " -- Delete Character -- \n\n" << endl;

		
		system("pause");
	}
	
	
	
	} while (option != 5);
	
	cout << "\n\nThank you, have a nice day" << endl;
	
	return 0;


}