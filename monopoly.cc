/*
 *
 *
 * EE 205
 * monopoly.cc
 *
 * Rotation 4 Team 5
 *
 * Main Driver for monopoly
 *
 */

#include <iostream>
#include <vector>
using namespace std;

#include "common.h"
#include "celltype.h"
#include "color.h"

#include "gamespace.h"
#include "deed.h"
#include "property.h"
#include "utility.h"
#include "railroad.h"
#include "tax.h"
#include "misc.h"
//#include "deck.h"

#include "player.h"

#include "container.h"

void DisplaySplash();
int main()
{	
	int players = 0;
	int count = 0;
	vector<Player> Players;

	DisplaySplash();
	
	
	
	cout << "How many players? ";
	cin >> players;

	cout << players << " Players." << endl;
		
	// Add players
	for(vector<Player>::iterator it=Players.begin(); 
				it != Players.end() ; it ++)
	{
		string name;
		count++;
		cout << "Player " << count << "Name :";
		cin >> name
		Players[count].setName(name);
		
	}
	
	// Roll dice to see who goes first
	


	// Begin main loop
	while(1);
		
	



/*
	int NumberPlayers = 3;
	typedef Player PlayerArray[NumberPlayers];

	PlayerArray PA;

	Player A;

	int i = 1;

	cout << "Player " << i << ": " <<endl;
	cout << PA[i] << endl;
*/

}


void DisplaySplash(){

	cout << "We're Playing Monopoly!" << endl;
}


