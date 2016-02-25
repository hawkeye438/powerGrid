/*
 * PlayerAssets.h
 *
 *  Created on: Feb 23, 2016
 *      Author: jordan S
 */

#ifndef PLAYERASSETS_H_
#define PLAYERASSETS_H_

#include <iostream>
#include "Money.h"
#include "Houses.h"
#include "Cities.h"
#include "NaturalRessources.h"
#include "PowerPlant.h"
using namespace std;

namespace jjsPowerGrid {

class PlayerAssets {

private:
	int quantityOfItem;
	Money playersMoney;
	Houses playersHouses(string color);
	Cities playersCities;
	PowerPlant playersPowerPlants;
	NaturalRessources PlayersRessources;

public:
	PlayerAssets(string color);
	virtual ~PlayerAssets();

	int getQuantity();
	void setQuantity(int x);
	void addQuantity(int x);
	void reduceQuantity(int x);
	string assetInfo();
};

} /* namespace jjsPowerGrid */

#endif /* PLAYERASSETS_H_ */
