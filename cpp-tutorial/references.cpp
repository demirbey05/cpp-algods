#include <iostream>

int main()
{
    int x = 5;
    int &y = x;
    // references are like aliases

    std::cout << y << std::endl;
}