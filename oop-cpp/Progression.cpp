#include "Progression.h"
#include <iostream>
using namespace std;

void Progression::printProgression(int n)
{
    cout << firstValue();
    for (int i = 2; i <= n; i++)
        cout << ' ' << nextValue();
    cout << endl;
}

long Progression::firstValue()
{
    cur = first;
    return cur;
}
long Progression::nextValue()
{
    return ++cur;
}

ArithProgression::ArithProgression(long i) : Progression(), inc(i) {}

long ArithProgression::nextValue()
{
    cur += inc;
    return cur;
}

GeomProgression::GeomProgression(long mul) : Progression(1), multiplier(mul) {}

long GeomProgression::nextValue()
{
    cur *= multiplier;
    return cur;
}

FibonacciProgression::FibonacciProgression() : Progression(1)
{
    prevValue = 0;
}

long FibonacciProgression::nextValue()
{
    cur = prevValue + cur;
    prevValue = cur;
    return cur;
}