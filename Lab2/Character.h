#pragma once

#ifndef CHARACTER_H
#define CHARACTER_H

using namespace std;
#include "Weapon.h"
#include <string.h>
#include <iostream>

class Character
{
private:
	string ClassName;
	int  HealthValue;
	string WeaponName;
	string DisplayInfoDummy;
	Weapon WeaponInstance;

public:
	Character(string className, int healthValue, string weapon, string displayInfoDummy,Weapon weaponInstance);
	string getClassName();
	int getHealthValue();
	string getWeapon();
	string getDisplayInfoDummy();
	Weapon getWeaponInstance();
	
	
	
	
	

};

#endif CHARACTER_H