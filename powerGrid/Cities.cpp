/*
 * Cities.cpp
 *
 *  Created on: Feb 24, 2016
 *      Author: jordan S
 */

#include "Cities.h"

namespace jjsPowerGrid {

Cities::Cities() {
	setCitiesQty();
}

Cities::~Cities() {
	// TODO Auto-generated destructor stub
}
void Cities::setCitiesQty(int x){
	cityQuantity += x;
}
void Cities::setCitiesQty(){
	cityQuantity = 0;
}
int Cities::getCitiesQty(){
	return cityQuantity;
}

} /* namespace jjsPowerGrid */
