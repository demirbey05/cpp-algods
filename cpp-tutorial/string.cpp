#include <iostream>
#include <string>

using std::string;
using namespace std;

int main()
{
    string s = "to be";
    string t = "not " + s;
    string u = s + " or " + t;
    if (s > t)
    {
        cout << u << endl;
    }
}