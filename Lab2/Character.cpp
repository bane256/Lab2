#include "Character.h"
#include <string.h>
#include <iostream>

using namespace std;

Character::Character(string className, int healthValue, string weapon, string displayInfoDummy,Weapon weaponInstance)
{
	ClassName = className;
	HealthValue = healthValue;
	WeaponName = weapon;
	DisplayInfoDummy = displayInfoDummy;
	WeaponInstance = weaponInstance;
}


Weapon Character::getWeaponInstance()
{
	return WeaponInstance;
}

string Character::getClassName()
{
	return ClassName;
}

int Character::getHealthValue()
{
	return HealthValue;
}

string Character::getWeapon()
{
	return WeaponName;
}

string Character::getDisplayInfoDummy()
{
	return DisplayInfoDummy;
}

