#include "../include/binary.h"

using std::cout;

int main()
{
    cout << "Binary - decimal calculator\n"
         << "Select mode:\n"
         << "1. Binary to decimal\n"
         << "2. Decimal to binary\n";
    int mode {};
    std::cin >> mode;
    cout << "Enter a number: ";

    if (mode == 1)
    {
        long long int number {};
        std::cin >> number;
        cout << Binary::to_decimal(number) << '\n';
    }
    else
    {
        int number {};
        std::cin >> number;
        cout << Binary::to_binary(number) << '\n';
    }
    return 0;
}
