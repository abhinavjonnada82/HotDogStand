#include <iostream>
#include "hotdogstand.hpp"
#include <cmath>

namespace MyAwesomeBusiness{

int HotDogStand::totHotdogsSold = 0;
int HotDogStand::numStands = 0;
Money HotDogStand::totRevenue = 0.00;
//Static initialization occurs outside the Class

//HotDogStand constructors initializing


HotDogStand::HotDogStand() {
    monStand = 0;
    pricEachHotdog = 3.50;
    numHotdogSold = 0;
    numStands++;
}

HotDogStand::HotDogStand(double val) {
    monStand = 0;
    pricEachHotdog = val;
    numHotdogSold = 0;
    numStands++;
}

const Money HotDogStand::getCash() const {
    return monStand;
}

const Money HotDogStand::getPrice() const {
    return pricEachHotdog;
}
int HotDogStand::getDogsSold() const {
    return numHotdogSold;
}
const Money HotDogStand:: getStandRevenue() const {
    return totRevenue; //pricEachHotdog * numHotdogSold; //totrevenue
}
void HotDogStand::setPrice(double price){
    pricEachHotdog = price;
}
void HotDogStand::sellHotdog(){
    numHotdogSold++;
    monStand.add(pricEachHotdog); //each price of hotdog is added to
    //monStand(rep how much money the hotdog stand has)
    totRevenue.add(monStand); // it adds to the total revenue of the hotdogstand
}
int HotDogStand::getNumStands() {
    return numStands;
}
int HotDogStand::getTotalHotdogsSold() {
     return totHotdogsSold;
 }

const Money HotDogStand::getTotalRevenue() {
    return totRevenue;
}
}
