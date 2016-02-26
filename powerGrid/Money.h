/*
 * Money.h
 *
 *  Created on: Feb 24, 2016
 *      Author: jordan S
 */

#ifndef MONEY_H_
#define MONEY_H_

namespace jjsPowerGrid {

class Money{
private:
	int moneyQuantity;
public:
	Money();
	~Money();
	void setMoneyQty(int x);
	void setMoneyQty();
};

} /* namespace jjsPowerGrid */

#endif /* MONEY_H_ */
