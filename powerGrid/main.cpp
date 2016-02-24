/*
 * main.cpp
 *
 *  Created on: Feb 23, 2016
 *      Author: jordan S
 */

#include <iostream>
#include <vector>
#include "Player.h"
using namespace std;
namespace jjsPowerGrid {

int main() {

	string name = "";
	string colorChoice = "";
	string colors[]={"red", "yellow", "green", "blue", "purple", "black"};
	bool goodColor = true;
	int numberPlayers = 0;

	cout<<"How many players: (2)";
	cin>>numberPlayers;

	vector<Player> players(numberPlayers);

	for(int i = 0; i < numberPlayers; i++){
		Player *player = new Player();
		players[i] = *player;
	}

	for(unsigned int j = 0; j < players.size(); j++){
		cout<<"Please enter your name (player number "<<j+1<<" )"<<endl;
		cin>>name;
		players[j].setPlayerName(name);
		cout<<"What color do you want to use? "<<endl;
		cout<<"(red, yellow, green, blue, purple, black)"<<endl;
		cin>>colorChoice;
		colorChoice = LowerCase(colorChoice);
		cout<<colorChoice<<endl;

		do{
			for(int i = 0; i < 6; i++){
				if(j > 0){
					if(colors[i]!=colorChoice || players[j-1].getHouseColor()==colorChoice){
										goodColor = false;
									}else{
										goodColor = true;
										players[j].setHouseColor(colorChoice);
										break;
									}
				}else{
					if(colors[i]!=colorChoice){
									goodColor = false;
								}else{
									goodColor = true;
									players[j].setHouseColor(colorChoice);
									break;
								}
				}

			}

			if(!goodColor){
				cout<<"Please enter a valid color."<<endl;
				cin>>colorChoice;
			}
		}while(!goodColor);
	}

	cout<<"\n\nThe list of players are: "<<endl;
	for(unsigned int i =0; i < players.size(); i++){
		cout<<"\n\nPlayer number "<<i+1<<": "<<players[0].getPlayerName()<<endl;
		cout<<"The color of "<<players[i].getPlayerName()<<"'s houses is: "<<players[i].getHouseColor()<<"."<<endl;
		cout<<players[i].getPlayerName()<<" has "<<players[i].getMoney()<<" Electros, ";
		cout<<players[i].getNumberHouses()<<" houses, "<<players[i].getNumberPowerPlants()<<" power plants, and "<<players[i].getNumberCities()<<" cities."<<endl;
		cout<<players[i].getPlayerName()<<" has the following resources: "<<players[i].getCoal()<<" coal, "<<players[i].getGarbage()<<" garbage, "<<players[i].getOil()<<" oil, and "<<players[i].getUranium()<<" uranium."<<endl;

	}

	return 0;




return 0;
} /* namespace jjsPowerGrid */
