/*
 * NaturalRessources.cpp
 *
 *  Created on: Feb 24, 2016
 *      Author: jordan S
 */

#include "NaturalRessources.h"

using namespace jjsPowerGrid;

NaturalRessources::NaturalRessources(){
	setCoal(0);
	setOil(0);
	setGarbage(0);
	setUranium(0);
}

NaturalRessources::~NaturalRessources() {
	// TODO Auto-generated destructor stub
}

int NaturalRessources::getCoal() {
	return coal;
}

void NaturalRessources::setCoal(int coal) {
	this->coal = coal;
}

int NaturalRessources::getGarbage() {
	return garbage;
}

void NaturalRessources::setGarbage(int garbage) {
	this->garbage = garbage;
}

int NaturalRessources::getOil() {
	return oil;
}

void NaturalRessources::setOil(int oil) {
	this->oil = oil;
}

int NaturalRessources::getUranium() {
	return uranium;
}

void NaturalRessources::setUranium(int uranium) {
	this->uranium = uranium;
}

 /* namespace jjsPowerGrid */
