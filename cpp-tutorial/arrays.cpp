#include <iostream>

int main()
{
    // No runtime check in  C++
    double f[5]{1.2, 2.3, 3.4, 4.5, 5.6};

    for (int i = 0; i < 10; i++)
    {
        std::cout << f[i] << std::endl;
    }
}