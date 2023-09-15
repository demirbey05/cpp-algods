//
// Created by huseyin on 8/24/23.
//

#ifndef CPP_ALGODS_STRUCTS_H
#define CPP_ALGODS_STRUCTS_H
#include<string>
using std::string;

enum MealType
{
    NO_PREF,
    REGULAR,
    LOW_FAT,
    VEGETARIAN
};

struct Passenger
{
    string name;
    MealType mealPref;
    bool isFreqFlyer;
    string freqFlyerNo;
};
#endif //CPP_ALGODS_STRUCTS_H
