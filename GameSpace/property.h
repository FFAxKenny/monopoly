/*
* File: property.h
* Name: R4T5
* Date: 4 May 2012
* Rev: v0.1
*/

#ifndef PROPERTY
#define PROPERTY

#include "deed.h"
#include "color.h"

class Property : public Deed
{
	public:
		Property(string n = "Property", CellType t = 4, int r = NON, int p = NON, int o = NON, int c = NON, int h1 = NON, int h2 = NON, int h3 = NON, int h4 = NON, int h = NON, bool m = 0);

		virtual void display(ostream & out) const;

	private:

		int Price;
		int Owner;
		int Color;
		int House1;
		int House2;
		int House3;
		int House4;
		int Hotel;
		bool Mortgage;
};


#endif
