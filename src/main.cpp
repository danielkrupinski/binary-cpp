#include "../include/binary.h"

int main()
{
    std::cout << "Binary - decimal calculator\n";
    std::cout << "Select mode:\n"
              << "1. Binary to decimal\n"
              << "2. Decimal to binary\n";
    int mode {};
    std::cin >> mode;
    std::cout << "Enter a number: ";
    long long int number {};
    std::cin >> number;
    if (mode == 1)
        std::cout << to_binary(number) << '\n';
    else
        std::cout << to_decimal(number) << '\n';
    return 0;
}
