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

} /* namespace jjsPowerGrid */
