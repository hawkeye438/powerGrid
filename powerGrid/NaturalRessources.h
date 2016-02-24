/*
 * NaturalRessources.h
 *
 *  Created on: Feb 24, 2016
 *      Author: jordan S
 */

#ifndef NATURALRESSOURCES_H_
#define NATURALRESSOURCES_H_

#include "PlayerAssets.h"

namespace jjsPowerGrid {

class NaturalRessources: public PlayerAssets {
private:
	int coal;
	int oil;
	int uranium;
	int garbage;
public:
	NaturalRessources();
	virtual ~NaturalRessources();

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
