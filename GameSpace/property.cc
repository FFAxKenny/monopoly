
/* File: property.cc
 * Name: R4T5
 * Date: 4 May 2012
 * Rev: v0.1
 */

#include <iostream>
#include "property.h"

Property :: Property(string n, int r, int p, int c, int h1, int h2, int h3, int h4, int h, bool m)
: Deed(n, PROP, r, p, 0),
 color(c), 
 house1(h1), house2(h2), house3(h3), house4(h4),    
 hotel(h), mortgage(m)
{}



void Property :: display(ostream & out) const
{
	// Deed::display(out);
	out << "Name = " << name << endl;
	out << "Type = " << type << endl;
	out << "Rent = " << rent << endl;
	out << "Price = " << price << endl;
	out << "Owner = " << owner << endl;
	out << "Color = " << color << endl;
	out << "House 1 Price = " << house1 << endl;
	out << "House 2 Price = " << house2 << endl;
	out << "House 3 Price = " << house3 << endl;
	out << "House 4 Price = " << house4 << endl;
	out << "Hotel Price = " << hotel << endl;
	out << "Mortage = " << mortgage << endl;
	
}

/*
ostream & operator<<(ostream& s, const Property &p)
{
	p.display(s);
	return s;
}

*/
