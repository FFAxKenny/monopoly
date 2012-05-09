
/* File: property.cc
 * Name: R4T5
 * Date: 4 May 2012
 * Rev: v0.1
 */

#include <iostream>
#include "property.h"
#include "deed.h"
#include "gamespace.h"

Property :: Property(string n, CellType t, int r, int p, string o, int c, int h1, int h2, int h3, int h4, int h, bool m)
: Deed(n, t, r),
 Price(p), Owner(o), Color(c), 
 House1(h1), House2(h2), House3(h3), House4(h4),    
 Hotel(h), Mortgage(m)
{}



void Property :: display(ostream & out) const
{
	Deed::display(out);
	out << "Price = " << Price << endl;
	out << "Owner = " << Owner << endl;
	out << "Color = " << Color << endl;
	out << "House 1 Price = " << House1 << endl;
	out << "House 2 Price = " << House2 << endl;
	out << "House 3 Price = " << House3 << endl;
	out << "House 4 Price = " << House4 << endl;
	out << "Hotel Price = " << Hotel << endl;
	out << "Mortage = " << Mortgage << endl;
	
}


ostream & operator<<(ostream& s, const Property &p)
{
	p.display(s);
	return s;
}

