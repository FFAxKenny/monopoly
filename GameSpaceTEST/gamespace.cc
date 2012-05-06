/*
 *
 * File Name: gamespace.cc
 * Author: Kevin Hu
 * Date Created: 4/21/12
 * Date Modified: 4/29/12
 * Mod: v0.2
 *
 * File Description:
 *
 *
 *
 */

#include <iostream>
using namespace std;

#include "gamespace.h"
#include "celltype.h"


/*	Constructor	*/
GameSpace :: GameSpace(string n, int t)
 : name(n), type(t)
{ }
	//name = NON;
	//type = NON;
	//price = NON;
	//owner = NON;
	//color = NON;
	//rent = NON;
	//house1 = NON;
	//house2 = NON;
	//house3 = NON;
	//house4 = NON;
	//hotel = NON;
	//mortage = NON;
}


/*	Accessors	*/
string GameSpace::getName() const
{
	return name;
}

string GameSpace::getType() const
{	return type;
}

/*
int GameSpace::getPrice() const
{
	return price;
}
string GameSpace::getOwner() const
{
	return owner;
}

int GameSpace::getColor() const
{
	return color;
}

int GameSpace::getRent() const
{	
	//Calculate Rent later
	return 1;
}

int GameSpace::getHouse1() const
{
	return house1;
}

int GameSpace::getHouse2() const
{
	return house2;
}	

int GameSpace::getHouse3() const
{
	return house4;
}

int GameSpace::getHouse4() const
{
	return house4;
}

int GameSpace::getHotel() const
{
	return hotel;
}

bool GameSpace::getMort() const
{
	return mortage;
}

*/
/*	Mutators	*/
void GameSpace::setName(string n)
{
	name = n;
}

void GameSpace::setType(CellType t)
{	type = t;
}

/*
void GameSpace::setPrice(Price p)
{
	price = p;
}

void GameSpace::setOwner(string o)
{
	owner = o;
}

void GameSpace::setColor(Color c)
{
	color = c;
}

void GameSpace::setRent(Price p)
{
	rent = p;
}

void GameSpace::setHouse1(Price p)
{
	house1 = p;
}

void GameSpace::setHouse2(Price p)
{
	house2 = p;
}

void GameSpace::setHouse3(Price p)
{
	house3 = p;
}

void GameSpace::setHouse4(Price p)
{
	house4 = p;
}

void GameSpace::setHotel(Price p)
{
	hotel = p;
}

void GameSpace::setMortgage(Price p)
{
	mortage = p;
}

void GameSpace::setType(CellType t)
{
	type = t;
}
*/



/*
 *
 *
 * Operators
 *
 */

bool GameSpace::operator==(const GameSpace& other) const
{


	//Don't need the comparison operators
	return 1;

}


bool GameSpace::operator!=(const GameSpace& other) const
{


	//Don't need the comparison operators
	return 1;

}


/*
 *
 * Output Operators
 *
 */


ostream& operator<<(ostream& s, const GameSpace &gs)
{
	s << "Name = " << gs.name << endl;
	s << "Type = " << gs.type << endl;
/*
	if(gs.price != NON)	s << "Price = " << gs.price << endl;
	if(gs.color != NON)	s << "Color = " << gs.color << endl;
	if(gs.rent != NON)	s << "Rent = " << gs.rent << endl;
	if(gs.house1 != NON)	s << "House1 = " << gs.house1 << endl;
	if(gs.house2 != NON)	s << "House2 = " << gs.house2 << endl;
	if(gs.house3 != NON)	s << "House3 = " << gs.house3 << endl;
	if(gs.house4 != NON)	s << "House4 = " << gs.house4 << endl;
	if(gs.hotel != NON)	s << "Hotel = " << gs.hotel << endl;
	if(gs.type == 2 || gs.type == 3 || gs.type == 4)
				s << "Mortage = " << gs.mortage << endl;
*/
	return s;
}
