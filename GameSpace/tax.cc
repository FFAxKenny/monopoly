/* File: tax.cc
 * Name: Kevin Hu
 * Date: 9 May 2012
 * Rev: v0.1
 */

#include <iostream>
#include "tax.h"

Tax :: Tax(string n, int r, int pr)
 : GameSpace(n, TAXES),
   PercentRate(pr), FlatRate(r)
{}


void Tax :: display(ostream & out) const
{
	out << "Name = " << name << endl;
	out << "Type = " << type << endl;
	out << "Tax = " << FlatRate << endl;
	out << "Percent Rent Rate = " << PercentRate << endl;
}

int Tax :: getOwner() const
{

}

int Tax :: getTax(int money) const
{
	return (int)(-PercentRate * money)/100;
}

int Tax :: getTax() const
{
	return -FlatRate;
}

