/*
 * NaturalRessources.h
 *
 *  Created on: Feb 24, 2016
 *      Author: jordan S
 */

#ifndef NATURALRESSOURCES_H_
#define NATURALRESSOURCES_H_

//#include "PlayerAssets.h"
class PlayerAsserts;

namespace jjsPowerGrid {

class NaturalRessources{
private:
	int coal;
	int oil;
	int uranium;
	int garbage;
public:
	NaturalRessources();
	 ~NaturalRessources();

	int getCoal();

	void setCoal(int coal);

	int getGarbage();

	void setGarbage(int garbage);

	int getOil();

	void setOil(int oil);

	int getUranium();

	void setUranium(int uranium);
};

} /* namespace jjsPowerGrid */

#endif /* NATURALRESSOURCES_H_ */
