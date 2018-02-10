#include <iostream>
#include "money.hpp"
#include <cmath>
#include <string>
#include <stdio.h>

//Money constructors initializing
using std::istream;
using std::ostream;
using std::cout;
using std::cin;

namespace MyAwesomeBusiness {
Money::Money() {
    dollars = 0;
    cents = 0;
}
Money::Money(int dol, int cen) {
    this->dollars = dol;
    this->cents = cen;
}
Money::Money(int dol) {
    dollars = dol;
    cents = 0;
}
Money::Money(double value) {
    int cash;
    cash = value * 100;
    dollars = cash/100;
    cents = cash % 100;
}


// Implement Money Class Functions Here

int Money::getPennies() const {
    return dollars * 100 + cents;
}

bool Money::isNegative() const {
    if (dollars < 0){
        return true;
    }
    else {
        return false;
    }
}
void Money::add(const Money &m) {
	int temp = 0;

     temp = dollars * 100 + cents;
     temp = temp + m.getPennies();

     dollars = temp / 100;
     cents = temp % 100;
     if(cents > 99)
     {
         cents = cents - 100;
         dollars = dollars + 1;
     }

}

bool Money::isEqual(const Money &m) const{
	if(this->dollars == m.dollars && this -> cents == m.cents) {
		return true;
	}
	else {return false;}
}
void Money::print() const {
	if(dollars < 0 || cents < 0)
	{
		std::cout << "($" << dollars * -1 << "." << cents << ")\n";
		return;
	}
	std::cout << "$" << dollars << "." << cents << "\n";
	return;
}
}
