
/* 
 * File: tax.h
 * Name: R4T5
 * Date: 4 May 2012
 * Rev: v0.1
 */

/* ~~~~~~~~~~~~~~~~~~
 * Tax class is derived straight from GameSpace. 
 * It has two more member fields, which deduct the play's balance
 * either by a flat rate or a percent rate.
 * ~~~~~~~~~~~~~~~~~~ */


#ifndef TAX
#define TAX

#include "deed.h"

class Tax : public GameSpace
{

	public:
		Tax(string n = "",int r = NON, int pr = NON);

		void display(ostream & out) const;
		
		int getTax() const;  // Deducts MONEY flat rate
		int getTax(const int money) const;  // Does a mathematical operation
				     		    // using PercentRate to deduct
	private:
		const int PercentRate;
 		const int FlatRate;
// Income Tax:
/* If you land here you have two options: You may estimate your tax at 
 * $200 and pay the Bank, or you may pay 10% of your total worth to the Bank. 
 * Your total worth is all your cash on hand, printed prices of mortgaged and 
 * unmortgaged properties and cost price of all buildings you own.
 * You must decide which option you will take before you add up your total worth
 */
};

#endif
