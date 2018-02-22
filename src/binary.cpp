#include "../include/binary.h"

using std::cout;
using std::cin;

void ask()
{
    cout << "Binary - decimal calculator\n"
         << "Select mode:\n"
         << "1. Binary to decimal\n"
         << "2. Decimal to binary\n";
    int mode {};
    std::cin >> mode;
    cout << "Enter a number: ";
    process(mode);
}

void process(int mode)
{
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
}

long long int Binary::to_binary(int decimal)
{
    long long int binary {};
    int position {1};

    while (decimal!=0)
    {
        binary += (decimal%2)*position;
        decimal /= 2;
        position *= 10;
    }
    return binary;
}

int Binary::to_decimal(long long int& binary)
{
    int decimal {}, position {};

    while (binary!=0)
    {
        decimal += binary%10*pow(2,position);
        binary /= 10;
        ++position;
    }
    return decimal;
}
