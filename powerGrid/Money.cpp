/*
 * Money.cpp
 *
 *  Created on: Feb 24, 2016
 *      Author: jordan S
 */

#include "Money.h"

namespace jjsPowerGrid {

Money::Money() {
	setMoneyQty(50);

}

Money::~Money() {
	// TODO Auto-generated destructor stub
}
void Money::setMoneyQty(int x){
	moneyQuantity += x;
}
void Money::setMoneyQty(){
	moneyQuantity = 0;
}

} /* namespace jjsPowerGrid */
