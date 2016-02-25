/*
 * PowerPlant.h
 *
 *  Created on: Feb 24, 2016
 *      Author: jordan S
 */

#ifndef POWERPLANT_H_
#define POWERPLANT_H_

#include "PlayerAssets.h"

namespace jjsPowerGrid {

class PowerPlant: public PlayerAssets {
private:
	string type;
	int rating;
	int expense;
	int powerGeneration;
	int quantity;

public:
	PowerPlant();
	virtual ~PowerPlant();

	void setPlantExpense(int x);
	int getPlantExpense();
	void setPlantRating(int x);
	int getPlantRating();
	int getPlantPowerProd();
	void setPlantPowerProd(int x);
	void setPlantClass(string typeOfPlant);
	string getPlantClass();

};

} /* namespace jjsPowerGrid */

#endif /* POWERPLANT_H_ */
