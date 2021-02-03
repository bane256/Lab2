#include <string.h>
#include <iostream>
using namespace std;

#pragma once
#ifndef WEAPON_H
#define WEAPON_H
class Weapon
{
private:
	string  Name;
	string  Description;
	int     Damage;
	string  SpecialAbilities[3];
	string  OutputDummy;
public:
	Weapon(string name, string description, int damage, string specialAbilities[], string outputDummy);
	Weapon();
	string getName();
	string getDescription();
	int getDamage();
	string getSpecialAbilities(int arrayNum)
	{
		return SpecialAbilities[arrayNum];
	}
	string getOutputDummy();
};
#endif WEAPON_H
