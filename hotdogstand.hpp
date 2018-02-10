#ifndef HOTDOGSTAND_HPP
#define HOTDOGSTAND_HPP

#include <iostream>
#include "money.hpp"
#include <random>

namespace MyAwesomeBusiness
{

class HotDogStand {

public:
    HotDogStand();
    HotDogStand(double val);
    const Money getCash() const; // returns the total cash the HotdogStand has
    const Money getPrice() const;
    int getDogsSold() const; //returns the number of hotdogs sold by the stand
    const Money getStandRevenue() const; //calculates the total money made by selling hotdogs
    void setPrice(double price);
    void sellHotdog(); //Increments all appropriate data members accordingly
    static int getNumStands();
    static int getTotalHotdogsSold();
    static const Money getTotalRevenue();
private:
    Money monStand; //A Money object that will represent how much money the stand has made
    Money pricEachHotdog; //A Money object that will represent the price of a hotdog
    int numHotdogSold;//An integer that will describe how many hotdogs a stand has sold
    static int numStands;//A static integer that represents the total number of HotdogStand objects
    static int totHotdogsSold;//A static integer that represents the total number of hotdogs sold
    static Money totRevenue;//A static Money object that represents total revenue for all HotdogStand objects

};
}
#endif /*Hotdogstand_HPP_*/
