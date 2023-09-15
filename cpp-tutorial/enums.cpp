#include <iostream>

using namespace std;

enum Day
{
    SUN,
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT
};
enum Mood
{
    HAPPY = 3,
    SAD = 1,
    ANXIOUS = 4,
    SLEEPY = 2
};

int main()
{
    Day today = THU;
    Mood myMood = SLEEPY;

    cout << today << endl;
    cout << myMood << endl;
}