/*
 * PowerPlant.cpp
 *
 *  Created on: Feb 24, 2016
 *      Author: jordan S
 */

#include "PowerPlant.h"

using namespace jjsPowerGrid;

PowerPlant::PowerPlant() {
	setPowerPlantQty(0);
	setPlantPowerProd(0);

}

PowerPlant::~PowerPlant() {
	// TODO Auto-generated destructor stub
}

void PowerPlant::setPlantExpense(int x) {
	expense = x;
}
void PowerPlant::setPowerPlantQty(int x){
	quantity = x;
}

int PowerPlant::getPlantExpense() {
	return expense;
}

void PowerPlant::setPlantRating(int x) {
	rating = x;
}

int PowerPlant::getPlantRating() {
	return rating;
}

int PowerPlant::getPlantPowerProd() {
	return powerGeneration;
}

void PowerPlant::setPlantPowerProd(int x) {
	powerGeneration = x;
}

void PowerPlant::setPlantClass(string typeOfPlant) {
	type = typeOfPlant;
}

string PowerPlant::getPlantClass(){
	return type;
}

//} /* namespace jjsPowerGrid */
