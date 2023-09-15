#include <iostream>
#include <string>

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

int main()
{
    Passenger pass = {"John Smith", VEGETARIAN, true, "293145"};
    pass.name = "Pocahantas";
    pass.mealPref = REGULAR;
}