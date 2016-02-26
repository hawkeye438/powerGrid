/*
 * Player.h
 *
 *  Created on: Feb 24, 2016
 *      Author: jordan S
 */

#ifndef PLAYER_H_
#define PLAYER_H_
#include <iostream>
#include "NaturalRessources.h"
using namespace std;

namespace jjsPowerGrid {

class Player{
private:
	string playerName;
	NaturalRessources ressources;
	string playerColor;
public:
	Player(string playerName, string playerColor);
	Player();
	virtual ~Player();

	void setPlayerName(string name);
	string getPlayerName();

	void setPlayerColor(string color);
	string getPlayerColor();

	void playerInfo();
};

} /* namespace jjsPowerGrid */

#endif /* PLAYER_H_ */
