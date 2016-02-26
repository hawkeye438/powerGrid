/*
 * PlayerAssets.cpp
 *
 *  Created on: Feb 23, 2016
 *      Author: jordan S
 */
#include <iostream>
#include "PlayerAssets.h"

using namespace jjsPowerGrid;

PlayerAssets::PlayerAssets(){
	setHousesQty(0);
	setHouseColor(color);
}

PlayerAssets::~PlayerAssets() {
	cout << "destructor called" << endl;
}

int PlayerAssets::getQuantity() {
	return this->quantityOfItem;
}

void PowerPlant::setPowerPlantQty(int x) {
	quantity = x;
}



void PlayerAssets::reduceQuantity(int x) {
	quantityOfItem -= x;
}

string PlayerAssets::assetInfo(){
	return "Cities: "+getQuantity()+", Houses: "+getQuantity()
			+", Money: "+getQuantity();
}

/* namespace jjsPowerGrid */
