#include <iostream>
using namespace std;

class BinaryToDecimal
{
public:
    int decimalToBinary(int n)
    {
        int place = 1,binary=0;

        while (n != 0)
        {
            int digit = n & 1;
            binary += digit * place;
            place *= 10;
            n >>= 1;
        }

        return binary;
    }
};

int main()
{
    BinaryToDecimal bin;
    int number;
    cin >> number;
    int decimal = bin.decimalToBinary(number);
    cout << decimal << endl;
    return 0;
}