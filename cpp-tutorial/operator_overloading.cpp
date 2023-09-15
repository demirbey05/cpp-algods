//
// Created by huseyin on 8/24/23.
//

#include<iostream>
#include<string>
#include "structs.h"

using std::string;
using namespace std;
bool operator==(const Passenger& x, const Passenger& y) {
    return x.name== y.name
           && x.mealPref == y.mealPref
           && x.isFreqFlyer == y.isFreqFlyer
           && x.freqFlyerNo == y.freqFlyerNo;
}

ostream& operator<<(ostream& out, const Passenger& pass ){
    out << pass.name<<" "<<pass.mealPref;
    if(pass.isFreqFlyer){
        out << " " << pass.freqFlyerNo ;
    }
    return out;
}

int main(){
    Passenger pass1 = {"John Smith", VEGETARIAN, true, "293145"};
    Passenger pass2 = {"Jon Smith", VEGETARIAN, true, "293145"};
    std::cout << (pass1 == pass2) << std::endl;
    std::cout << pass2 << std::endl;
}