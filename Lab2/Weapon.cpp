#include "Weapon.h"
#include <string.h>
#include <iostream>

using namespace std;

Weapon::Weapon(string name, string description, int damage, string specialAbilities[], string outputDummy)
{
	Name = name;
	Description = description;
	Damage = damage;
	SpecialAbilities[0] = specialAbilities[0];

	for (int i = 0; i < 3; i++)
	{
		SpecialAbilities[i] = specialAbilities[i];
	}

	OutputDummy = outputDummy;
}

Weapon::Weapon()
{
	

}

string Weapon::getName()
{
	return Name;
}

string Weapon::getDescription()
{
	return Description;
}

int Weapon::getDamage()
{
	return Damage;
}

//string Weapon::getSpecialAbilities()
//{
//	return SpecialAbilities[];
//}

string Weapon::getOutputDummy()
{
	return OutputDummy;
}



