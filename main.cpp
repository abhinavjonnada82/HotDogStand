/*
 * Abhinav Jonnada
 * b956d578
 * 1/31/2018
 * Program 3
 *
 */

#include <iomanip>
#include <iostream>
#include <cmath>
#include <random>
#include <stdio.h>

#include "money.hpp"
#include "hotdogstand.hpp"
#include "nonmember.hpp"

using std::cout;
using std::endl;
using namespace MyAwesomeBusiness;

int main()
{
    std::random_device rd; // obtain a random number from hardware
    std::mt19937 generator(rd()); // seed the generator
    std::uniform_int_distribution<int> uni(20, 6);
    std::uniform_int_distribution<int> unid(1, 30);

    int  stand, hotStand;
    int fancyStands = 0;
    double priceFancyStands;
    std::vector<HotDogStand> franchises; //vector for hotdogs

    cout << "How many hotdog stands they own?"<<endl;
    std::cin >> hotStand;
    cout << "how many of those hotdog stands sell fancy hotdogs" <<endl;
    std::cin >> fancyStands;
    if ( fancyStands > 0) {
        cout <<"The price of the fancy hotdogs"<<endl;
        std::cin >> priceFancyStands;
    }
    stand = hotStand - fancyStands;

    for (int i = 0; i < hotStand; i++) {
        franchises.push_back(i);//Adds a new element at the end of the vector, after its current last element.
    }
    for (int j = 0; j < stand; j++){
        for (int c = uni(generator); c != 0; c --)
        {
            franchises[j].setPrice(3.50);
            franchises[j].sellHotdog();
        }
    }
    for (int k = stand; k < hotStand; k++)
    {
        for (int s = unid(generator); s != 0; s--)
        {
            franchises[k].setPrice(priceFancyStands);
            franchises[k].sellHotdog();
        }
    }
    printRundown(franchises, hotStand);
return 0;
}
