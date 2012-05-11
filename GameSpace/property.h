/*
* File: property.h
* Name: R4T5
* Date: 4 May 2012
* Rev: v0.1
*/


/* ~~~~~~~~~~~~~~~~~~~~~~~~~~ *
 * Property deeds (GameSpaces) are the basic streets
 * of Monopoly, allowing an owner, rent prices, houses, etc.
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#ifndef PROPERTY
#define PROPERTY

#include "deed.h"
#include "color.h"

class Property : public Deed
{
	public:
		Property(string n = "Property", int r = NON, int p = NON, 
		int c = NON, int h1 = NON, int h2 = NON, 
		int h3 = NON, int h4 = NON, int h = NON);

		virtual void display(ostream & out) const;

	private:
		int color;	// Color set property belongs to
		int house;	// Number of houses on a property
		int house1;	// Price of first house
		int house2;	// House of second house
		int house3;	// House of third house
		int house4;	// House of fourth house
		int hotel;	// House of hotel
};


#endif
