//
// Created by huseyin on 8/24/23.
//

#include "passenger.h"

Passenger::Passenger() {
    name = "--NO NAME--";
    mealPref = NO_PREF;
    isFreqFlyer= false;
    freqFlyerNo = "NONE";
}
Passenger::Passenger(const std::string &nameOfPass, const MealType &mealPreference, const std::string &ffn)
:name(nameOfPass),mealPref(mealPreference),isFreqFlyer(ffn!= "NONE") { // Initializer list
    freqFlyerNo = ffn;
}
Passenger::Passenger(const Passenger &pass) {
    name = pass.name;
    mealPref = pass.mealPref;
    isFreqFlyer = pass.isFreqFlyer;
    freqFlyerNo = pass.freqFlyerNo;
}
bool Passenger::isFrequentFlyer() const {
    return isFreqFlyer;
}

void Passenger::makeFrequentFlyer(const std::string &newFreqFlyerNo) {
    isFreqFlyer = true;
    freqFlyerNo = newFreqFlyerNo;
}

string Passenger::getName() const {
    return name;
}

void Passenger::setName(const std::string &newName) {
    name = newName;
}