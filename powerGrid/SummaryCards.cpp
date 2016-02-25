/*
 * SummaryCards.cpp
 *
 *  Created on: Feb 25, 2016
 *      Author: jordan S
 */

#include "SummaryCards.h"

namespace jjsPowerGrid {

SummaryCards::SummaryCards() {
	// TODO Auto-generated constructor stub

}

SummaryCards::~SummaryCards() {
	// TODO Auto-generated destructor stub
}

void SummaryCards::setTurnOrder(int order) {
	this->turnOrder = order;
}

int SummaryCards::getTurnOrder() {
	return this->turnOrder;
}

string SummaryCards::determinePlayerOrder(vector<Player> players) {
	for (int k = 0; k < players.size() - 1; k++) {
		if (players[k].ressources.playersCities.getQuantity()
				!= players[k + 1].ressources.playersCities.getQuantity()) {
			if (players[k].ressources.playersCities.getQuantity()
					< players[k + 1].ressources.playersCities.getQuantity()) {
				cout<<"The first player is "<<players[k+1].getPlayerName()<<"\nYou will start a round: be the first player to buy power plants and to go through the Bureaucracy phase."<<endl;
				cout<<"The last player is "<<players[k].getPlayerName()<<"\nYou will be the player to start the Buying Raw Materials phase and the Building phase"<<endl;
			} else {
				cout<<"The first player is "<<players[k].getPlayerName()<<"\nYou will start a round: be the first player to buy power plants and to go through the Bureaucracy phase."<<endl;
				cout<<"The last player is "<<players[k+1].getPlayerName()<<"\nYou will be the player to start the Buying Raw Materials phase and the Building phase"<<endl;
			}

		} else {
			if(players[k].ressources.playersPowerPlants.getQuantity() < players[k+1].ressources.playersPowerPlants.getQuantity()) {
				cout<<"The first player is "<<players[k+1].getPlayerName()<<"\nYou will start a round: be the first player to buy power plants and to go through the Bureaucracy phase."<<endl;
				cout<<"The last player is "<<players[k].getPlayerName()<<"\nYou will be the player to start the Buying Raw Materials phase and the Building phase"<<endl;
			} else {
				cout<<"The first player is "<<players[k].getPlayerName()<<"\nYou will start a round: be the first player to buy power plants and to go through the Bureaucracy phase."<<endl;
				cout<<"The last player is "<<players[k+1].getPlayerName()<<"\nYou will be the player to start the Buying Raw Materials phase and the Building phase"<<endl;
			}
		}

	}
}

bool SummaryCards::chooseToBid(bool choice) {
	this->choice = choice;
}

} /* namespace jjsPowerGrid */
