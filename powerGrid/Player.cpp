/*
 * Player.cpp
 *
 *  Created on: Feb 24, 2016
 *      Author: jordan S
 */

#include "Player.h"
#include "PlayerAssets.h"
namespace jjsPowerGrid {

//Player::Player(string playerName, string playerColor) {
// this->playerName = playerName;
//// ressources.setPlayerColor(playerColor);
//}
Player::Player(){

}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

void Player::setPlayerName(string name) {
	this->playerName = name;
}

string Player::getPlayerName() {
	return playerName;
}

void Player::setPlayerColor(string color) {
	this->playerColor = color;
}

string Player::getPlayerColor(){
	return playerColor;
}
void Player::playerInfo(){
//	cout<<"welcome: "<<this->playerName<<endl<<", your current assets are: "
//			<<endl<<this->playerInfo<<endl;
	cout<<"welcome: "<<getPlayerName()<<endl<<", your current assets are: "
				<<endl;
}

}
/* namespace jjsPowerGrid */
