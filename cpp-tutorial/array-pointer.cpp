#include <iostream>

using namespace std;

int main()
{
    char c[] = {'c',
                'a',
                't'};
    char *p = c;
    char *q = &c[0];
    cout << c[2] << p[2] << q[2] << endl;
}