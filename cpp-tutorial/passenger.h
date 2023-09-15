//
// Created by huseyin on 8/24/23.
//

#ifndef CPP_ALGODS_PASSENGER_H
#define CPP_ALGODS_PASSENGER_H
#include<iostream>
#include<string>
using namespace std;
enum MealType
{
    NO_PREF,
    REGULAR,
    LOW_FAT,
    VEGETARIAN
};


class Passenger {
public:
    Passenger(); // default constructor if there are no argumenT
    Passenger(const string& nameOfPass, const MealType& mealPreference,const string& ffn = "None");
    Passenger(const Passenger& pass); // Copy constructor
    bool isFrequentFlyer() const; // const indicates the isFrequentFlyer accessor function
    void makeFrequentFlyer(const string& newFreqFlyerNo); // Indicates makeFrequentFlyer updater function
    string getName() const;
    void setName(const string& newName);
private:
    string name;
    MealType mealPref;
    bool isFreqFlyer;
    string freqFlyerNo;
};


#endif //CPP_ALGODS_PASSENGER_H
