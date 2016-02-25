/*
 * SummaryCards.h
 *
 *  Created on: Feb 25, 2016
 *      Author: jordan S
 */

#ifndef SUMMARYCARDS_H_
#define SUMMARYCARDS_H_

#include<iostream>
#include<string>
#include<array>
#include<vector>
using namespace std;
namespace jjsPowerGrid {

class SummaryCards {
private:
	int turnOrder;
	bool choice;
	int numberOfCities;
	int powerPlantCost;
public:
	SummaryCards();
	virtual ~SummaryCards();

	void setTurnOrder(int order);
	int getTurnOrder();

	string determinePlayerOrder(vector<Player> players );

	bool chooseToBid(bool choice);



};

} /* namespace jjsPowerGrid */

#endif /* SUMMARYCARDS_H_ */
