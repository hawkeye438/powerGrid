/*
 * Houses.h
 *
 *  Created on: Feb 24, 2016
 *      Author: jordan S
 */

#ifndef HOUSES_H_
#define HOUSES_H_

#include <iostream>
#include "PlayerAssets.h"

using namespace std;

namespace jjsPowerGrid {

class Houses{
private:
	std::string color;
	int houseQuantity;
public:
	Houses();
	virtual ~Houses();

	void setHouseColor(string color);
	void setHousesQty(int x);
	string getHouseColor();

};

} /* namespace jjsPowerGrid */

#endif /* HOUSES_H_ */
