#ifndef MONEY_HPP
#define MONEY_HPP


#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <stdio.h>

using std::istream;
using std::ostream;

namespace MyAwesomeBusiness{

class Money {

public:
    Money();
    Money(int dol, int cen);
    Money(int dol);
    Money(double value);
    //Accessor functions
    int getPennies() const;
    bool isNegative() const;
    //Member functions
    void add(const Money &m);
    void subtract(const Money &m);
    bool isEqual(const Money &m) const;
    void print() const;
private:
    int dollars;
	  int cents;
};
}

#endif /*Money_HPP_*/
