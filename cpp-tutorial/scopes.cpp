#include <iostream>
#include <cstdlib>

const int Cat = 1;

int main()
{
    const int Cat = 2;
    std::cout << Cat << std::endl; // Prints 2
    return EXIT_SUCCESS;
}

int dog = Cat; // dog = 1