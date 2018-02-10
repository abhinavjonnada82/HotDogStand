#include <iostream>
#include <iomanip>
#include "hotdogstand.cpp"
#include "money.hpp"
#include "nonmember.hpp"
#include <cmath>

using std::setw;
using std::cout;

namespace MyAwesomeBusiness{


void printRundown(const std::vector<HotDogStand> &franchises, int num) {
     //This function will print the summary that is shown in the sample run below

     //HotdogStand franchises[10];
     Money profit = 0.00;
     double totSales = 0;
     double sales = 0;
     Money pro, m;
     Money price = 0.00;
cout<<setw(5) <<"Stand"<<setw(8)<<"Sales" <<setw(8)<<"Price"<<setw(10)<<"Revenue\n";

for (int i = 0; i < num; i++) {

    sales = franchises[i].getDogsSold(); //usign the vector it prints
    //the number of hotdogs sold which increments the hotdogsols and the price
    price = franchises[i].getPrice(); //returns the price of each hot dog
    m = (franchises[i].getCash());//returns the amount of money in the hotdogstand
    pro = Money(m); //its added to the money object
    cout << setw(5) << i+1 << setw(8) << sales << setw(4);
    price.print(); //prints the price of each hot dog
    cout << setw(4);
    pro.print();//prints the revenue of each hotdog stand
    //cout << std::endl;

    totSales = franchises[i].getDogsSold() + totSales; //prints the tot overall hotdog sold
    profit.add(pro); //prints the tot Revenue of overal hotdogs sold

}
cout << "Total" << setw(7) << totSales << setw(12);
profit.print();
cout << "Number of Stands: "<< num;
}
}
