/*
 * main.cpp
 *
 *  Created on: Feb 23, 2016
 *      Author: jordan S
 */

#include <iostream>
#include <vector>
#include"PlayerAssets.h"
using namespace std;
using namespace jjsPowerGrid;

int main() {

	string name = "JohnDoe";
	unsigned int colorChoice = 0;
	string colors[] = { "red", "yellow", "green", "blue", "purple", "black" };
	bool validColor = false;
	int numberOfPlayers = 0;


	cout << "How many players: (2)";
	cin >> numberOfPlayers;

	vector<Player> players(numberOfPlayers);

	for(int i = 0; i < numberOfPlayers; i++){
			Player *player = new Player();
			players[i] = *player;
		}
	for (int j = 0; j < players.size(); j++) {
			cout << "Please enter your name (player number " << j + 1 << " )"
					<< endl;
			cin >> name;
			cout << "Choose your playing color? " << endl;
			cout << "(1 for red,2 for yellow,3 for green,4 for blue,5 for purple,6 for black)" << endl;
			cin >> colorChoice;
			do
			{
				validColor = false;
				switch(colorChoice)
							{
							case 1:
							case 2:
							case 3:
							case 4:
							case 5:
							case 6:
								validColor = true;
								cout <<"the Color you picked is: " +colors[colorChoice-1] << endl;
								break;
							default:
								cout <<"The color you chose is invalid, Please type a valid number from the list"<<endl;
								cout << "(1 for red,2 for yellow,3 for green,4 for blue,5 for purple,6 for black)" << endl;
								cin >> colorChoice;
							}
			}
			while(validColor == false);


		players[j].setPlayerName(name);
		players[j].setPlayerColor(colors[colorChoice]);

	}

	cout << "\n\nThe list of players are: " << endl;
	for (unsigned int i = 0; i < players.size(); i++) {
		cout<<players[i].getPlayerName()<<endl;
		cout<<players[i].getPlayerColor()<<endl;

	}


}
 /* namespace jjsPowerGrid */
