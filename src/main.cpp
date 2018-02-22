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

    if (mode == 1)
    {
        long long int number {};
        std::cin >> number;
        std::cout << Binary::to_decimal(number) << '\n';
    }
    else
    {
        int number {};
        std::cin >> number;
        std::cout << Binary::to_binary(number) << '\n';
    }
    return 0;
}
