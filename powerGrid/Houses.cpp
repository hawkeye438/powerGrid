/*
 * Houses.cpp
 *
 *  Created on: Feb 24, 2016
 *      Author: jordan S
 */

#include "Houses.h"

using namespace jjsPowerGrid;

Houses::Houses(){
	setHousesQty(22);
	setHouseColor(color);
}

Houses::~Houses() {
	// TODO Auto-generated destructor stub
}

void Houses::setHouseColor(string color)
{
	this->color = color;
}
void Houses::setHousesQty(int x){
	houseQuantity += x;
}
string Houses::getHouseColor()
{
	return this->color;
}

/* namespace jjsPowerGrid */
