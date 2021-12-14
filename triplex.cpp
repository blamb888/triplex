#include <iostream>

int main()
{
    // print variable
    std::cout << "You are an intrepid adventurer but this door isn't going to budge.";
    std::cout << std::endl;
    std::cout << "You'll need to enter the right codes to continue...\n";

    const int a = 4;
    const int b = 3;
    const int c = 2;

    const int sum = a + b + c;
    const int product = a * b * c;

    std::cout << sum << std::endl;
    std::cout << product << std::endl;

    return 0;
}
