//	EE205
//	R4T5
//	Final Project
//
//	Monopoly.cc 
//	Main Driver for Final Project
//
// hiii
#include <iostream>
using namespace std;
main()
{

	cout << "Now we're playing monopoly!" << endl;

	cout << "How many players? (1-4)" << endl;

	int players;
	cin >> players;
	while(players < 1 || players > 4)
	{	cout << "Invalid number of players" << endl;
		cout << "How many players? (1-4)" << endl;
		cin >> players;
	}

	// Initialize Board, players
	InitBoard();
	InitPlayers(players);

	int turn = 1;
	int flag = 0;
	int option;
	int roll;
	bool rollCheck;

	while(!flag)
	{
		// Set rollCheck value
		rollCheck = 0;

		// Display options

		DisplayOptions();
		/*
 		Code for DisplayOptions():

		cout << "Choose an option!" << endl;
		cout << "	1) Roll dice" << endl;
		cout << "	2) Manage Properties" << endl;
		cout << "	3) Display Cash" << endl;
		cout << "	4) Trade" << endl;
		cout << "	5) End Turn" << endl;
		*/

		cin >> option;
		// Will keep doing actions until player
		// legally chooses to end turn
		while(option != 5 && !rollCheck)
		if(option == 1)
		{



		DisplayOptions();
		cin >> option;
		}
		else if(option == 2)
		{	


		DisplayOptions();
		cin >> option;
		}
		else if(option == 3)
		{


		DisplayOptions();
		cin >> option;
		}
		else if(option == 4)
		{


		DisplayOptions();
		cin >> option;
		}
		else if(option == 5)
		{	if(!roll)
			{	cout << "Must roll first!" << endl;
				DisplayOptions();
				cin >> option;
			}
			// else do nothing; while loop ends
		}

		// Update next turn; who will go next?
		if(turn < players)
		turn++

		//Go from last player to first
		else if(turn == players) 
		turn = 1;
		else // else invalid!
		{	cerr << "Error!" << endl;
			flag = 1;
		}
	}


/*	ASM:
 * 	start
 *
 * 	init
 * 	player
 * 		1) roll
 * 			update pos
 * 			action block
 * 			check
 * 		2) manage properties
 * 		3) display cash
 * 		4) trade
 *		5) if(rolled)
 *			check
 *			next player
 *
 */










}



