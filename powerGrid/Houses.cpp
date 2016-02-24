/*
 * Houses.cpp
 *
 *  Created on: Feb 24, 2016
 *      Author: jordan S
 */

#include "Houses.h"

namespace jjsPowerGrid {

Houses::Houses(string color) {
	setQuantity(22);
	setHouseColor(color);
}

Houses::~Houses() {
	// TODO Auto-generated destructor stub
}

void Houses::setHouseColor(string color)
{
	this->color = color;
}

string Houses::getHouseColor()
{
	return this->color;
}

} /* namespace jjsPowerGrid */
