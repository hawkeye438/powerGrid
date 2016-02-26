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
#include "Player.h"
using namespace std;

using namespace jjsPowerGrid;

class PlayerAssets: public Cities, public Houses, public Money, public PowerPlant, public Player{

private:
	int quantityOfItem;
	Money playersMoney;
	Houses playersHouses;
	Cities playersCities;
	PowerPlant playersPowerPlants;
	NaturalRessources PlayersRessources;

public:
	PlayerAssets(string color);
	PlayerAssets();
	 ~PlayerAssets();

	int getQuantity();
	void setQuantity(int x);
	void addQuantity(int x);
	void reduceQuantity(int x);
	string assetInfo();
};

/* namespace jjsPowerGrid */

#endif /* PLAYERASSETS_H_ */
