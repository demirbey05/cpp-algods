//
// Created by huseyin on 8/24/23.
//
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
struct Passenger
{
    string name;
    MealType mealPref;
    bool isFreqFlyer;
    string freqFlyerNo;
};

void someFunction(const Passenger& pass){
    pass.name = "new name" // It is illegal const args cannot be changed.
}

//passing class and structure arguments as a constant reference allows the compiler
//to do the checking for us. Henceforth, when we pass a class or structure as an
//argument, we typically pass it as a reference, usually a constant reference.