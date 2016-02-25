/*
 * Houses.h
 *
 *  Created on: Feb 24, 2016
 *      Author: jordan S
 */

#ifndef HOUSES_H_
#define HOUSES_H_

#include "PlayerAssets.h"
#include <iostream>
#include <string>
using namespace std;

namespace jjsPowerGrid {

class Houses: public PlayerAssets {
private:
	string color;
public:
	Houses(string color);
	virtual ~Houses();

	void setHouseColor(string color);
	string getHouseColor();

};

} /* namespace jjsPowerGrid */

#endif /* HOUSES_H_ */
