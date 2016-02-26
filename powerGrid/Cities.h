/*
 * Cities.h
 *
 *  Created on: Feb 24, 2016
 *      Author: jordan S
 */

#ifndef CITIES_H_
#define CITIES_H_

//#include "PlayerAssets.h"

namespace jjsPowerGrid {

class Cities {
private:
	int cityQuantity;
public:
	Cities();
	 ~Cities();
	void setCitiesQty(int x);
	void setCitiesQty();
	int getCitiesQty();
};

} /* namespace jjsPowerGrid */

#endif /* CITIES_H_ */
