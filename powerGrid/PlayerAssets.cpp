/*
 * PlayerAssets.cpp
 *
 *  Created on: Feb 23, 2016
 *      Author: jordan S
 */
#include <iostream>
#include "PlayerAssets.h"

namespace jjsPowerGrid {

PlayerAssets::PlayerAssets(string color) {
	setQuantity(0);
	playersHouses.setHouseColor(color);
}

PlayerAssets::~PlayerAssets() {
	cout << "destructor called" << endl;
}

int PlayerAssets::getQuantity() {
	return this->quantityOfItem;
}

void PlayerAssets::setQuantity(int x) {
	this->quantityOfItem = x;
}

void PlayerAssets::addQuantity(int x) {
	quantityOfItem += x;
}

void PlayerAssets::reduceQuantity(int x) {
	quantityOfItem -= x;
}

string PlayerAssets::assetInfo(){
	return "Cities: "+playersCities.getQuantity()+", Houses: "+playersHouses.getQuantity()
			+", Money: "+playersMoney.getQuantity();
}

} /* namespace jjsPowerGrid */
