/*
 * PowerPlant.h
 *
 *  Created on: Feb 24, 2016
 *      Author: jordan S
 */

#ifndef POWERPLANT_H_
#define POWERPLANT_H_

#include<string>
#include "PlayerAssets.h"


namespace jjsPowerGrid {

class PowerPlant{
private:
	std::string type;
	int rating;
	int expense;
	int powerGeneration;
	int quantity;

public:
	PowerPlant();
	virtual ~PowerPlant();

	void setPowerPlantQty(int x);
	void setPlantExpense(int x);
	int getPlantExpense();
	void setPlantRating(int x);
	int getPlantRating();
	int getPlantPowerProd();
	void setPlantPowerProd(int x);
	void setPlantClass(std::string typeOfPlant);
	std::string getPlantClass();
};

} /* namespace jjsPowerGrid */

#endif /* POWERPLANT_H_ */
