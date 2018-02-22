#include "../include/binary.h"

long long int Binary::to_binary(int decimal)
{
    long long int binary {};
    int position {};

    while (decimal!=0)
    {
        binary += (decimal%2)*position;
        decimal/=2;
        position*=10;
    }
    return binary;
}

int Binary::to_decimal(long long int& binary)
{

}
