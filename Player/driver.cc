/* File: driver.cc */

#include "player.h"

#include <iostream>
using namespace std;

main()
{
	int NumberPlayers = 3;
	typedef Player PlayerArray[NumberPlayers];

	PlayerArray PA;

/*
   Player A;
   cout <<"initial balance: " << A.get_balance()<<endl;
   cout << "initial position: "<< A.get_position()<<endl;  
   A.update_balance(1000);
   A.update_balance(-100);
   A.update_position(6);
   A.update_position(-5);
   A.update_position(3);
   A.update_position(-1);
   A.update_position(6);
   A.update_position(4);
   cout << A.get_balance()<<endl;
   cout << A.get_position()<<endl; 

   A.send_to(9001);
   cout << A.get_position()<<endl;
*/

	// Initialize NUMBERPLAYERS players
	for(int i = 0; i < NumberPlayers; i++)
	{	PA[i].update_balance(1000 + i);

		cout << PA[i] << endl;

		//cout << "Player " << i << PA[i] << 
		//" balance: " << PA[i].get_balance() << endl;
	}
}
