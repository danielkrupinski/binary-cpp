#include "../include/binary.h"
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

void binary::input()
{
    cout << "Binary - decimal calculator\n"
            "Select mode:\n"
            "1. Binary to decimal\n"
            "2. Decimal to binary\n";
    int mode {0};
    cin >> mode;
    process(mode);
}

void binary::process(int mode)
{
    if (mode == 1) {
        long long int number {0};
        cout << "Enter a number: ";
        cin >> number;
        cout << to_decimal(number) << '\n';
    }
    else if (mode == 2) {
        int number {0};
        cout << "Enter a number: ";
        cin >> number;
        cout << to_binary(number) << '\n';
    }
    else {
        cout << "Invalid mode!\n";
        exit(1);
    }
}

long long int binary::to_binary(int decimal)
{
    long long int binary {0};
    int position {1};

    while (decimal!=0) {
        binary += (decimal%2)*position;
        decimal /= 2;
        position *= 10;
    }
    return binary;
}

int binary::to_decimal(long long int binary)
{
    int decimal {0}, position {0};

    while (binary!=0) {
        decimal += binary%10*pow(2,position);
        binary /= 10;
        ++position;
    }
    return decimal;
}
